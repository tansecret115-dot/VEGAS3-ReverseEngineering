/* Module: sfpaplug.dll
   Function: FUN_00410880
   Address: 00410880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410880(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x218);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x218) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


