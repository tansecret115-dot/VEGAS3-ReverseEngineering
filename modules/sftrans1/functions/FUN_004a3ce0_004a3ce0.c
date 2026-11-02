/* Module: sftrans1.dll
   Function: FUN_004a3ce0
   Address: 004a3ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a3ce0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  FUN_004a2dc0(param_1 + *(int *)(param_2 + 0xc) * param_3 * 4,param_2,-param_3,
               param_4 + *(int *)(param_5 + 0xc) * param_6 * 4,param_5,-param_6,param_7);
  return;
}


