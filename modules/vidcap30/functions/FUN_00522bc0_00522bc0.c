/* Module: vidcap30.exe
   Function: FUN_00522bc0
   Address: 00522bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522bc0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_005b8654 == 0)) {
    uVar1 = FUN_00522e80();
    if (uVar1 != 0) {
      DAT_005b8648 = uVar1 / 1000;
      DAT_005b864c = DAT_005b8648 / 1000;
      DAT_005b8644 = uVar1 / DAT_005b864c;
      if (DAT_005b8644 == 1000000) {
        DAT_005b8644 = 0;
      }
      _DAT_005b8650 = 1000;
      PTR_FUN_005b8660 = &LAB_00522ca0;
      PTR_FUN_005b8664 = FUN_00522cd0;
      PTR_FUN_005b8668 = FUN_00522d40;
      PTR_FUN_005b866c = FUN_00522d90;
      PTR_FUN_005b8670 = FUN_00522dc0;
      PTR_FUN_005b8674 = FUN_00522e30;
      DAT_005b8654 = 1;
      _DAT_005b8640 = uVar1;
    }
    (*(code *)PTR_FUN_005b866c)(&DAT_005b8658);
    if (4 < param_1) {
      FUN_00522ea0();
    }
  }
  return;
}


