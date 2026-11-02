/* Module: rmto3260.dll
   Function: FUN_662c34e0
   Address: 662c34e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c34e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x3c) = param_2;
  if (*(int *)(param_2 + 0x12) != 0) {
    (**(code **)(*(int *)(param_1 + -0x10) + 0x88))(param_1 + -0x10,param_3,param_4);
    return;
  }
  (**(code **)(*(int *)(param_1 + -0x10) + 0x8c))
            (param_1 + -0x10,*(undefined4 *)(param_2 + 8),param_3,param_4,&param_4);
  return;
}


