/* Module: mp3plug.dll
   Function: FUN_5f7265f0
   Address: 5f7265f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f7265f0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5f726500(param_1,param_2);
  uVar1 = FUN_5f726500(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5f726500(param_1 >> 0x10,uVar1);
  FUN_5f726500(param_1 >> 0x18,uVar1);
  return;
}


