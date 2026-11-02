/* Module: vfplugs.dll
   Function: FUN_0047eeb0
   Address: 0047eeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047eeb0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_004812a0(param_1,param_2,local_18,param_4);
  FUN_0047cae0((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


