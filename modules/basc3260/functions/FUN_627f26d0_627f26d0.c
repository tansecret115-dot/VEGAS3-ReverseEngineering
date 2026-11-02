/* Module: basc3260.dll
   Function: FUN_627f26d0
   Address: 627f26d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f26d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10),param_2,param_3);
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


