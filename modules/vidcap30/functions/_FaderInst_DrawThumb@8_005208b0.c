/* Module: vidcap30.exe
   Function: _FaderInst_DrawThumb@8
   Address: 005208b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_DrawThumb_8(int param_1,undefined4 param_2)

{
                    /* 0x1208b0  156  _FaderInst_DrawThumb@8 */
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_005205c0(param_1,param_2);
    return;
  }
  FUN_0051b760(param_1,param_2);
  return;
}


