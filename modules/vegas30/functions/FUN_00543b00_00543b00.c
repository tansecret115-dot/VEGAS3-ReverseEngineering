/* Module: vegas30.exe
   Function: FUN_00543b00
   Address: 00543b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00543b00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 8);
  if (0 < iVar1) {
    piVar2 = (int *)(*(int **)(param_1 + 8))[2];
    do {
      iVar4 = *piVar2;
      if (((*(int *)(iVar4 + 8) == param_2) && (*(int *)(iVar4 + 0xc) == param_3)) &&
         (*(int *)(iVar4 + 0x1c) == 0)) {
        InterlockedIncrement((LONG *)(iVar4 + 0x14));
        goto LAB_00543b61;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
    iVar4 = 0;
  }
LAB_00543b61:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  return iVar4;
}


