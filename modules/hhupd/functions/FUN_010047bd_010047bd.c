/* Module: hhupd.exe
   Function: FUN_010047bd
   Address: 010047bd
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010047bd(void)

{
  DWORD DVar1;
  int iVar2;
  UINT UVar3;
  
  DVar1 = FUN_01003d7d("FILESIZES",&DAT_0100b6e0,0x24);
  if (DVar1 == 0x24) {
    DAT_0100b098 = DAT_0100b700;
    if (DAT_0100b700 != 0) {
      FUN_01003d7d("PACKINSTSPACE",&DAT_0100b6d8,4);
      iVar2 = FUN_010056d8(&LAB_010057ab);
      if (iVar2 == 0) {
        FUN_01003c23((HWND)0x0,0x4c6,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
        return 0;
      }
      return 1;
    }
    UVar3 = 0x4c6;
  }
  else {
    UVar3 = 0x4b1;
  }
  FUN_01003c23((HWND)0x0,UVar3,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  DAT_0100b704 = 0x80070714;
  return 0;
}


