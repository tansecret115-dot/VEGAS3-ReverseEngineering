/* Module: vidcap30.exe
   Function: _SpinnerInst_Move@8
   Address: 004af270
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_Move_8(int param_1,int *param_2)

{
                    /* 0xaf270  712  _SpinnerInst_Move@8 */
  *(int *)(param_1 + 0x98) = *param_2;
  *(int *)(param_1 + 0x9c) = param_2[1];
  *(int *)(param_1 + 0xa0) = param_2[2];
  *(int *)(param_1 + 0xa4) = param_2[3];
  FUN_004adab0(param_1,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


