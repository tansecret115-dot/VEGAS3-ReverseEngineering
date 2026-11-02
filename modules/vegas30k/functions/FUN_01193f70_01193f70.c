/* Module: vegas30k.dll
   Function: FUN_01193f70
   Address: 01193f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01193f70(int *param_1)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x134))(0,0);
  param_1[0x1c0] = 0;
  param_1[8] = param_1[8] & 0xfffffeff;
  param_1[0x1c1] = 0;
  uVar1 = FUN_011aaf10(param_1);
  FUN_011aaee0(param_1,uVar1 & 0xfffffeff);
  return 0;
}


