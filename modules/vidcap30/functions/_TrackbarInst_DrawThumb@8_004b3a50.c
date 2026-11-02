/* Module: vidcap30.exe
   Function: _TrackbarInst_DrawThumb@8
   Address: 004b3a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_DrawThumb_8(int param_1,undefined4 param_2)

{
                    /* 0xb3a50  728  _TrackbarInst_DrawThumb@8 */
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_004b0410(param_1,param_2);
    return;
  }
  FUN_004afe00(param_1,param_2);
  return;
}


