/* Module: vidcap30.exe
   Function: _FaderInst_Move@8
   Address: 00520990
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_Move_8(int param_1,int *param_2)

{
                    /* 0x120990  161  _FaderInst_Move@8 */
  *(int *)(param_1 + 0x3c) = *param_2;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(int *)(param_1 + 0x44) = param_2[2];
  *(int *)(param_1 + 0x48) = param_2[3];
  FUN_0051ee70(param_1,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


