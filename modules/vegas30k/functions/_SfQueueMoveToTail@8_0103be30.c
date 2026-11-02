/* Module: vegas30k.dll
   Function: _SfQueueMoveToTail@8
   Address: 0103be30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfQueueMoveToTail_8(int *param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* 0x3be30  1176  _SfQueueMoveToTail@8 */
  uVar3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  EnterCriticalSection(lpCriticalSection);
  piVar2 = (int *)param_1[1];
  if ((piVar2 != param_2) && (piVar2 != param_1)) {
    while (piVar2 != param_2) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == param_1) {
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    uVar3 = 1;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *piVar2 = (int)param_1;
    puVar1 = (undefined4 *)param_1[1];
    piVar2[1] = (int)puVar1;
    *puVar1 = piVar2;
    param_1[1] = (int)piVar2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}


