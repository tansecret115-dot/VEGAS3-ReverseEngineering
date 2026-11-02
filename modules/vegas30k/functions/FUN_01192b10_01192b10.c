/* Module: vegas30k.dll
   Function: FUN_01192b10
   Address: 01192b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01192b10(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  if ((*param_2 & 0x20000000) != 0) {
    (**(code **)(*DAT_012b09c8 + 0x118))(DAT_012b09c8);
    (**(code **)(*DAT_012b09c8 + 0x100))(DAT_012b09c8);
  }
  if ((*param_2 & 0x10000000) != 0) {
    (**(code **)(*DAT_012b09c8 + 0x150))(DAT_012b09c8);
  }
  if (DAT_012b0b30 != (code *)0x0) {
    (*DAT_012b0b30)(DAT_012b0b2c,7,param_2,DAT_012b0b34,param_1,param_3);
  }
  return 0;
}


