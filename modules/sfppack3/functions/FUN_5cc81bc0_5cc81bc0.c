/* Module: sfppack3.dll
   Function: FUN_5cc81bc0
   Address: 5cc81bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc81bc0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5cc83fa0(param_1,param_2,local_18,param_4);
  FUN_5cc7f7f0((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


