/* Module: vegas30k.dll
   Function: FUN_0113aee0
   Address: 0113aee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0113aee0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_LAB_011e6a68;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = param_1 + 0xb;
  *puVar1 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_3 != (undefined4 *)0x0) {
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
    param_1[6] = param_3[3];
    *puVar1 = *param_3;
    param_1[0xc] = param_3[1];
    param_1[0xd] = param_3[2];
    param_1[0xe] = param_3[3];
  }
  if (param_4 != (undefined4 *)0x0) {
    *puVar1 = *param_4;
    param_1[0xc] = param_4[1];
    param_1[0xd] = param_4[2];
    param_1[0xe] = param_4[3];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0x11] = 1;
  param_1[0x13] = param_2;
  return;
}


