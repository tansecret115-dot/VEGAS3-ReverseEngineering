/* Module: vidcap30.exe
   Function: _SfQueueInsertHead@8
   Address: 004aa1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfQueueInsertHead_8(int *param_1,int *param_2)

{
  int iVar1;
  
                    /* 0xaa1f0  593  _SfQueueInsertHead@8 */
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


