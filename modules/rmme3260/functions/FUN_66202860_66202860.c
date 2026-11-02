/* Module: rmme3260.dll
   Function: FUN_66202860
   Address: 66202860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202860(int param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x10) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10),0);
  }
  return 0;
}


