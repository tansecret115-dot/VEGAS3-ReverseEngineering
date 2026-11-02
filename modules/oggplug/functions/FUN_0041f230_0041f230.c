/* Module: oggplug.dll
   Function: FUN_0041f230
   Address: 0041f230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f230(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00450c84 == 0)) {
    uVar1 = FUN_0041f4f0();
    if (uVar1 != 0) {
      DAT_00450c78 = uVar1 / 1000;
      DAT_00450c7c = DAT_00450c78 / 1000;
      DAT_00450c74 = uVar1 / DAT_00450c7c;
      if (DAT_00450c74 == 1000000) {
        DAT_00450c74 = 0;
      }
      _DAT_00450c80 = 1000;
      PTR_FUN_00450c90 = &LAB_0041f310;
      PTR_LAB_00450c94 = FUN_0041f340;
      PTR_FUN_00450c98 = FUN_0041f3b0;
      PTR_FUN_00450c9c = FUN_0041f400;
      PTR_FUN_00450ca0 = FUN_0041f430;
      PTR_FUN_00450ca4 = FUN_0041f4a0;
      DAT_00450c84 = 1;
      _DAT_00450c70 = uVar1;
    }
    (*(code *)PTR_FUN_00450c9c)(&DAT_00450c88);
    if (4 < param_1) {
      FUN_0041f510();
    }
  }
  return;
}


