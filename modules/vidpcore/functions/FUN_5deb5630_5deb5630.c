/* Module: vidpcore.dll
   Function: FUN_5deb5630
   Address: 5deb5630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb5630(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_5ded6ce0(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_5ded7730(uVar1,param_3,0xffffffff,param_1 + 3);
  return;
}


