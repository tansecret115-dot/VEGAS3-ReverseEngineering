/* Module: sfxpfx2.dll
   Function: FUN_5c8cb29c
   Address: 5c8cb29c
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8cb29c(int param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x40) + 0x74);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_5c8c9953(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x54))(param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


