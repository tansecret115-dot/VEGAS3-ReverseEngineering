/* Module: vidcap30.exe
   Function: _TrackbarInst_SetId@8
   Address: 004b3b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0xb3b40  735  _TrackbarInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


