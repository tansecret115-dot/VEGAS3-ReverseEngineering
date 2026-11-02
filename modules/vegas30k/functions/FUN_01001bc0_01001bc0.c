/* Module: vegas30k.dll
   Function: FUN_01001bc0
   Address: 01001bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01001bc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  switch(param_2) {
  case 0:
    DAT_0120e5b8 = DAT_0120e5b8 + -1;
    FUN_01001b90(1);
    uVar1 = FUN_01001a50(param_1);
    return uVar1;
  case 1:
    uVar1 = FUN_01001980(param_1);
    thunk_FUN_0105aa10();
  case 2:
    DAT_0120e5b8 = DAT_0120e5b8 + 1;
    return uVar1;
  case 3:
    DAT_0120e5b8 = DAT_0120e5b8 + -1;
    FUN_01001b90(0);
  default:
    return 1;
  }
}


