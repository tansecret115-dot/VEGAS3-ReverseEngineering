/* Module: sfxpfx2.dll
   Function: FUN_5c8d7540
   Address: 5c8d7540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d7540(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5c8d9920(param_1,param_2,local_18,param_4);
  FUN_5c8d5170((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


