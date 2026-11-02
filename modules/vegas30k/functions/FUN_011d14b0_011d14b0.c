/* Module: vegas30k.dll
   Function: FUN_011d14b0
   Address: 011d14b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_011d14b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[0x10] = param_3;
  param_1[0x12] = param_2;
  param_1[0x13] = param_4;
  param_1[0x67] = param_1 + 0x5d;
  *param_1 = &PTR_LAB_011ec5c4;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  puVar3 = param_1 + 0x14;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0xffffffff;
  puVar3 = param_1 + 0x5d;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined2 *)param_1[0x67];
  *puVar1 = 1;
  puVar1[1] = 2;
  *(undefined4 *)(puVar1 + 2) = 0xac44;
  puVar1[7] = 0x10;
  puVar1[6] = 4;
  *(undefined4 *)(puVar1 + 4) = 0x2b110;
  puVar1[8] = 0;
  puVar3 = param_1 + 0x68;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0xffffffff;
  param_1[0x86] = 0xffffffff;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x83] = 0xffffffff;
  param_1[0x84] = 0xffffffff;
  param_1[0x87] = 0xffffffff;
  param_1[0x7b] = 2;
  param_1[0x7f] = 1;
  return param_1;
}


