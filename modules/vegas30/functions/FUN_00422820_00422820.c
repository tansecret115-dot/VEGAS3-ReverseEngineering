/* Module: vegas30.exe
   Function: FUN_00422820
   Address: 00422820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00422820(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 3:
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = FUN_00574790(*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
      return uVar1;
    }
    break;
  case 4:
    uVar1 = FUN_00574790(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
    return uVar1;
  }
  return 0;
}


