/* Module: hhupd.exe
   Function: FUN_01002a37
   Address: 01002a37
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002a37(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  
  if (DAT_0100aab8 == 0) {
    if ((DAT_0100aaa4 == 0) && (iVar2 = FUN_01004846(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0100aab8 == 0) && (iVar2 = FUN_010033bc(), iVar2 == 0)) {
      return 0;
    }
  }
  iVar2 = FUN_010047bd();
  if ((iVar2 != 0) && (iVar2 = FUN_01004b8a(), iVar2 != 0)) {
    if ((DAT_0100aaa4 == 0) &&
       ((DAT_0100b6d0 == 0 && (bVar1 = FUN_0100562b(), CONCAT31(extraout_var,bVar1) == 0)))) {
      return 0;
    }
    BVar3 = SetCurrentDirectoryA(&DAT_0100ae84);
    if (BVar3 != 0) {
      if ((DAT_0100aaac == 0) && (iVar2 = FUN_0100349b(), iVar2 == 0)) {
        return 0;
      }
      DAT_0100bc08 = FUN_010021d5(DAT_0100bc04);
      if (((DAT_0100aaa4 == 0) && (DAT_0100b6d0 == 0)) && (iVar2 = FUN_01003519(), iVar2 == 0)) {
        return 0;
      }
      if ((DAT_0100aab8 == 0) && (DAT_0100aaa4 == 0)) {
        FUN_01003985();
      }
      return 1;
    }
    FUN_01003c23((HWND)0x0,0x4bc,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056b9();
  }
  return 0;
}


