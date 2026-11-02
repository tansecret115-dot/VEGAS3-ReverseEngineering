/* Module: g2plug.dll
   Function: FUN_5f802920
   Address: 5f802920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f802920(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x24) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


