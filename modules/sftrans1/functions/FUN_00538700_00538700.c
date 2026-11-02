/* Module: sftrans1.dll
   Function: FUN_00538700
   Address: 00538700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00538700(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined1 local_18 [24];
  
  FUN_0053aaf0(param_1,param_2,local_18,param_4);
  FUN_00536330(local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


