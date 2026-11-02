/* Module: vegas30k.dll
   Function: FUN_011c76f0
   Address: 011c76f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011c76f0(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[0x24] = param_1 + 0x1a;
  param_1[0x94] = 0xffffffff;
  param_1[0x96] = 0xffffffff;
  param_1[0x98] = 0xffffffff;
  param_1[0x11] = param_2;
  param_1[0x13] = 0xffffffff;
  param_1[0x95] = 0xffffffff;
  param_1[0x97] = 0xffffffff;
  param_1[0x99] = 0xffffffff;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  *param_1 = &PTR_LAB_011ec2ec;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0x10;
  param_1[0x89] = 0x3ff00000;
  param_1[0x8b] = 0x3fe00000;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  param_1[0x93] = 0;
  param_1[0xba] = 0;
  puVar3 = param_1 + 0xa8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x3a;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  puVar1 = (undefined2 *)param_1[0x24];
  *puVar1 = 1;
  puVar1[1] = 2;
  *(undefined4 *)(puVar1 + 2) = 0xac44;
  puVar1[7] = 0x10;
  puVar1[6] = 4;
  *(undefined4 *)(puVar1 + 4) = 0x2b110;
  puVar1[8] = 0;
  return param_1;
}


