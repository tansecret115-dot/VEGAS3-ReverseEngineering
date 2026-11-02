/* Module: vidcap30.exe
   Function: _SfSummary_GetItemText@8
   Address: 004b6530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSummary_GetItemText_8(int param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* 0xb6530  630  _SfSummary_GetItemText@8 */
  iVar1 = _SfSummary_GetItemIndex_8(param_1,param_2);
  if (iVar1 < 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar1 * 8);
}


