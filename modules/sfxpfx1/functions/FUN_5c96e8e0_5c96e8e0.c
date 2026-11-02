/* Module: sfxpfx1.dll
   Function: FUN_5c96e8e0
   Address: 5c96e8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c96e8e0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5c997e64 == 0)) {
    uVar1 = FUN_5c96eba0();
    if (uVar1 != 0) {
      DAT_5c997e58 = uVar1 / 1000;
      DAT_5c997e5c = DAT_5c997e58 / 1000;
      DAT_5c997e54 = uVar1 / DAT_5c997e5c;
      if (DAT_5c997e54 == 1000000) {
        DAT_5c997e54 = 0;
      }
      _DAT_5c997e60 = 1000;
      PTR_FUN_5c997e70 = &LAB_5c96e9c0;
      PTR_LAB_5c997e74 = FUN_5c96e9f0;
      PTR_FUN_5c997e78 = FUN_5c96ea60;
      PTR_FUN_5c997e7c = FUN_5c96eab0;
      PTR_FUN_5c997e80 = FUN_5c96eae0;
      PTR_FUN_5c997e84 = FUN_5c96eb50;
      DAT_5c997e64 = 1;
      _DAT_5c997e50 = uVar1;
    }
    (*(code *)PTR_FUN_5c997e7c)(&DAT_5c997e68);
    if (4 < param_1) {
      FUN_5c96ebc0();
    }
  }
  return;
}


