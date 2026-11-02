/* Module: enlv3260.dll
   Function: FUN_661d2450
   Address: 661d2450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d2450(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x56) = param_2;
    (**(code **)(*(int *)(param_1 + -4) + 0x1c))(param_1 + -4);
  }
  return 0;
}


