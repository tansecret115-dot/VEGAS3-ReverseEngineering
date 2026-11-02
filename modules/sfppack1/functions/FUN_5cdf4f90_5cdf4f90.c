/* Module: sfppack1.dll
   Function: FUN_5cdf4f90
   Address: 5cdf4f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cdf4f90(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5ce22ef4 == 0)) {
    uVar1 = FUN_5cdf5250();
    if (uVar1 != 0) {
      DAT_5ce22ee8 = uVar1 / 1000;
      DAT_5ce22eec = DAT_5ce22ee8 / 1000;
      DAT_5ce22ee4 = uVar1 / DAT_5ce22eec;
      if (DAT_5ce22ee4 == 1000000) {
        DAT_5ce22ee4 = 0;
      }
      _DAT_5ce22ef0 = 1000;
      PTR_FUN_5ce22f00 = &LAB_5cdf5070;
      PTR_LAB_5ce22f04 = FUN_5cdf50a0;
      PTR_FUN_5ce22f08 = FUN_5cdf5110;
      PTR_FUN_5ce22f0c = FUN_5cdf5160;
      PTR_FUN_5ce22f10 = FUN_5cdf5190;
      PTR_FUN_5ce22f14 = FUN_5cdf5200;
      DAT_5ce22ef4 = 1;
      _DAT_5ce22ee0 = uVar1;
    }
    (*(code *)PTR_FUN_5ce22f0c)(&DAT_5ce22ef8);
    if (4 < param_1) {
      FUN_5cdf5270();
    }
  }
  return;
}


