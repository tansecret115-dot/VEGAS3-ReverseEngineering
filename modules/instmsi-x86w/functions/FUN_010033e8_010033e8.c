/* Module: InstMsi-x86w.exe
   Function: FUN_010033e8
   Address: 010033e8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010033e8(void)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = FUN_01003e0b("LICENSE",(undefined4 *)0x0,0);
  DAT_0100bc00 = LocalAlloc(0x40,DVar1 + 1);
  if (DAT_0100bc00 == (LPCSTR)0x0) {
    FUN_01003cb8((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056fe();
  }
  else {
    DVar1 = FUN_01003e0b("LICENSE",(undefined4 *)DAT_0100bc00,DVar1);
    if (DVar1 != 0) {
      iVar2 = lstrcmpA(DAT_0100bc00,"<None>");
      if (iVar2 == 0) {
        LocalFree(DAT_0100bc00);
      }
      else {
        iVar2 = FUN_0100592b(DAT_0100b6dc,(LPCSTR)0x7d1,(HWND)0x0,FUN_01002bb2,0,0);
        LocalFree(DAT_0100bc00);
        if (iVar2 == 0) {
          DAT_0100b704 = 0x800704c7;
          return 0;
        }
      }
      DAT_0100b704 = 0;
      return 1;
    }
    FUN_01003cb8((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    LocalFree(DAT_0100bc00);
    DAT_0100b704 = 0x80070714;
  }
  return 0;
}


