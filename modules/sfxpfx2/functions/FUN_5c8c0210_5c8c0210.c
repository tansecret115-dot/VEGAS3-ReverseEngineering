/* Module: sfxpfx2.dll
   Function: FUN_5c8c0210
   Address: 5c8c0210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8c0210(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5c8e8a9c == 0)) {
    uVar1 = FUN_5c8c04d0();
    if (uVar1 != 0) {
      DAT_5c8e8a90 = uVar1 / 1000;
      DAT_5c8e8a94 = DAT_5c8e8a90 / 1000;
      DAT_5c8e8a8c = uVar1 / DAT_5c8e8a94;
      if (DAT_5c8e8a8c == 1000000) {
        DAT_5c8e8a8c = 0;
      }
      _DAT_5c8e8a98 = 1000;
      PTR_FUN_5c8e8aa8 = &LAB_5c8c02f0;
      PTR_LAB_5c8e8aac = FUN_5c8c0320;
      PTR_FUN_5c8e8ab0 = FUN_5c8c0390;
      PTR_FUN_5c8e8ab4 = FUN_5c8c03e0;
      PTR_FUN_5c8e8ab8 = FUN_5c8c0410;
      PTR_FUN_5c8e8abc = FUN_5c8c0480;
      DAT_5c8e8a9c = 1;
      _DAT_5c8e8a88 = uVar1;
    }
    (*(code *)PTR_FUN_5c8e8ab4)(&DAT_5c8e8aa0);
    if (4 < param_1) {
      FUN_5c8c04f0();
    }
  }
  return;
}


