/* Module: sfnetmedia.dll
   Function: FUN_0041fb40
   Address: 0041fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fb40(HWND param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  BYTE *pBVar2;
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
        pBVar2 = FUN_00419120(DAT_00441d60,0x1140);
        FUN_00417320(param_1,pBVar2);
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
          pBVar2 = FUN_00419120(DAT_00441d60,0x1141);
          FUN_00417320(param_1,pBVar2);
        }
        local_1e0[0] = '\0';
        local_190[0] = '\0';
        FileTimeToLocalFileTime(&local_140.ftLastWriteTime,&local_1f8);
        FileTimeToSystemTime(&local_1f8,&local_1f0);
        GetDateFormatA(0x800,2,&local_1f0,(LPCSTR)0x0,local_190,0x50);
        GetTimeFormatA(0x800,0,&local_1f0,(LPCSTR)0x0,local_1e0,0x50);
        if ((&stack0x00000000 != (undefined1 *)0x190) && (&stack0x00000000 != (undefined1 *)0x1e0))
        {
          pBVar2 = FUN_00419120(DAT_00441d60,0x1142);
          FUN_00417320(param_1,pBVar2);
        }
      }
    }
  }
  return;
}


