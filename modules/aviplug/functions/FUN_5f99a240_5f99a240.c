/* Module: aviplug.dll
   Function: FUN_5f99a240
   Address: 5f99a240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f99a240(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f99a290(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


