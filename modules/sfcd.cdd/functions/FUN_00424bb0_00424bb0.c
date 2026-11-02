/* Module: sfcd.cdd
   Function: FUN_00424bb0
   Address: 00424bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424bb0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_004414cc == 0)) {
    uVar1 = FUN_00424e70();
    if (uVar1 != 0) {
      DAT_004414c0 = uVar1 / 1000;
      DAT_004414c4 = DAT_004414c0 / 1000;
      DAT_004414bc = uVar1 / DAT_004414c4;
      if (DAT_004414bc == 1000000) {
        DAT_004414bc = 0;
      }
      _DAT_004414c8 = 1000;
      PTR_FUN_004414d8 = &LAB_00424c90;
      PTR_LAB_004414dc = FUN_00424cc0;
      PTR_FUN_004414e0 = FUN_00424d30;
      PTR_FUN_004414e4 = FUN_00424d80;
      PTR_FUN_004414e8 = FUN_00424db0;
      PTR_FUN_004414ec = FUN_00424e20;
      DAT_004414cc = 1;
      _DAT_004414b8 = uVar1;
    }
    (*(code *)PTR_FUN_004414e4)(&DAT_004414d0);
    if (4 < param_1) {
      FUN_00424e90();
    }
  }
  return;
}


