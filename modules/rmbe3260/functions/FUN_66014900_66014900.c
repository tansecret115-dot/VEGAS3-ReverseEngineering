/* Module: rmbe3260.dll
   Function: FUN_66014900
   Address: 66014900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66014900(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
  InterlockedIncrement((LONG *)(param_1 + 4));
  return;
}


