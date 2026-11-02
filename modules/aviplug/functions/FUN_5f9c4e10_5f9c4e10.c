/* Module: aviplug.dll
   Function: FUN_5f9c4e10
   Address: 5f9c4e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9c4e10(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5f9f3aa4 == 0)) {
    uVar1 = FUN_5f9c50d0();
    if (uVar1 != 0) {
      DAT_5f9f3a98 = uVar1 / 1000;
      DAT_5f9f3a9c = DAT_5f9f3a98 / 1000;
      DAT_5f9f3a94 = uVar1 / DAT_5f9f3a9c;
      if (DAT_5f9f3a94 == 1000000) {
        DAT_5f9f3a94 = 0;
      }
      _DAT_5f9f3aa0 = 1000;
      PTR_FUN_5f9f3ab0 = &LAB_5f9c4ef0;
      PTR_LAB_5f9f3ab4 = FUN_5f9c4f20;
      PTR_FUN_5f9f3ab8 = FUN_5f9c4f90;
      PTR_FUN_5f9f3abc = FUN_5f9c4fe0;
      PTR_FUN_5f9f3ac0 = FUN_5f9c5010;
      PTR_FUN_5f9f3ac4 = FUN_5f9c5080;
      DAT_5f9f3aa4 = 1;
      _DAT_5f9f3a90 = uVar1;
    }
    (*(code *)PTR_FUN_5f9f3abc)(&DAT_5f9f3aa8);
    if (4 < param_1) {
      FUN_5f9c50f0();
    }
  }
  return;
}


