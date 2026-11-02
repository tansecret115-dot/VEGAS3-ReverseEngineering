/* Module: wmfdist2.exe
   Function: FUN_01002bab
   Address: 01002bab
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002bab(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  BOOL BVar3;
  
  if (DAT_0100aab8 == 0) {
    if ((DAT_0100aaa4 == 0) && (iVar2 = FUN_01004aaf(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0100aab8 == 0) && (iVar2 = FUN_01003574(), iVar2 == 0)) {
      return 0;
    }
  }
  iVar2 = FUN_01004a26();
  if ((iVar2 != 0) && (bVar1 = FUN_01004df3(), CONCAT31(extraout_var,bVar1) != 0)) {
    if ((DAT_0100aaa4 == 0) &&
       ((DAT_0100b6d0 == 0 && (bVar1 = FUN_01005893(), CONCAT31(extraout_var_00,bVar1) == 0)))) {
      return 0;
    }
    BVar3 = SetCurrentDirectoryA(&DAT_0100ae84);
    if (BVar3 != 0) {
      if ((DAT_0100aaac == 0) && (iVar2 = FUN_01003653(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100adc8 & 0xc0) == 0) {
        DAT_0100bc08 = FUN_01002314(DAT_0100bc04);
      }
      else {
        DAT_0100bc08 = 0;
      }
      if (((DAT_0100aaa4 == 0) && (DAT_0100b6d0 == 0)) && (iVar2 = FUN_010036d1(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100aab8 == 0) && (DAT_0100aaa4 == 0)) {
        FUN_01003ba6();
      }
      return 1;
    }
    FUN_01003e44((HWND)0x0,0x4bc,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010058e2();
  }
  return 0;
}


