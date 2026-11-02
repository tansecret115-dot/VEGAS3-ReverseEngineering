/* Module: g2plug.dll
   Function: FUN_5f83f4a0
   Address: 5f83f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f83f4a0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5f876f1c == 0)) {
    uVar1 = FUN_5f83f760();
    if (uVar1 != 0) {
      DAT_5f876f10 = uVar1 / 1000;
      DAT_5f876f14 = DAT_5f876f10 / 1000;
      DAT_5f876f0c = uVar1 / DAT_5f876f14;
      if (DAT_5f876f0c == 1000000) {
        DAT_5f876f0c = 0;
      }
      _DAT_5f876f18 = 1000;
      PTR_FUN_5f876f28 = &LAB_5f83f580;
      PTR_LAB_5f876f2c = FUN_5f83f5b0;
      PTR_FUN_5f876f30 = FUN_5f83f620;
      PTR_FUN_5f876f34 = FUN_5f83f670;
      PTR_FUN_5f876f38 = FUN_5f83f6a0;
      PTR_FUN_5f876f3c = FUN_5f83f710;
      DAT_5f876f1c = 1;
      _DAT_5f876f08 = uVar1;
    }
    (*(code *)PTR_FUN_5f876f34)(&DAT_5f876f20);
    if (4 < param_1) {
      FUN_5f83f780();
    }
  }
  return;
}


