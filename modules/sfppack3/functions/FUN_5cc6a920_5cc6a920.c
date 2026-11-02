/* Module: sfppack3.dll
   Function: FUN_5cc6a920
   Address: 5cc6a920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cc6a920(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5cc979d4 == 0)) {
    uVar1 = FUN_5cc6abe0();
    if (uVar1 != 0) {
      DAT_5cc979c8 = uVar1 / 1000;
      DAT_5cc979cc = DAT_5cc979c8 / 1000;
      DAT_5cc979c4 = uVar1 / DAT_5cc979cc;
      if (DAT_5cc979c4 == 1000000) {
        DAT_5cc979c4 = 0;
      }
      _DAT_5cc979d0 = 1000;
      PTR_FUN_5cc979e0 = &LAB_5cc6aa00;
      PTR_LAB_5cc979e4 = FUN_5cc6aa30;
      PTR_FUN_5cc979e8 = FUN_5cc6aaa0;
      PTR_FUN_5cc979ec = FUN_5cc6aaf0;
      PTR_FUN_5cc979f0 = FUN_5cc6ab20;
      PTR_FUN_5cc979f4 = FUN_5cc6ab90;
      DAT_5cc979d4 = 1;
      _DAT_5cc979c0 = uVar1;
    }
    (*(code *)PTR_FUN_5cc979ec)(&DAT_5cc979d8);
    if (4 < param_1) {
      FUN_5cc6ac00();
    }
  }
  return;
}


