/* Module: vegas30k.dll
   Function: _SfQueueWait@8
   Address: 0103bb70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfQueueWait_8(int *param_1,DWORD param_2)

{
  int *piVar1;
  
                    /* 0x3bb70  1179  _SfQueueWait@8 */
  piVar1 = (int *)*param_1;
  if (piVar1 == param_1) {
    if ((param_2 != 0) && ((HANDLE)param_1[8] != (HANDLE)0x0)) {
      WaitForSingleObject((HANDLE)param_1[8],param_2);
      piVar1 = (int *)*param_1;
    }
    if (piVar1 == param_1) {
      return 0;
    }
  }
  return 1;
}


