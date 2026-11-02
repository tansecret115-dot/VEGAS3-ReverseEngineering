/* Module: extmondrv.dll
   Function: FUN_00426960
   Address: 00426960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426960(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0045ac6c == 0)) {
    uVar1 = FUN_00426c20();
    if (uVar1 != 0) {
      DAT_0045ac60 = uVar1 / 1000;
      DAT_0045ac64 = DAT_0045ac60 / 1000;
      DAT_0045ac5c = uVar1 / DAT_0045ac64;
      if (DAT_0045ac5c == 1000000) {
        DAT_0045ac5c = 0;
      }
      _DAT_0045ac68 = 1000;
      PTR_FUN_0045ac78 = &LAB_00426a40;
      PTR_LAB_0045ac7c = FUN_00426a70;
      PTR_FUN_0045ac80 = FUN_00426ae0;
      PTR_FUN_0045ac84 = FUN_00426b30;
      PTR_FUN_0045ac88 = FUN_00426b60;
      PTR_FUN_0045ac8c = FUN_00426bd0;
      DAT_0045ac6c = 1;
      _DAT_0045ac58 = uVar1;
    }
    (*(code *)PTR_FUN_0045ac84)(&DAT_0045ac70);
    if (4 < param_1) {
      FUN_00426c40();
    }
  }
  return;
}


