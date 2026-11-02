/* Module: vegas30k.dll
   Function: _SfFileIsWave@8
   Address: 010f97f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfFileIsWave_8(LPCSTR param_1,int param_2)

{
  ushort uVar1;
  HANDLE hFile;
  int iVar2;
  ushort *lpBuffer;
  BOOL BVar3;
  undefined4 uVar4;
  int local_c;
  undefined1 local_8 [4];
  DWORD local_4;
  
                    /* 0xf97f0  928  _SfFileIsWave@8 */
  uVar4 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  riff_ReadFileID(hFile,local_8,&local_c);
  if (((local_c != 0x45564157) ||
      (iVar2 = riff_FindChunkHeader(hFile,0x20746d66,&param_1,local_8), iVar2 != 0)) ||
     (lpBuffer = calloc(1,(size_t)param_1), lpBuffer == (ushort *)0x0)) goto LAB_010f98ed;
  BVar3 = ReadFile(hFile,lpBuffer,(DWORD)param_1,&local_4,(LPOVERLAPPED)0x0);
  if (BVar3 != 0) {
    if (param_2 == 0) {
      uVar1 = *lpBuffer;
      if (uVar1 < 4) {
        if ((uVar1 != 3) && (uVar1 != 1)) goto LAB_010f98e3;
LAB_010f98b7:
        if ((uint)lpBuffer[6] == (uint)(lpBuffer[7] >> 3) * (uint)lpBuffer[1]) goto LAB_010f98de;
      }
      else if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_010f98b7;
      uVar4 = 0;
    }
    else {
LAB_010f98de:
      uVar4 = 1;
    }
  }
LAB_010f98e3:
  free(lpBuffer);
LAB_010f98ed:
  CloseHandle(hFile);
  return uVar4;
}


