/* Module: vidpcore.dll
   Function: FUN_5de433b0
   Address: 5de433b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de433b0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x98) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


