/* Module: enlv3260.dll
   Function: FUN_661d2430
   Address: 661d2430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d2430(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x5e) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


