/* Module: vegas30k.dll
   Function: FUN_0118f710
   Address: 0118f710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0118f710(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_011ea858;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[3] = param_1[3] & 0xffffe7ff;
  puVar2 = param_1 + 0x11;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x11] = param_1[4];
  puVar2 = param_1 + 0x17;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x17] = param_1[4];
  puVar2 = param_1 + 0x1d;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x24] = 0;
  param_1[0x1d] = param_1[4];
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0x2a69c000;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0xc9;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  puVar2 = param_1 + 0x32;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x38] = 20000000;
  param_1[0x32] = param_1[4];
  param_1[0x3e] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  puVar2 = param_1 + 0x40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x139) = 0;
  *(undefined1 *)((int)param_1 + 0x13a) = 0;
  *(undefined1 *)((int)param_1 + 0x13b) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 1;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  puVar2 = param_1 + 0x57;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x45c] = 10000000;
  param_1[0x45e] = 2000000;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  param_1[0x459] = 0;
  param_1[0x45a] = 0;
  param_1[0x45b] = 0;
  param_1[0x45d] = 0;
  param_1[0x45f] = 0;
  return param_1;
}


