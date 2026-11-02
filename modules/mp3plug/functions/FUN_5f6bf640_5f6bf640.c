/* Module: mp3plug.dll
   Function: FUN_5f6bf640
   Address: 5f6bf640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6bf640(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5f73e574 == 0)) {
    uVar1 = FUN_5f6bf900();
    if (uVar1 != 0) {
      DAT_5f73e568 = uVar1 / 1000;
      DAT_5f73e56c = DAT_5f73e568 / 1000;
      DAT_5f73e564 = uVar1 / DAT_5f73e56c;
      if (DAT_5f73e564 == 1000000) {
        DAT_5f73e564 = 0;
      }
      _DAT_5f73e570 = 1000;
      PTR_FUN_5f73e580 = &LAB_5f6bf720;
      PTR_LAB_5f73e584 = FUN_5f6bf750;
      PTR_FUN_5f73e588 = FUN_5f6bf7c0;
      PTR_FUN_5f73e58c = FUN_5f6bf810;
      PTR_FUN_5f73e590 = FUN_5f6bf840;
      PTR_FUN_5f73e594 = FUN_5f6bf8b0;
      DAT_5f73e574 = 1;
      _DAT_5f73e560 = uVar1;
    }
    (*(code *)PTR_FUN_5f73e58c)(&DAT_5f73e578);
    if (4 < param_1) {
      FUN_5f6bf920();
    }
  }
  return;
}


