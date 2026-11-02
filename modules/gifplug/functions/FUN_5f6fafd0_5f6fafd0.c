/* Module: gifplug.dll
   Function: FUN_5f6fafd0
   Address: 5f6fafd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6fafd0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5f70be3c == 0)) {
    uVar1 = FUN_5f6fb290();
    if (uVar1 != 0) {
      DAT_5f70be30 = uVar1 / 1000;
      DAT_5f70be34 = DAT_5f70be30 / 1000;
      DAT_5f70be2c = uVar1 / DAT_5f70be34;
      if (DAT_5f70be2c == 1000000) {
        DAT_5f70be2c = 0;
      }
      _DAT_5f70be38 = 1000;
      PTR_FUN_5f70be48 = &LAB_5f6fb0b0;
      PTR_LAB_5f70be4c = FUN_5f6fb0e0;
      PTR_FUN_5f70be50 = FUN_5f6fb150;
      PTR_FUN_5f70be54 = FUN_5f6fb1a0;
      PTR_FUN_5f70be58 = FUN_5f6fb1d0;
      PTR_FUN_5f70be5c = FUN_5f6fb240;
      DAT_5f70be3c = 1;
      _DAT_5f70be28 = uVar1;
    }
    (*(code *)PTR_FUN_5f70be54)(&DAT_5f70be40);
    if (4 < param_1) {
      FUN_5f6fb2b0();
    }
  }
  return;
}


