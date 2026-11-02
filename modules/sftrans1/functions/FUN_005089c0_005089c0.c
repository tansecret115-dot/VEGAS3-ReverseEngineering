/* Module: sftrans1.dll
   Function: FUN_005089c0
   Address: 005089c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005089c0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_005764dc == 0)) {
    uVar1 = FUN_00508c80();
    if (uVar1 != 0) {
      DAT_005764d0 = uVar1 / 1000;
      DAT_005764d4 = DAT_005764d0 / 1000;
      DAT_005764cc = uVar1 / DAT_005764d4;
      if (DAT_005764cc == 1000000) {
        DAT_005764cc = 0;
      }
      _DAT_005764d8 = 1000;
      PTR_FUN_005764e8 = &LAB_00508aa0;
      PTR_LAB_005764ec = FUN_00508ad0;
      PTR_FUN_005764f0 = FUN_00508b40;
      PTR_FUN_005764f4 = FUN_00508b90;
      PTR_FUN_005764f8 = FUN_00508bc0;
      PTR_FUN_005764fc = FUN_00508c30;
      DAT_005764dc = 1;
      _DAT_005764c8 = uVar1;
    }
    (*(code *)PTR_FUN_005764f4)(&DAT_005764e0);
    if (4 < param_1) {
      FUN_00508ca0();
    }
  }
  return;
}


