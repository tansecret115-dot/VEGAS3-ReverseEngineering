/* Module: sftrans1.dll
   Function: FUN_004201e0
   Address: 004201e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004201e0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x4c) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


