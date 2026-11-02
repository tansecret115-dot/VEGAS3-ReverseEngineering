/* Module: rmto3260.dll
   Function: FUN_662d31e0
   Address: 662d31e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662d31e0(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    (**(code **)(*(int *)(param_1 + -0x10) + 0x28))(param_1 + -0x10);
    return;
  }
  (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))(param_1 + -0x10);
  return;
}


