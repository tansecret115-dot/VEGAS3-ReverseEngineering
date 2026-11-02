/* Module: vidcap30.exe
   Function: _SfQueueInsert@8
   Address: 004aa0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfQueueInsert_8(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
                    /* 0xaa0b0  592  _SfQueueInsert@8 */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_2 = param_1;
  puVar1 = (undefined4 *)param_1[1];
  param_2[1] = puVar1;
  *puVar1 = param_2;
  param_1[1] = (int)param_2;
  if ((param_2 == (undefined4 *)*param_1) && ((HANDLE)param_1[8] != (HANDLE)0x0)) {
    SetEvent((HANDLE)param_1[8]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}


