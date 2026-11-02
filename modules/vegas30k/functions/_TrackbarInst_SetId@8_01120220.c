/* Module: vegas30k.dll
   Function: _TrackbarInst_SetId@8
   Address: 01120220
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0x120220  1353  _TrackbarInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


