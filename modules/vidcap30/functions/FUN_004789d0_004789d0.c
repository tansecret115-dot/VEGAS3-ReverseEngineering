/* Module: vidcap30.exe
   Function: FUN_004789d0
   Address: 004789d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004789d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = _SfGetUIFont_4(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  _SfGetTextExtent_16(uVar1,param_3,0xffffffff,param_1 + 3);
  return;
}


