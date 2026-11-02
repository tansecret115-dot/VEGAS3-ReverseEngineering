/* Module: mcplugrw.dll
   Function: FUN_00417fc0
   Address: 00417fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417fc0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00417ed0(param_1,param_2);
  uVar1 = FUN_00417ed0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_00417ed0(param_1 >> 0x10,uVar1);
  FUN_00417ed0(param_1 >> 0x18,uVar1);
  return;
}


