/* Module: InstMsi-x86a.exe
   Function: FUN_0100484b
   Address: 0100484b
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0100484b(void)

{
  DWORD DVar1;
  int iVar2;
  UINT UVar3;
  
  DVar1 = FUN_01003e0b("FILESIZES",&DAT_0100b6e0,0x24);
  if (DVar1 == 0x24) {
    DAT_0100b098 = DAT_0100b700;
    if (DAT_0100b700 != 0) {
      FUN_01003e0b("PACKINSTSPACE",&DAT_0100b6d8,4);
      iVar2 = FUN_0100571d(&LAB_010057f0);
      if (iVar2 == 0) {
        FUN_01003cb8((HWND)0x0,0x4c6,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
        return 0;
      }
      return 1;
    }
    UVar3 = 0x4c6;
  }
  else {
    UVar3 = 0x4b1;
  }
  FUN_01003cb8((HWND)0x0,UVar3,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  DAT_0100b704 = 0x80070714;
  return 0;
}


