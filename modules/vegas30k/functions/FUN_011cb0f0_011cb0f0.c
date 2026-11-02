/* Module: vegas30k.dll
   Function: FUN_011cb0f0
   Address: 011cb0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011cb0f0(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[0x18] = param_1 + 0xe;
  *param_1 = &PTR_LAB_011ec494;
  param_1[1] = 0;
  puVar3 = param_1 + 0x30;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  param_1[0x96] = 0;
  param_1[0xd] = 0;
  param_1[0xa3] = 0x3ff00000;
  param_1[0xa5] = 0x3ff00000;
  param_1[0x97] = 0x3ff00000;
  param_1[0xa0] = param_1 + 0x96;
  param_1[0x19] = 0;
  param_1[0xa6] = 0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 4;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0xa7] = 0x3fd00000;
  param_1[0x99] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xae] = 0;
  param_1[0xa8] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[2] = 1;
  puVar3 = param_1 + 0xb0;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined2 *)param_1[0x18];
  param_1[0xbd] = 0;
  param_1[0xbe] = param_2;
  *puVar1 = 1;
  puVar1[1] = 2;
  *(undefined4 *)(puVar1 + 2) = 0xac44;
  puVar1[7] = 0x10;
  puVar1[6] = 4;
  *(undefined4 *)(puVar1 + 4) = 0x2b110;
  puVar1[8] = 0;
  param_1[0xce] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xd3] = 0;
  param_1[200] = 0x9999999a;
  param_1[0xc9] = 0x3fb99999;
  return param_1;
}


