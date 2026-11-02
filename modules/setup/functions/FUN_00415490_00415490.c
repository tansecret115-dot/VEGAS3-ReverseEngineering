/* Module: Setup.exe
   Function: FUN_00415490
   Address: 00415490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415490(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0044406c == 0)) {
    uVar1 = FUN_00415750();
    if (uVar1 != 0) {
      DAT_00444060 = uVar1 / 1000;
      DAT_00444064 = DAT_00444060 / 1000;
      DAT_0044405c = uVar1 / DAT_00444064;
      if (DAT_0044405c == 1000000) {
        DAT_0044405c = 0;
      }
      _DAT_00444068 = 1000;
      PTR_FUN_00444078 = &LAB_00415570;
      PTR_FUN_0044407c = FUN_004155a0;
      PTR_FUN_00444080 = FUN_00415610;
      PTR_FUN_00444084 = FUN_00415660;
      PTR_FUN_00444088 = FUN_00415690;
      PTR_FUN_0044408c = FUN_00415700;
      DAT_0044406c = 1;
      _DAT_00444058 = uVar1;
    }
    (*(code *)PTR_FUN_00444084)(&DAT_00444070);
    if (4 < param_1) {
      FUN_00415770();
    }
  }
  return;
}


