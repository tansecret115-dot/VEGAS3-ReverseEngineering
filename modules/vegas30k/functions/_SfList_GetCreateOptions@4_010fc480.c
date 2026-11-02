/* Module: vegas30k.dll
   Function: _SfList_GetCreateOptions@4
   Address: 010fc480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_GetCreateOptions_4(int param_1)

{
                    /* 0xfc480  1068  _SfList_GetCreateOptions@4 */
  if ((*(uint *)(param_1 + 0x28) & 0xc0000000) == 0) {
    GetCurrentThreadId();
  }
  return *(undefined4 *)(param_1 + 0x28);
}


