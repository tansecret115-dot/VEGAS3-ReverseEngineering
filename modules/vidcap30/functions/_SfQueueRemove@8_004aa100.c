/* Module: vidcap30.exe
   Function: _SfQueueRemove@8
   Address: 004aa100
   Source: Ghidra pseudocode (Stage 10 batch) */


int * _SfQueueRemove_8(int *param_1,DWORD param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
                    /* 0xaa100  596  _SfQueueRemove@8 */
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)*param_1;
  if (piVar1 == param_1) {
    if ((param_2 != 0) && (param_1[8] != 0)) {
      LeaveCriticalSection(lpCriticalSection);
      WaitForSingleObject((HANDLE)param_1[8],param_2);
      if (param_1[8] == 0) {
        return (int *)0x0;
      }
      EnterCriticalSection(lpCriticalSection);
      piVar1 = (int *)*param_1;
    }
    if (piVar1 == param_1) {
      LeaveCriticalSection(lpCriticalSection);
      return (int *)0x0;
    }
  }
  *param_1 = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  *piVar1 = 0;
  piVar1[1] = 0;
  if (((int *)*param_1 == param_1) && ((HANDLE)param_1[8] != (HANDLE)0x0)) {
    ResetEvent((HANDLE)param_1[8]);
  }
  LeaveCriticalSection(lpCriticalSection);
  return piVar1;
}


