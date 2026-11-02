/* Module: Setup.exe
   Function: _SfList_GetSortCriteria@4
   Address: 004196d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_GetSortCriteria_4(int param_1)

{
                    /* 0x196d0  233  _SfList_GetSortCriteria@4 */
  if ((*(uint *)(param_1 + 0x28) & 0xc0000000) == 0) {
    GetCurrentThreadId();
  }
  return *(undefined4 *)(param_1 + 0x30);
}


