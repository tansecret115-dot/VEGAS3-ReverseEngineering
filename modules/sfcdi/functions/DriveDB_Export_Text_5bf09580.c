/* Module: sfcdi.dll
   Function: DriveDB_Export_Text
   Address: 5bf09580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DriveDB_Export_Text(char *,struct tSFLIST *) */

long DriveDB_Export_Text(char *param_1,tSFLIST *param_2)

{
  uint uVar1;
  LPCSTR pCVar2;
  HANDLE hFile;
  int iVar3;
  DWORD nNumberOfBytesToWrite;
  LPCSTR pCVar4;
  uint uVar5;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_108;
  uchar local_104 [260];
  
                    /* 0x9580  9  ?DriveDB_Export_Text@@YGJPADPAUtSFLIST@@@Z */
  hFile = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ffa;
  }
  uVar5 = 0;
  uVar1 = *(uint *)param_2;
  if (uVar1 != 0) {
    do {
      pCVar2 = *(LPCSTR *)(*(int *)(param_2 + 8) + uVar5 * 4);
      uVar6 = uVar5;
      if ((5 < *(uint *)(pCVar2 + 0x3c)) || (*(uint *)(pCVar2 + 0x3c) == 0)) {
        while (uVar5 = uVar6, uVar5 < uVar1) {
          uVar6 = uVar5 + 1;
          if (param_2 == (tSFLIST *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)param_2;
          }
          if (((int)uVar6 < 0) || (iVar3 + -1 < (int)uVar6)) {
            pCVar4 = (LPCSTR)0x0;
          }
          else {
            pCVar4 = *(LPCSTR *)(*(int *)(param_2 + 8) + uVar6 * 4);
          }
          if ((pCVar4 == (LPCSTR)0x0) || (iVar3 = FUN_5bf09520(pCVar2,pCVar4), iVar3 == 0)) break;
        }
        if ((pCVar2[0x48] & 1U) != 0) {
          FUN_5bf283e0(DAT_5bf65fc4,0x921);
        }
        FUN_5bf25750(local_104,(BYTE *)"\"%s\",\"%s\",%s%s\r\n");
        lpNumberOfBytesWritten = &local_108;
        lpOverlapped = (LPOVERLAPPED)0x0;
        nNumberOfBytesToWrite = lstrlenA((LPCSTR)local_104);
        WriteFile(hFile,local_104,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  CloseHandle(hFile);
  return 0;
}


