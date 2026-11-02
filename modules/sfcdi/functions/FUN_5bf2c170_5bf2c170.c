/* Module: sfcdi.dll
   Function: FUN_5bf2c170
   Address: 5bf2c170
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5bf2c170(int *param_1,DWORD param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  EnterCriticalSection(lpCriticalSection);
  piVar2 = (int *)param_1[8];
  piVar1 = param_1 + 8;
  if (piVar2 == piVar1) {
    if ((param_2 != 0) && (*param_1 != 0)) {
      LeaveCriticalSection(lpCriticalSection);
      WaitForSingleObject((HANDLE)*param_1,param_2);
      EnterCriticalSection(lpCriticalSection);
      piVar2 = (int *)*piVar1;
    }
    if (piVar2 == piVar1) {
      LeaveCriticalSection(lpCriticalSection);
      return (int *)0x0;
    }
  }
  param_1[7] = param_1[7] + -1;
  *piVar1 = *piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
  *piVar2 = 0;
  piVar2[1] = 0;
  if (((int *)*piVar1 == piVar1) && ((HANDLE)*param_1 != (HANDLE)0x0)) {
    ResetEvent((HANDLE)*param_1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return piVar2;
}


