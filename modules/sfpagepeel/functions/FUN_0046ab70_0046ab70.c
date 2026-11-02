/* Module: sfpagepeel.dll
   Function: FUN_0046ab70
   Address: 0046ab70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ab70(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_0046cf60(param_1,param_2,local_18,param_4);
  FUN_004687a0((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


