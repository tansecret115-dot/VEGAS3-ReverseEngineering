/* Module: sftrans1.dll
   Function: FUN_00410c80
   Address: 00410c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410c80(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x150) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


