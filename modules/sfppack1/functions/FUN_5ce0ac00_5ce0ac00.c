/* Module: sfppack1.dll
   Function: FUN_5ce0ac00
   Address: 5ce0ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0ac00(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5ce0ab10(param_1,param_2);
  uVar1 = FUN_5ce0ab10(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5ce0ab10(param_1 >> 0x10,uVar1);
  FUN_5ce0ab10(param_1 >> 0x18,uVar1);
  return;
}


