/* Module: basc3260.dll
   Function: FUN_627f19f0
   Address: 627f19f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f19f0(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x5c) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


