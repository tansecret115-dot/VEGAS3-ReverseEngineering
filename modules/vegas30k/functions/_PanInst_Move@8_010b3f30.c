/* Module: vegas30k.dll
   Function: _PanInst_Move@8
   Address: 010b3f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanInst_Move_8(int param_1,int *param_2)

{
                    /* 0xb3f30  692  _PanInst_Move@8 */
  *(int *)(param_1 + 0x58) = *param_2;
  *(int *)(param_1 + 0x5c) = param_2[1];
  *(int *)(param_1 + 0x60) = param_2[2];
  *(int *)(param_1 + 100) = param_2[3];
  FUN_010b1650(param_1,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


