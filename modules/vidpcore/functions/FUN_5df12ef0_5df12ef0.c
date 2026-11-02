/* Module: vidpcore.dll
   Function: FUN_5df12ef0
   Address: 5df12ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df12ef0(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined1 local_18 [24];
  
  FUN_5df152e0(param_1,param_2,local_18,param_4);
  FUN_5df10b20(local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


