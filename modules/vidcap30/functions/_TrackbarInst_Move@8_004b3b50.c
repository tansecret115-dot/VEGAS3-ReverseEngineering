/* Module: vidcap30.exe
   Function: _TrackbarInst_Move@8
   Address: 004b3b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_Move_8(int param_1,int *param_2)

{
                    /* 0xb3b50  734  _TrackbarInst_Move@8 */
  *(int *)(param_1 + 0x34) = *param_2;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(int *)(param_1 + 0x3c) = param_2[2];
  *(int *)(param_1 + 0x40) = param_2[3];
  FUN_004b25c0(param_1,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


