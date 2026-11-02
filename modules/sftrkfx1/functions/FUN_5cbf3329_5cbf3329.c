/* Module: sftrkfx1.dll
   Function: FUN_5cbf3329
   Address: 5cbf3329
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbf3329(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x74);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x58))();
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


