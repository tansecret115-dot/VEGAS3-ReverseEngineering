/* Module: sftrkfx1.dll
   Function: FUN_5cbe1c40
   Address: 5cbe1c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbe1c40(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5cc10f54 == 0)) {
    uVar1 = FUN_5cbe1f00();
    if (uVar1 != 0) {
      DAT_5cc10f48 = uVar1 / 1000;
      DAT_5cc10f4c = DAT_5cc10f48 / 1000;
      DAT_5cc10f44 = uVar1 / DAT_5cc10f4c;
      if (DAT_5cc10f44 == 1000000) {
        DAT_5cc10f44 = 0;
      }
      _DAT_5cc10f50 = 1000;
      PTR_FUN_5cc10f60 = &LAB_5cbe1d20;
      PTR_LAB_5cc10f64 = FUN_5cbe1d50;
      PTR_FUN_5cc10f68 = FUN_5cbe1dc0;
      PTR_FUN_5cc10f6c = FUN_5cbe1e10;
      PTR_FUN_5cc10f70 = FUN_5cbe1e40;
      PTR_FUN_5cc10f74 = FUN_5cbe1eb0;
      DAT_5cc10f54 = 1;
      _DAT_5cc10f40 = uVar1;
    }
    (*(code *)PTR_FUN_5cc10f6c)(&DAT_5cc10f58);
    if (4 < param_1) {
      FUN_5cbe1f20();
    }
  }
  return;
}


