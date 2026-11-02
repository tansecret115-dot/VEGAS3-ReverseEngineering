/* Module: vidcap30.exe
   Function: _SfList_GetCreateOptions@4
   Address: 00481cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_GetCreateOptions_4(int param_1)

{
                    /* 0x81cf0  502  _SfList_GetCreateOptions@4 */
  if ((*(uint *)(param_1 + 0x28) & 0xc0000000) == 0) {
    GetCurrentThreadId();
  }
  return *(undefined4 *)(param_1 + 0x28);
}


