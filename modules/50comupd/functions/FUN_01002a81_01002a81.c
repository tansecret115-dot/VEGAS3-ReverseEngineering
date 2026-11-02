/* Module: 50comupd.exe
   Function: FUN_01002a81
   Address: 01002a81
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002a81(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  BOOL BVar3;
  
  if (DAT_0100aab8 == 0) {
    if ((DAT_0100aaa4 == 0) && (iVar2 = FUN_01004902(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0100aab8 == 0) && (iVar2 = FUN_01003418(), iVar2 == 0)) {
      return 0;
    }
  }
  iVar2 = FUN_01004879();
  if ((iVar2 != 0) && (bVar1 = FUN_01004c46(), CONCAT31(extraout_var,bVar1) != 0)) {
    if ((DAT_0100aaa4 == 0) &&
       ((DAT_0100b6d0 == 0 && (bVar1 = FUN_010056e6(), CONCAT31(extraout_var_00,bVar1) == 0)))) {
      return 0;
    }
    BVar3 = SetCurrentDirectoryA(&DAT_0100ae84);
    if (BVar3 != 0) {
      if ((DAT_0100aaac == 0) && (iVar2 = FUN_010034f7(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100adc8 & 0xc0) == 0) {
        DAT_0100bc08 = FUN_010021ed(DAT_0100bc04);
      }
      else {
        DAT_0100bc08 = 0;
      }
      if (((DAT_0100aaa4 == 0) && (DAT_0100b6d0 == 0)) && (iVar2 = FUN_01003575(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100aab8 == 0) && (DAT_0100aaa4 == 0)) {
        FUN_01003a4a();
      }
      return 1;
    }
    FUN_01003ce8((HWND)0x0,0x4bc,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_01005735();
  }
  return 0;
}


