/* Module: mcplug.dll
   Function: FUN_00470c20
   Address: 00470c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00470c20(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_00473010(param_1,param_2,local_18,param_4);
  FUN_0046eb80((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


