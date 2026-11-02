/* Module: wmfdist2.exe
   Function: FUN_01004a26
   Address: 01004a26
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01004a26(void)

{
  DWORD DVar1;
  int iVar2;
  UINT UVar3;
  
  DVar1 = FUN_01003fe8("FILESIZES",&DAT_0100b6e0,0x24);
  if (DVar1 == 0x24) {
    DAT_0100b098 = DAT_0100b700;
    if (DAT_0100b700 != 0) {
      FUN_01003fe8("PACKINSTSPACE",&DAT_0100b6d8,4);
      iVar2 = FUN_01005901(&LAB_010059d4);
      if (iVar2 == 0) {
        FUN_01003e44((HWND)0x0,0x4c6,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
        return 0;
      }
      return 1;
    }
    UVar3 = 0x4c6;
  }
  else {
    UVar3 = 0x4b1;
  }
  FUN_01003e44((HWND)0x0,UVar3,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  DAT_0100b704 = 0x80070714;
  return 0;
}


