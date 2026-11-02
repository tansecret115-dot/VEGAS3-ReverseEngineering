/* Module: vegas30k.dll
   Function: _SfQueueRemoveTail@8
   Address: 0103bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * _SfQueueRemoveTail_8(undefined4 *param_1,DWORD param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
                    /* 0x3bc00  1178  _SfQueueRemoveTail@8 */
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  EnterCriticalSection(lpCriticalSection);
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 == param_1) {
    if ((param_2 != 0) && (param_1[8] != 0)) {
      LeaveCriticalSection(lpCriticalSection);
      WaitForSingleObject((HANDLE)param_1[8],param_2);
      if (param_1[8] == 0) {
        return (undefined4 *)0x0;
      }
      EnterCriticalSection(lpCriticalSection);
      puVar1 = (undefined4 *)param_1[1];
    }
    if (puVar1 == param_1) {
      LeaveCriticalSection(lpCriticalSection);
      return (undefined4 *)0x0;
    }
  }
  param_1[1] = puVar1[1];
  *(undefined4 *)puVar1[1] = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (((undefined4 *)*param_1 == param_1) && ((HANDLE)param_1[8] != (HANDLE)0x0)) {
    ResetEvent((HANDLE)param_1[8]);
  }
  LeaveCriticalSection(lpCriticalSection);
  return puVar1;
}


