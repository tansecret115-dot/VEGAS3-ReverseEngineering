/* Module: vidcap30.exe
   Function: FUN_00575fc0
   Address: 00575fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00575fc0(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00575f10(param_1,-1 - param_2);
  uVar1 = FUN_00575f10(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_00575f10(param_1 >> 0x10,uVar1);
  FUN_00575f10(param_1 >> 0x18,uVar1);
  return;
}


