/* Module: basc3260.dll
   Function: FUN_627f2710
   Address: 627f2710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f2710(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),param_2,param_3);
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


