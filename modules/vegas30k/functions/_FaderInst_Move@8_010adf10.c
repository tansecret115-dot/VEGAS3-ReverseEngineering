/* Module: vegas30k.dll
   Function: _FaderInst_Move@8
   Address: 010adf10
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_Move_8(int param_1,int *param_2)

{
                    /* 0xadf10  658  _FaderInst_Move@8 */
  *(int *)(param_1 + 0x3c) = *param_2;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(int *)(param_1 + 0x44) = param_2[2];
  *(int *)(param_1 + 0x48) = param_2[3];
  FUN_010ac3f0(param_1,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


