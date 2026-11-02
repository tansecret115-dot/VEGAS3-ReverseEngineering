/* Module: vidcap30.exe
   Function: _SfGetStringBuffer@8
   Address: 0047aee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfGetStringBuffer_8(int param_1,int param_2)

{
  undefined1 *puVar1;
  
                    /* 0x7aee0  428  _SfGetStringBuffer@8 */
  if (*(int *)(param_1 + 0x130) == 0) {
    return (undefined1 *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10c));
  if ((uint)(*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x128)) < *(uint *)(param_1 + 300)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x130) + *(int *)(param_1 + 300));
  if (param_2 == 0) {
    *puVar1 = 0;
  }
  *(uint *)(param_1 + 300) = param_2 + 4 + *(int *)(param_1 + 300) & 0xfffffffc;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10c));
  return puVar1;
}


