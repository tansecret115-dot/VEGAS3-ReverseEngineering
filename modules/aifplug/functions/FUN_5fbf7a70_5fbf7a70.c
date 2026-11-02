/* Module: aifplug.dll
   Function: FUN_5fbf7a70
   Address: 5fbf7a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5fbf7a70(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5fc095ec == 0)) {
    uVar1 = FUN_5fbf7d30();
    if (uVar1 != 0) {
      DAT_5fc095e0 = uVar1 / 1000;
      DAT_5fc095e4 = DAT_5fc095e0 / 1000;
      DAT_5fc095dc = uVar1 / DAT_5fc095e4;
      if (DAT_5fc095dc == 1000000) {
        DAT_5fc095dc = 0;
      }
      _DAT_5fc095e8 = 1000;
      PTR_FUN_5fc095f8 = &LAB_5fbf7b50;
      PTR_LAB_5fc095fc = FUN_5fbf7b80;
      PTR_FUN_5fc09600 = FUN_5fbf7bf0;
      PTR_FUN_5fc09604 = FUN_5fbf7c40;
      PTR_FUN_5fc09608 = FUN_5fbf7c70;
      PTR_FUN_5fc0960c = FUN_5fbf7ce0;
      DAT_5fc095ec = 1;
      _DAT_5fc095d8 = uVar1;
    }
    (*(code *)PTR_FUN_5fc09604)(&DAT_5fc095f0);
    if (4 < param_1) {
      FUN_5fbf7d50();
    }
  }
  return;
}


