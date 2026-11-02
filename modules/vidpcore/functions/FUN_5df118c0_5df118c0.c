/* Module: vidpcore.dll
   Function: FUN_5df118c0
   Address: 5df118c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df118c0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_5df117d0(param_1,param_2);
  uVar1 = FUN_5df117d0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_5df117d0(param_1 >> 0x10,uVar1);
  FUN_5df117d0(param_1 >> 0x18,uVar1);
  return;
}


