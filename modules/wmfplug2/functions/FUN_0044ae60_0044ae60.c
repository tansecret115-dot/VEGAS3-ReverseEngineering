/* Module: wmfplug2.dll
   Function: FUN_0044ae60
   Address: 0044ae60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ae60(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00489a94 == 0)) {
    uVar1 = FUN_0044b120();
    if (uVar1 != 0) {
      DAT_00489a88 = uVar1 / 1000;
      DAT_00489a8c = DAT_00489a88 / 1000;
      DAT_00489a84 = uVar1 / DAT_00489a8c;
      if (DAT_00489a84 == 1000000) {
        DAT_00489a84 = 0;
      }
      _DAT_00489a90 = 1000;
      PTR_FUN_00489aa0 = &LAB_0044af40;
      PTR_LAB_00489aa4 = FUN_0044af70;
      PTR_FUN_00489aa8 = FUN_0044afe0;
      PTR_FUN_00489aac = FUN_0044b030;
      PTR_FUN_00489ab0 = FUN_0044b060;
      PTR_FUN_00489ab4 = FUN_0044b0d0;
      DAT_00489a94 = 1;
      _DAT_00489a80 = uVar1;
    }
    (*(code *)PTR_FUN_00489aac)(&DAT_00489a98);
    if (4 < param_1) {
      FUN_0044b140();
    }
  }
  return;
}


