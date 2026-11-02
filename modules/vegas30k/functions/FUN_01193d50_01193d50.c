/* Module: vegas30k.dll
   Function: FUN_01193d50
   Address: 01193d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01193d50(int *param_1,int *param_2)

{
  param_1[0x1b4] = *param_2;
  param_1[0x1b5] = param_2[1];
  param_1[0x1b6] = param_2[2];
  param_1[0x1b7] = param_2[3];
  if ((param_1[8] & 0x1200U) != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  }
  return 0;
}


