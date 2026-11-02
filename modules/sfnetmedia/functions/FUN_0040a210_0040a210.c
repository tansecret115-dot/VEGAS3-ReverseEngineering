/* Module: sfnetmedia.dll
   Function: FUN_0040a210
   Address: 0040a210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a210(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 8) = param_2;
  return 0;
}


