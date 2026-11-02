/* Module: vegas30.exe
   Function: FUN_0049ccd0
   Address: 0049ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049ccd0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  if (param_4 != *(int *)(param_1 + 0xa8)) {
    *(int *)(param_1 + 0xa8) = param_4;
    *(undefined4 *)(param_1 + 0xac) = param_5;
    FUN_0049cbc0(param_1,param_4,param_5,0);
    FUN_00454f60(param_1,param_4,param_5,param_2 + 8,&DAT_00613228,9);
  }
  return;
}


