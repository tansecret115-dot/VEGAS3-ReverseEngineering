/* Module: vidpcore.dll
   Function: FUN_5de46470
   Address: 5de46470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de46470(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x90) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


