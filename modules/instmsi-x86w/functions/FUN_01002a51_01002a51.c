/* Module: InstMsi-x86w.exe
   Function: FUN_01002a51
   Address: 01002a51
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002a51(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  
  if (DAT_0100aab8 == 0) {
    if ((DAT_0100aaa4 == 0) && (iVar2 = FUN_010048d4(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0100aab8 == 0) && (iVar2 = FUN_010033e8(), iVar2 == 0)) {
      return 0;
    }
  }
  iVar2 = FUN_0100484b();
  if ((iVar2 != 0) && (iVar2 = FUN_01004c18(), iVar2 != 0)) {
    if ((DAT_0100aaa4 == 0) &&
       ((DAT_0100b6d0 == 0 && (bVar1 = FUN_010056af(), CONCAT31(extraout_var,bVar1) == 0)))) {
      return 0;
    }
    BVar3 = SetCurrentDirectoryA(&DAT_0100ae84);
    if (BVar3 != 0) {
      if ((DAT_0100aaac == 0) && (iVar2 = FUN_010034c7(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100adc8 & 0xc0) == 0) {
        DAT_0100bc08 = FUN_010021fb(DAT_0100bc04);
      }
      else {
        DAT_0100bc08 = 0;
      }
      if (((DAT_0100aaa4 == 0) && (DAT_0100b6d0 == 0)) && (iVar2 = FUN_01003545(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100aab8 == 0) && (DAT_0100aaa4 == 0)) {
        FUN_01003a1a();
      }
      return 1;
    }
    FUN_01003cb8((HWND)0x0,0x4bc,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056fe();
  }
  return 0;
}


