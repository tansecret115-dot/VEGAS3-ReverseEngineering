/* Module: mcplug.dll
   Function: FUN_0046f920
   Address: 0046f920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f920(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0046f830(param_1,param_2);
  uVar1 = FUN_0046f830(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_0046f830(param_1 >> 0x10,uVar1);
  FUN_0046f830(param_1 >> 0x18,uVar1);
  return;
}


