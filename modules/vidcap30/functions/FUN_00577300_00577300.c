/* Module: vidcap30.exe
   Function: FUN_00577300
   Address: 00577300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00577300(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined1 local_18 [24];
  
  FUN_005796f0(param_1,param_2,local_18,param_4);
  FUN_00575260(local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


