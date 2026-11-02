/* Module: wavplug.dll
   Function: FUN_5f3c4bd0
   Address: 5f3c4bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c4bd0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5f3c6fc0(param_1,param_2,local_18,param_4);
  FUN_5f3c2b30((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


