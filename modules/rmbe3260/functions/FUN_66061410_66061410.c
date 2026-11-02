/* Module: rmbe3260.dll
   Function: FUN_66061410
   Address: 66061410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66061410(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(int **)(param_1 + 4) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


