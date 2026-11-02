/* Module: vfplugs.dll
   Function: FUN_0044ea50
   Address: 0044ea50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ea50(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00494064 == 0)) {
    uVar1 = FUN_0044ed10();
    if (uVar1 != 0) {
      DAT_00494058 = uVar1 / 1000;
      DAT_0049405c = DAT_00494058 / 1000;
      DAT_00494054 = uVar1 / DAT_0049405c;
      if (DAT_00494054 == 1000000) {
        DAT_00494054 = 0;
      }
      _DAT_00494060 = 1000;
      PTR_FUN_00494070 = &LAB_0044eb30;
      PTR_LAB_00494074 = FUN_0044eb60;
      PTR_FUN_00494078 = FUN_0044ebd0;
      PTR_FUN_0049407c = FUN_0044ec20;
      PTR_FUN_00494080 = FUN_0044ec50;
      PTR_FUN_00494084 = FUN_0044ecc0;
      DAT_00494064 = 1;
      _DAT_00494050 = uVar1;
    }
    (*(code *)PTR_FUN_0049407c)(&DAT_00494068);
    if (4 < param_1) {
      FUN_0044ed30();
    }
  }
  return;
}


