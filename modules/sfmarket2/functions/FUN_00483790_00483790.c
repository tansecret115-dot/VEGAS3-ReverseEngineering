/* Module: sfmarket2.dll
   Function: FUN_00483790
   Address: 00483790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483790(int param_1,undefined4 param_2,int param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x4c) = FUN_00483800;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_3;
  }
  if (param_4 == 0) {
    *(undefined1 **)(param_1 + 0x13e) = &LAB_00483840;
  }
  else {
    *(int *)(param_1 + 0x13e) = param_4;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_0047e370(param_1,"Attempted to set both read_data_fn and write_data_fn in");
    FUN_0047e370(param_1,"the same structure.  Resetting read_data_fn to NULL.");
  }
  return;
}


