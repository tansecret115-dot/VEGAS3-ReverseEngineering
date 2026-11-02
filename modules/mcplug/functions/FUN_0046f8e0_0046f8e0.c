/* Module: mcplug.dll
   Function: FUN_0046f8e0
   Address: 0046f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f8e0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0046f830(param_1,-param_2 - 1);
  uVar1 = FUN_0046f830(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_0046f830(param_1 >> 0x10,uVar1);
  FUN_0046f830(param_1 >> 0x18,uVar1);
  return;
}


