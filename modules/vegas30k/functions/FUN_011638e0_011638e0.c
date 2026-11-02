/* Module: vegas30k.dll
   Function: FUN_011638e0
   Address: 011638e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011638e0(int param_1,undefined4 *param_2,byte param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  
  if ((param_3 & 0x10) == 0) {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xffffffef;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14) | 0x10;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((param_3 & 0x20) == 0) {
    *param_2 = param_2 + 0x16;
  }
  else {
    *param_2 = 0;
  }
  param_2[8] = 0;
  param_2[1] = *param_2;
  param_2[5] = param_4;
  param_2[7] = param_4;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  param_2[3] = param_1;
  param_2[4] = 0;
  param_2[2] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  param_2[0xd] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = param_5;
  param_2[0x11] = 0;
  if ((*(byte *)(param_1 + 0x14) & 0x10) == 0) {
    *param_2 = 0;
    param_2[5] = 0;
  }
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 **)(param_1 + 0x10) = param_2;
  return 1;
}


