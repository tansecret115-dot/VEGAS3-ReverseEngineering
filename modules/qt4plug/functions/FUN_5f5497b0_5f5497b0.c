/* Module: qt4plug.dll
   Function: FUN_5f5497b0
   Address: 5f5497b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f5497b0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5f5a3ccc == 0)) {
    uVar1 = FUN_5f549a70();
    if (uVar1 != 0) {
      DAT_5f5a3cc0 = uVar1 / 1000;
      DAT_5f5a3cc4 = DAT_5f5a3cc0 / 1000;
      DAT_5f5a3cbc = uVar1 / DAT_5f5a3cc4;
      if (DAT_5f5a3cbc == 1000000) {
        DAT_5f5a3cbc = 0;
      }
      _DAT_5f5a3cc8 = 1000;
      PTR_FUN_5f5a3cd8 = &LAB_5f549890;
      PTR_LAB_5f5a3cdc = FUN_5f5498c0;
      PTR_FUN_5f5a3ce0 = FUN_5f549930;
      PTR_FUN_5f5a3ce4 = FUN_5f549980;
      PTR_FUN_5f5a3ce8 = FUN_5f5499b0;
      PTR_FUN_5f5a3cec = FUN_5f549a20;
      DAT_5f5a3ccc = 1;
      _DAT_5f5a3cb8 = uVar1;
    }
    (*(code *)PTR_FUN_5f5a3ce4)(&DAT_5f5a3cd0);
    if (4 < param_1) {
      FUN_5f549a90();
    }
  }
  return;
}


