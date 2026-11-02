/* Module: sftrans1.dll
   Function: FUN_004c70c0
   Address: 004c70c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c70c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004e4320(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_004e4d70(uVar1,param_3,0xffffffff,param_1 + 3);
  return;
}


