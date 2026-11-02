/* Module: rn5a3260.dll
   Function: FUN_628a1b80
   Address: 628a1b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a1b80(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x68) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


