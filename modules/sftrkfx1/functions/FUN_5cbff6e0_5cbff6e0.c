/* Module: sftrkfx1.dll
   Function: FUN_5cbff6e0
   Address: 5cbff6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbff6e0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5cc01ad0(param_1,param_2,local_18,param_4);
  FUN_5cbfd310((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


