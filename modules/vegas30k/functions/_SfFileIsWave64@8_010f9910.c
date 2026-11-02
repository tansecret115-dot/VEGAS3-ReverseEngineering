/* Module: vegas30k.dll
   Function: _SfFileIsWave64@8
   Address: 010f9910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfFileIsWave64_8(LPCSTR param_1,int param_2)

{
  ushort uVar1;
  HANDLE hFile;
  int iVar2;
  HGLOBAL pvVar3;
  ushort *lpBuffer;
  BOOL BVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint dwBytes;
  bool bVar8;
  uint local_20 [2];
  undefined1 local_18 [8];
  int local_10 [4];
  
                    /* 0xf9910  927  _SfFileIsWave64@8 */
  uVar5 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  iVar2 = riff64_ReadFileID(hFile,local_20,local_10);
  if (iVar2 < 0) goto LAB_010f9a66;
  iVar2 = 4;
  bVar8 = true;
  piVar6 = &DAT_011e3460;
  piVar7 = local_10;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *piVar6 == *piVar7;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (bVar8);
  if ((!bVar8) ||
     (iVar2 = riff64_FindChunkHeader
                        (hFile,DAT_011e3470,DAT_011e3474,DAT_011e3478,DAT_011e347c,local_20,local_18
                        ), iVar2 != 0)) goto LAB_010f9a66;
  dwBytes = local_20[0];
  if (local_20[0] < 0x13) {
    dwBytes = 0x12;
  }
  pvVar3 = GlobalAlloc(0x42,dwBytes);
  lpBuffer = GlobalLock(pvVar3);
  if (lpBuffer == (ushort *)0x0) goto LAB_010f9a66;
  BVar4 = ReadFile(hFile,lpBuffer,dwBytes,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar4 != 0) {
    if (param_2 == 0) {
      uVar1 = *lpBuffer;
      if (uVar1 < 4) {
        if ((uVar1 != 3) && (uVar1 != 1)) {
          uVar5 = 0;
          goto LAB_010f9a4c;
        }
LAB_010f9a1e:
        if ((uint)lpBuffer[6] == (uint)(lpBuffer[7] >> 3) * (uint)lpBuffer[1]) goto LAB_010f9a47;
      }
      else if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_010f9a1e;
      uVar5 = 0;
    }
    else {
LAB_010f9a47:
      uVar5 = 1;
    }
  }
LAB_010f9a4c:
  pvVar3 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar3);
LAB_010f9a66:
  CloseHandle(hFile);
  return uVar5;
}


