/* Module: sfcdi.dll
   Function: DriveDB_Export_Bin
   Address: 5bf096d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DriveDB_Export_Bin(char *,struct tSFLIST *) */

long DriveDB_Export_Bin(char *param_1,tSFLIST *param_2)

{
  uint uVar1;
  byte *lpBuffer;
  HANDLE hFile;
  int iVar2;
  uint uVar3;
  uint uVar4;
  LPCSTR pCVar5;
  uint local_20;
  LONG local_14;
  DWORD local_10;
  undefined4 local_c;
  char *local_8;
  uint local_4;
  
                    /* 0x96d0  8  ?DriveDB_Export_Bin@@YGJPADPAUtSFLIST@@@Z */
  uVar3 = 0;
  local_20 = 0;
  hFile = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ffa;
  }
  local_8 = (char *)0x0;
  param_1 = (char *)0x0;
  local_4 = 0;
  local_c = 0x102;
  WriteFile(hFile,&local_c,0xc,&local_10,(LPOVERLAPPED)0x0);
  uVar1 = *(uint *)param_2;
  if (uVar1 != 0) {
    do {
      lpBuffer = *(byte **)(*(int *)(param_2 + 8) + uVar3 * 4);
      uVar4 = uVar3;
      if (5 < *(uint *)(lpBuffer + 0x3c)) {
        while (uVar3 = uVar4, uVar3 < uVar1) {
          uVar4 = uVar3 + 1;
          if (param_2 == (tSFLIST *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)param_2;
          }
          if (((int)uVar4 < 0) || (iVar2 + -1 < (int)uVar4)) {
            pCVar5 = (LPCSTR)0x0;
          }
          else {
            pCVar5 = *(LPCSTR *)(*(int *)(param_2 + 8) + uVar4 * 4);
          }
          if ((pCVar5 == (LPCSTR)0x0) || (iVar2 = FUN_5bf09520((LPCSTR)lpBuffer,pCVar5), iVar2 == 0)
             ) break;
        }
        WriteFile(hFile,lpBuffer,0x7c,&local_10,(LPOVERLAPPED)0x0);
        local_20 = FUN_5bf0e1c0(local_20,lpBuffer,0x7c);
        param_1 = param_1 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  local_14 = 0;
  SetFilePointer(hFile,0,&local_14,0);
  local_8 = param_1;
  local_c = 0x102;
  local_4 = local_20;
  WriteFile(hFile,&local_c,0xc,&local_10,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  return 0;
}


