/* Module: oggplug.dll
   Function: FUN_00407240
   Address: 00407240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407240(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 8) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


