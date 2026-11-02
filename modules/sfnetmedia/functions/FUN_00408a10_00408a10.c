/* Module: sfnetmedia.dll
   Function: FUN_00408a10
   Address: 00408a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408a10(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x4c) = param_2;
  return 0;
}


