/* Module: encn3260.dll
   Function: FUN_66481700
   Address: 66481700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66481700(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(int **)(param_1 + 0x28) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  if (param_3 != (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(int **)(param_1 + 0x2c) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  return 0;
}


