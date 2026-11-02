/* Module: sfmarket2.dll
   Function: FUN_0041be90
   Address: 0041be90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041be90(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0041bda0(param_1,param_2);
  uVar1 = FUN_0041bda0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_0041bda0(param_1 >> 0x10,uVar1);
  FUN_0041bda0(param_1 >> 0x18,uVar1);
  return;
}


