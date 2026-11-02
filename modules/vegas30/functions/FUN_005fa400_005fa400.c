/* Module: vegas30.exe
   Function: FUN_005fa400
   Address: 005fa400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005fa400(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = &PTR_LAB_0062ccf0;
  param_1[2] = &PTR_LAB_0062d1bc;
  param_1[5] = param_2;
  *param_1 = &PTR_FUN_0062d180;
  param_1[1] = &PTR_LAB_0062d128;
  param_1[2] = &PTR_LAB_0062d118;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  puVar2 = param_1 + 6;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[6] = 0x40;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0x3ff00000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}


