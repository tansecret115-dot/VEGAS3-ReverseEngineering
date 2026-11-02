/* Module: vegas30k.dll
   Function: _TrackbarInst_DrawThumb@8
   Address: 01120130
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_DrawThumb_8(int param_1,undefined4 param_2)

{
                    /* 0x120130  1346  _TrackbarInst_DrawThumb@8 */
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_0111caf0(param_1,param_2);
    return;
  }
  FUN_0111c4e0(param_1,param_2);
  return;
}


