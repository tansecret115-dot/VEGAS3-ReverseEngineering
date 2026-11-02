/* Module: aifplug.dll
   Function: FUN_5fbd59e0
   Address: 5fbd59e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd59e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x21c) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x21c);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x21c) + 8) + iVar3 * 4);
        (**(code **)(*piVar2 + 8))(piVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_5fbe6330(*(int **)(param_1 + 0x21c));
  }
  return;
}


