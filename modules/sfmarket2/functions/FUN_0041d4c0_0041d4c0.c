/* Module: sfmarket2.dll
   Function: FUN_0041d4c0
   Address: 0041d4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d4c0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_0041f8b0(param_1,param_2,local_18,param_4);
  FUN_0041b0f0((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


