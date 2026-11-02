/* Module: sftrans1.dll
   Function: FUN_004da4e0
   Address: 004da4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004da4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  byte bVar1;
  
  if (DAT_005fbd8c == (code *)0x0) {
    bVar1 = FUN_004c4f30(0xff);
    if (((bVar1 & 0x20) != 0) && ((bVar1 & 0xf) == 6)) {
      DAT_005fbd8c = FUN_004d9d50;
    }
    if (DAT_005fbd8c == (code *)0x0) {
      DAT_005fbd8c = FUN_004da170;
    }
  }
  (*DAT_005fbd8c)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13);
  return;
}


