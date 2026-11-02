/* Module: vegas30.exe
   Function: FUN_006080e0
   Address: 006080e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_006080e0(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined1 local_18 [24];
  
  FUN_0060a4d0(param_1,param_2,local_18,param_4);
  FUN_00605d10(local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


