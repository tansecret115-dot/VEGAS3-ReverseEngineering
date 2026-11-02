/* Module: sfppack3.dll
   Function: FUN_5cc80550
   Address: 5cc80550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc80550(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5cc804a0(param_1,-param_2 - 1);
  uVar1 = FUN_5cc804a0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5cc804a0(param_1 >> 0x10,uVar1);
  FUN_5cc804a0(param_1 >> 0x18,uVar1);
  return;
}


