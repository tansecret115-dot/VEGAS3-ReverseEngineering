/* Module: wavplug.dll
   Function: FUN_5f3c38d0
   Address: 5f3c38d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c38d0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_5f3c37e0(param_1,param_2);
  uVar1 = FUN_5f3c37e0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5f3c37e0(param_1 >> 0x10,uVar1);
  FUN_5f3c37e0(param_1 >> 0x18,uVar1);
  return;
}


