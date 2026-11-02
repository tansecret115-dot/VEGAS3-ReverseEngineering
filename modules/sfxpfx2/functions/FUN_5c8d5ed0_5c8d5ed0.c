/* Module: sfxpfx2.dll
   Function: FUN_5c8d5ed0
   Address: 5c8d5ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d5ed0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5c8d5e20(param_1,-param_2 - 1);
  uVar1 = FUN_5c8d5e20(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5c8d5e20(param_1 >> 0x10,uVar1);
  FUN_5c8d5e20(param_1 >> 0x18,uVar1);
  return;
}


