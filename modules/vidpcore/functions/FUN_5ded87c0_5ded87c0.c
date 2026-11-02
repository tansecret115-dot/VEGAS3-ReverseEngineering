/* Module: vidpcore.dll
   Function: FUN_5ded87c0
   Address: 5ded87c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ded87c0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5df3e83c == 0)) {
    uVar1 = FUN_5ded8a80();
    if (uVar1 != 0) {
      DAT_5df3e830 = uVar1 / 1000;
      DAT_5df3e834 = DAT_5df3e830 / 1000;
      DAT_5df3e82c = uVar1 / DAT_5df3e834;
      if (DAT_5df3e82c == 1000000) {
        DAT_5df3e82c = 0;
      }
      _DAT_5df3e838 = 1000;
      PTR_FUN_5df3e848 = &LAB_5ded88a0;
      PTR_LAB_5df3e84c = FUN_5ded88d0;
      PTR_FUN_5df3e850 = FUN_5ded8940;
      PTR_FUN_5df3e854 = FUN_5ded8990;
      PTR_FUN_5df3e858 = FUN_5ded89c0;
      PTR_FUN_5df3e85c = FUN_5ded8a30;
      DAT_5df3e83c = 1;
      _DAT_5df3e828 = uVar1;
    }
    (*(code *)PTR_FUN_5df3e854)(&DAT_5df3e840);
    if (4 < param_1) {
      FUN_5ded8aa0();
    }
  }
  return;
}


