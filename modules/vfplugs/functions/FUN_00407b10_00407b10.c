/* Module: vfplugs.dll
   Function: FUN_00407b10
   Address: 00407b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407b10(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xd0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0xd0) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


