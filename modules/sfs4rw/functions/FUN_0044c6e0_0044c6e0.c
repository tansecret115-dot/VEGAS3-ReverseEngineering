/* Module: sfs4rw.dll
   Function: FUN_0044c6e0
   Address: 0044c6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c6e0(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x50) = FUN_0044c740;
  }
  else {
    *(int *)(param_1 + 0x50) = param_3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_00475b00(param_1,"It\'s an error to set both read_data_fn and write_data_fn in the ");
    FUN_00475b00(param_1,"same structure.  Resetting write_data_fn to NULL.");
  }
  *(undefined4 *)(param_1 + 0x13e) = 0;
  return;
}


