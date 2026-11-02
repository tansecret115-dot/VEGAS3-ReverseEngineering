/* Module: sctplug.dll
   Function: FUN_0042d740
   Address: 0042d740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d740(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0043ca0c == 0)) {
    uVar1 = FUN_0042da00();
    if (uVar1 != 0) {
      DAT_0043ca00 = uVar1 / 1000;
      DAT_0043ca04 = DAT_0043ca00 / 1000;
      DAT_0043c9fc = uVar1 / DAT_0043ca04;
      if (DAT_0043c9fc == 1000000) {
        DAT_0043c9fc = 0;
      }
      _DAT_0043ca08 = 1000;
      PTR_FUN_0043ca18 = &LAB_0042d820;
      PTR_LAB_0043ca1c = FUN_0042d850;
      PTR_FUN_0043ca20 = FUN_0042d8c0;
      PTR_FUN_0043ca24 = FUN_0042d910;
      PTR_FUN_0043ca28 = FUN_0042d940;
      PTR_FUN_0043ca2c = FUN_0042d9b0;
      DAT_0043ca0c = 1;
      _DAT_0043c9f8 = uVar1;
    }
    (*(code *)PTR_FUN_0043ca24)(&DAT_0043ca10);
    if (4 < param_1) {
      FUN_0042da20();
    }
  }
  return;
}


