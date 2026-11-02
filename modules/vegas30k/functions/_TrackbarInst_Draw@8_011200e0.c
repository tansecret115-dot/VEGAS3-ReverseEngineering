/* Module: vegas30k.dll
   Function: _TrackbarInst_Draw@8
   Address: 011200e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_Draw_8(int param_1,undefined4 param_2)

{
                    /* 0x1200e0  1345  _TrackbarInst_Draw@8 */
  FUN_0111d590(param_1,param_2);
  FUN_0111cc70(param_1,param_2);
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_0111caf0(param_1,param_2);
    FUN_0111da80(param_1,param_2);
    return;
  }
  FUN_0111c4e0(param_1,param_2);
  FUN_0111da80(param_1,param_2);
  return;
}


