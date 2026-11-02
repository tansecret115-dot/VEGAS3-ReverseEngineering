/* Module: aviplug.dll
   Function: FUN_5f9840e0
   Address: 5f9840e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9840e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0x44);
    while (0 < iVar2) {
      iVar2 = iVar2 + -1;
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x44) + 4) * iVar2 +
                      *(int *)(*(int *)(param_1 + 0x44) + 8));
      if (*piVar1 == param_2) {
        piVar1[6] = -1;
        piVar1[7] = -1;
        piVar1[5] = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  return;
}


