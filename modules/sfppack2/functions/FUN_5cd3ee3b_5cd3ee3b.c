/* Module: sfppack2.dll
   Function: FUN_5cd3ee3b
   Address: 5cd3ee3b
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd3ee3b(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)((*(int **)(param_1 + 0xcc))[0x24] + 0x18) == 0)) {
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_5cd3d79d(param_1);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1;
}


