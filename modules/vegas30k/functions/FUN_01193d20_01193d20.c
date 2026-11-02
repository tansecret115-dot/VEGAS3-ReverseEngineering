/* Module: vegas30k.dll
   Function: FUN_01193d20
   Address: 01193d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01193d20(int *param_1,int param_2)

{
  param_1[0x1b2] = param_2;
  if ((param_1[8] & 0x1200U) != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  }
  return 0;
}


