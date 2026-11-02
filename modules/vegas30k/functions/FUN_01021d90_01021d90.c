/* Module: vegas30k.dll
   Function: FUN_01021d90
   Address: 01021d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01021d90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(**(undefined4 **)(param_1 + 0xc)) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 0xe:
    uVar1 = FUN_01021f40(param_1,param_2,param_3);
    return uVar1;
  case 7:
    uVar1 = FUN_01021e10(param_1,param_2,param_3);
    return uVar1;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    uVar1 = FUN_01022130(param_1,param_2,param_3);
  }
  return uVar1;
}


