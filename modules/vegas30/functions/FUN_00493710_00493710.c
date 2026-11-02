/* Module: vegas30.exe
   Function: FUN_00493710
   Address: 00493710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00493710(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  if ((param_4 != *(int *)(param_1 + 0xa8)) || (param_5 != *(int *)(param_1 + 0xac))) {
    FUN_00493050(param_1,param_3,param_4,param_5);
    FUN_00454f60(param_1,param_4,param_5,param_2 + 8,&DAT_006131f8,0xf);
    *(int *)(param_1 + 0xa8) = param_4;
    *(int *)(param_1 + 0xac) = param_5;
  }
  return;
}


