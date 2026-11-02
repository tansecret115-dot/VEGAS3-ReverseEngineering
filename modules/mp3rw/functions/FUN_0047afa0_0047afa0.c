/* Module: mp3rw.dll
   Function: FUN_0047afa0
   Address: 0047afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047afa0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x4c) = FUN_0047b010;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_3;
  }
  if (param_4 == 0) {
    *(undefined1 **)(param_1 + 0x13e) = &LAB_0047b050;
  }
  else {
    *(int *)(param_1 + 0x13e) = param_4;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00475b80(param_1,"Attempted to set both read_data_fn and write_data_fn in");
    FUN_00475b80(param_1,"the same structure.  Resetting read_data_fn to NULL.");
  }
  return;
}


