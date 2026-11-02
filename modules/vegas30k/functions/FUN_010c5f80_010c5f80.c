/* Module: vegas30k.dll
   Function: FUN_010c5f80
   Address: 010c5f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c5f80(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0120653c == 0)) {
    uVar1 = FUN_010c6240();
    if (uVar1 != 0) {
      DAT_01206530 = uVar1 / 1000;
      DAT_01206534 = DAT_01206530 / 1000;
      DAT_0120652c = uVar1 / DAT_01206534;
      if (DAT_0120652c == 1000000) {
        DAT_0120652c = 0;
      }
      _DAT_01206538 = 1000;
      PTR_FUN_01206548 = &LAB_010c6060;
      PTR_FUN_0120654c = FUN_010c6090;
      PTR_FUN_01206550 = FUN_010c6100;
      PTR_FUN_01206554 = FUN_010c6150;
      PTR_FUN_01206558 = FUN_010c6180;
      PTR_FUN_0120655c = FUN_010c61f0;
      DAT_0120653c = 1;
      DAT_01206528 = uVar1;
    }
    (*(code *)PTR_FUN_01206554)(&DAT_01206540);
    if (4 < param_1) {
      FUN_010c6260();
    }
  }
  return;
}


