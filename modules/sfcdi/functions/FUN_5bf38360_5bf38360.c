/* Module: sfcdi.dll
   Function: FUN_5bf38360
   Address: 5bf38360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf38360(int *param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  param_2[1] = (int)param_1;
  iVar1 = *param_1;
  *param_2 = iVar1;
  *(int **)(iVar1 + 4) = param_2;
  *param_1 = (int)param_2;
  if ((param_2 == (int *)param_1[1]) && ((HANDLE)param_1[8] != (HANDLE)0x0)) {
    SetEvent((HANDLE)param_1[8]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}


