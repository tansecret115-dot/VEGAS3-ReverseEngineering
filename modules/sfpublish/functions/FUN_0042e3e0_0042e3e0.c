/* Module: sfpublish.dll
   Function: FUN_0042e3e0
   Address: 0042e3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e3e0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00440254 == 0)) {
    uVar1 = FUN_0042e6a0();
    if (uVar1 != 0) {
      DAT_00440248 = uVar1 / 1000;
      DAT_0044024c = DAT_00440248 / 1000;
      DAT_00440244 = uVar1 / DAT_0044024c;
      if (DAT_00440244 == 1000000) {
        DAT_00440244 = 0;
      }
      _DAT_00440250 = 1000;
      PTR_FUN_00440260 = &LAB_0042e4c0;
      PTR_LAB_00440264 = FUN_0042e4f0;
      PTR_FUN_00440268 = FUN_0042e560;
      PTR_FUN_0044026c = FUN_0042e5b0;
      PTR_FUN_00440270 = FUN_0042e5e0;
      PTR_FUN_00440274 = FUN_0042e650;
      DAT_00440254 = 1;
      _DAT_00440240 = uVar1;
    }
    (*(code *)PTR_FUN_0044026c)(&DAT_00440258);
    if (4 < param_1) {
      FUN_0042e6c0();
    }
  }
  return;
}


