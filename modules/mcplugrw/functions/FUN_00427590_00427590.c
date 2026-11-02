/* Module: mcplugrw.dll
   Function: FUN_00427590
   Address: 00427590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427590(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_004a6494 == 0)) {
    uVar1 = FUN_00427850();
    if (uVar1 != 0) {
      DAT_004a6488 = uVar1 / 1000;
      DAT_004a648c = DAT_004a6488 / 1000;
      DAT_004a6484 = uVar1 / DAT_004a648c;
      if (DAT_004a6484 == 1000000) {
        DAT_004a6484 = 0;
      }
      _DAT_004a6490 = 1000;
      PTR_FUN_004a64a0 = &LAB_00427670;
      PTR_LAB_004a64a4 = FUN_004276a0;
      PTR_FUN_004a64a8 = FUN_00427710;
      PTR_FUN_004a64ac = FUN_00427760;
      PTR_FUN_004a64b0 = FUN_00427790;
      PTR_FUN_004a64b4 = FUN_00427800;
      DAT_004a6494 = 1;
      _DAT_004a6480 = uVar1;
    }
    (*(code *)PTR_FUN_004a64ac)(&DAT_004a6498);
    if (4 < param_1) {
      FUN_00427870();
    }
  }
  return;
}


