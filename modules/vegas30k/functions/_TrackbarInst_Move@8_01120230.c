/* Module: vegas30k.dll
   Function: _TrackbarInst_Move@8
   Address: 01120230
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_Move_8(int param_1,int *param_2)

{
                    /* 0x120230  1352  _TrackbarInst_Move@8 */
  *(int *)(param_1 + 0x34) = *param_2;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(int *)(param_1 + 0x3c) = param_2[2];
  *(int *)(param_1 + 0x40) = param_2[3];
  FUN_0111eca0(param_1,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


