/* Module: vidcap30.exe
   Function: FUN_004ba8b0
   Address: 004ba8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ba8b0(undefined4 param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  CHAR *pCVar3;
  CHAR *pCVar4;
  _FILETIME local_1f8;
  _SYSTEMTIME local_1f0;
  CHAR local_1e0 [80];
  CHAR local_190 [80];
  _WIN32_FIND_DATAA local_140;
  
  if (*param_2 != '\0') {
    pvVar1 = FindFirstFileA(param_2,&local_140);
    if (pvVar1 != (HANDLE)0xffffffff) {
      local_1e0[0] = '\0';
      local_190[0] = '\0';
      FileTimeToLocalFileTime(&local_140.ftCreationTime,&local_1f8);
      FileTimeToSystemTime(&local_1f8,&local_1f0);
      GetDateFormatA(0x800,2,&local_1f0,(LPCSTR)0x0,local_190,0x50);
      GetTimeFormatA(0x800,0,&local_1f0,(LPCSTR)0x0,local_1e0,0x50);
      if ((&stack0x00000000 != (undefined1 *)0x190) && (&stack0x00000000 != (undefined1 *)0x1e0)) {
        pCVar4 = local_1e0;
        pCVar3 = local_190;
        uVar2 = _SfGetString2_8(DAT_005c16d8,0x1140);
        SfMEditPrintF(param_1,uVar2,pCVar3,pCVar4);
      }
      if (((byte)local_140.dwFileAttributes & 0x10) == 0) {
        local_1e0[0] = '\0';
        local_190[0] = '\0';
        FileTimeToLocalFileTime(&local_140.ftLastAccessTime,&local_1f8);
        FileTimeToSystemTime(&local_1f8,&local_1f0);
        GetDateFormatA(0x800,2,&local_1f0,(LPCSTR)0x0,local_190,0x50);
        GetTimeFormatA(0x800,0,&local_1f0,(LPCSTR)0x0,local_1e0,0x50);
        if ((&stack0x00000000 != (undefined1 *)0x190) && (&stack0x00000000 != (undefined1 *)0x1e0))
        {
          pCVar4 = local_1e0;
          pCVar3 = local_190;
          uVar2 = _SfGetString2_8(DAT_005c16d8,0x1141);
          SfMEditPrintF(param_1,uVar2,pCVar3,pCVar4);
        }
        local_1e0[0] = '\0';
        local_190[0] = '\0';
        FileTimeToLocalFileTime(&local_140.ftLastWriteTime,&local_1f8);
        FileTimeToSystemTime(&local_1f8,&local_1f0);
        GetDateFormatA(0x800,2,&local_1f0,(LPCSTR)0x0,local_190,0x50);
        GetTimeFormatA(0x800,0,&local_1f0,(LPCSTR)0x0,local_1e0,0x50);
        if ((&stack0x00000000 != (undefined1 *)0x190) && (&stack0x00000000 != (undefined1 *)0x1e0))
        {
          pCVar4 = local_1e0;
          pCVar3 = local_190;
          uVar2 = _SfGetString2_8(DAT_005c16d8,0x1142);
          SfMEditPrintF(param_1,uVar2,pCVar3,pCVar4);
        }
      }
    }
  }
  return;
}


