/* Module: vegas30k.dll
   Function: _TrackbarInst_GetThumbRect@4
   Address: 01120030
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_GetThumbRect_4(undefined4 *param_1,int param_2)

{
                    /* 0x120030  1349  _TrackbarInst_GetThumbRect@4 */
  *param_1 = *(undefined4 *)(param_2 + 0x68);
  param_1[1] = *(undefined4 *)(param_2 + 0x6c);
  param_1[2] = *(undefined4 *)(param_2 + 0x70);
  param_1[3] = *(undefined4 *)(param_2 + 0x74);
  return;
}


