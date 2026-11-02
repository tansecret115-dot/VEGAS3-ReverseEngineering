/* Module: sftrkfx1.dll
   Function: FUN_5cbfe070
   Address: 5cbfe070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbfe070(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5cbfdfc0(param_1,-param_2 - 1);
  uVar1 = FUN_5cbfdfc0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5cbfdfc0(param_1 >> 0x10,uVar1);
  FUN_5cbfdfc0(param_1 >> 0x18,uVar1);
  return;
}


