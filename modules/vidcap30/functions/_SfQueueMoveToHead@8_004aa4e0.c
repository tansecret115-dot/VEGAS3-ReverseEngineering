/* Module: vidcap30.exe
   Function: _SfQueueMoveToHead@8
   Address: 004aa4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfQueueMoveToHead_8(int *param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* 0xaa4e0  594  _SfQueueMoveToHead@8 */
  uVar3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  EnterCriticalSection(lpCriticalSection);
  piVar2 = (int *)*param_1;
  if ((piVar2 != param_2) && (piVar2 != param_1)) {
    while (piVar2 != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == param_1) {
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    uVar3 = 1;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    piVar2[1] = (int)param_1;
    iVar1 = *param_1;
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    *param_1 = (int)piVar2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}


