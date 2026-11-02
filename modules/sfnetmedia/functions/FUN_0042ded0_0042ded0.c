/* Module: sfnetmedia.dll
   Function: FUN_0042ded0
   Address: 0042ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ded0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0044032c == 0)) {
    uVar1 = FUN_0042e190();
    if (uVar1 != 0) {
      DAT_00440320 = uVar1 / 1000;
      DAT_00440324 = DAT_00440320 / 1000;
      DAT_0044031c = uVar1 / DAT_00440324;
      if (DAT_0044031c == 1000000) {
        DAT_0044031c = 0;
      }
      _DAT_00440328 = 1000;
      PTR_FUN_00440338 = &LAB_0042dfb0;
      PTR_LAB_0044033c = FUN_0042dfe0;
      PTR_FUN_00440340 = FUN_0042e050;
      PTR_FUN_00440344 = FUN_0042e0a0;
      PTR_FUN_00440348 = FUN_0042e0d0;
      PTR_FUN_0044034c = FUN_0042e140;
      DAT_0044032c = 1;
      _DAT_00440318 = uVar1;
    }
    (*(code *)PTR_FUN_00440344)(&DAT_00440330);
    if (4 < param_1) {
      FUN_0042e1b0();
    }
  }
  return;
}


