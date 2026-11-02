/* Module: vidcap30.exe
   Function: _SfList_GetSortCriteria@4
   Address: 00481d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_GetSortCriteria_4(int param_1)

{
                    /* 0x81d10  504  _SfList_GetSortCriteria@4 */
  if ((*(uint *)(param_1 + 0x28) & 0xc0000000) == 0) {
    GetCurrentThreadId();
  }
  return *(undefined4 *)(param_1 + 0x30);
}


