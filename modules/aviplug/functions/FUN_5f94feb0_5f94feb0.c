/* Module: aviplug.dll
   Function: FUN_5f94feb0
   Address: 5f94feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94feb0(int *param_1,int param_2)

{
  if (param_2 != param_1[4]) {
    return 0x80040216;
  }
  if (param_1[7] != 0) {
    return 0x80040224;
  }
  if (param_1[4] != 0) {
    if (param_1[5] != 0) {
      (**(code **)(*param_1 + 0x24))(param_1,param_1[5]);
      (**(code **)(*(int *)param_1[5] + 8))((int *)param_1[5]);
      param_1[5] = 0;
    }
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x24))(param_1,param_1[6]);
      (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6]);
      param_1[6] = 0;
    }
    (**(code **)(*(int *)param_1[4] + 0x34))((int *)param_1[4],0,0);
    (**(code **)(*(int *)param_1[4] + 8))((int *)param_1[4]);
    param_1[4] = 0;
  }
  return 0;
}


