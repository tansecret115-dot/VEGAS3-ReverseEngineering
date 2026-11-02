/* Module: sftrkfx1.dll
   Function: FUN_5cbfe0b0
   Address: 5cbfe0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbfe0b0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5cbfdfc0(param_1,param_2);
  uVar1 = FUN_5cbfdfc0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5cbfdfc0(param_1 >> 0x10,uVar1);
  FUN_5cbfdfc0(param_1 >> 0x18,uVar1);
  return;
}


