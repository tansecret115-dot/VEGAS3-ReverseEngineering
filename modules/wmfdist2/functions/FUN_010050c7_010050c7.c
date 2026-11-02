/* Module: wmfdist2.exe
   Function: FUN_010050c7
   Address: 010050c7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010050c7(LPCSTR param_1)

{
  int iVar1;
  LPSTR lpString1;
  HANDLE hObject;
  DWORD DVar2;
  
  iVar1 = lstrlenA(param_1);
  lpString1 = LocalAlloc(0x40,iVar1 + 0x14);
  if (lpString1 == (LPSTR)0x0) {
    FUN_01003e44((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  else {
    lstrcpyA(lpString1,param_1);
    FUN_01005c31(lpString1,"TMP4351$.TMP");
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
  DAT_0100b704 = FUN_010058e2();
  return 0;
}


