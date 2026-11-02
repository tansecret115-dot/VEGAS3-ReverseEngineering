/* Module: hhupd.exe
   Function: FUN_01004e71
   Address: 01004e71
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01004e71(LPCSTR param_1)

{
  int iVar1;
  LPSTR lpString1;
  HANDLE hObject;
  DWORD DVar2;
  
  iVar1 = lstrlenA(param_1);
  lpString1 = LocalAlloc(0x40,iVar1 + 0x14);
  if (lpString1 == (LPSTR)0x0) {
    FUN_01003c23((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  else {
    lstrcpyA(lpString1,param_1);
    FUN_010059ea(lpString1,"~TMP4352.TMP");
    hObject = CreateFileA(lpString1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x4000080,(HANDLE)0x0)
    ;
    LocalFree(lpString1);
    if (hObject != (HANDLE)0xffffffff) {
      CloseHandle(hObject);
      DVar2 = GetFileAttributesA(param_1);
      if ((DVar2 != 0xffffffff) && ((DVar2 & 0x10) != 0)) {
        DAT_0100b704 = 0;
        return 1;
      }
    }
  }
  DAT_0100b704 = FUN_010056b9();
  return 0;
}


