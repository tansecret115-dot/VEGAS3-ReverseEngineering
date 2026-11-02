/* Module: wmfdist2.exe
   Function: FUN_01004aaf
   Address: 01004aaf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01004aaf(void)

{
  DWORD DVar1;
  LPCSTR lpString1;
  int iVar2;
  
  DVar1 = FUN_01003fe8("UPROMPT",(undefined4 *)0x0,0);
  lpString1 = LocalAlloc(0x40,DVar1 + 1);
  if (lpString1 == (LPCSTR)0x0) {
    FUN_01003e44((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010058e2();
  }
  else {
    DVar1 = FUN_01003fe8("UPROMPT",(undefined4 *)lpString1,DVar1);
    if (DVar1 != 0) {
      iVar2 = lstrcmpA(lpString1,"<None>");
      if (iVar2 == 0) {
        LocalFree(lpString1);
      }
      else {
        iVar2 = FUN_01003e44((HWND)0x0,0x3e9,lpString1,(LPCSTR)0x0,0x20,4);
        LocalFree(lpString1);
        if (iVar2 != 6) {
          DAT_0100b704 = 0x800704c7;
          return 0;
        }
        DAT_0100b704 = 0;
      }
      return 1;
    }
    FUN_01003e44((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    LocalFree(lpString1);
    DAT_0100b704 = 0x80070714;
  }
  return 0;
}


