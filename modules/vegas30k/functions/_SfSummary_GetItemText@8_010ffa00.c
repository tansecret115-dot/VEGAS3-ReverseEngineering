/* Module: vegas30k.dll
   Function: _SfSummary_GetItemText@8
   Address: 010ffa00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSummary_GetItemText_8(int param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* 0xffa00  1210  _SfSummary_GetItemText@8 */
  iVar1 = _SfSummary_GetItemIndex_8(param_1,param_2);
  if (iVar1 < 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar1 * 8);
}


