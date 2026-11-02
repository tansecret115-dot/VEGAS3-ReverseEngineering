/* Module: vfplugs.dll
   Function: FUN_0047d840
   Address: 0047d840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d840(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0047d790(param_1,-param_2 - 1);
  uVar1 = FUN_0047d790(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_0047d790(param_1 >> 0x10,uVar1);
  FUN_0047d790(param_1 >> 0x18,uVar1);
  return;
}


