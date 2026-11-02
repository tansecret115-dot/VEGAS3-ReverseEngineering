/* Module: sfppack2.dll
   Function: FUN_5cd2df10
   Address: 5cd2df10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd2df10(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5cd6367c == 0)) {
    uVar1 = FUN_5cd2e1d0();
    if (uVar1 != 0) {
      DAT_5cd63670 = uVar1 / 1000;
      DAT_5cd63674 = DAT_5cd63670 / 1000;
      DAT_5cd6366c = uVar1 / DAT_5cd63674;
      if (DAT_5cd6366c == 1000000) {
        DAT_5cd6366c = 0;
      }
      _DAT_5cd63678 = 1000;
      PTR_FUN_5cd63688 = &LAB_5cd2dff0;
      PTR_LAB_5cd6368c = FUN_5cd2e020;
      PTR_FUN_5cd63690 = FUN_5cd2e090;
      PTR_FUN_5cd63694 = FUN_5cd2e0e0;
      PTR_FUN_5cd63698 = FUN_5cd2e110;
      PTR_FUN_5cd6369c = FUN_5cd2e180;
      DAT_5cd6367c = 1;
      _DAT_5cd63668 = uVar1;
    }
    (*(code *)PTR_FUN_5cd63694)(&DAT_5cd63680);
    if (4 < param_1) {
      FUN_5cd2e1f0();
    }
  }
  return;
}


