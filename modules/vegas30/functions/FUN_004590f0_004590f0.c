/* Module: vegas30.exe
   Function: FUN_004590f0
   Address: 004590f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004590f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  puVar4 = param_1;
  for (iVar2 = 0x3a6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[3] = param_2;
  param_1[0x2e6] = 1;
  param_1[0x2ec] = 1;
  iVar2 = GetSystemMetrics(0x44);
  param_1[0x32] = (iVar2 + 1) / 2;
  iVar2 = GetSystemMetrics(0x45);
  param_1[0x204] = &DAT_0063df90;
  param_1[0x33] = (iVar2 + 1) / 2;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2ca] = 0xffff8000;
  param_1[0x2b6] = 0;
  param_1[0x14] = param_1 + 0x2ae;
  param_1[0x17] = param_1 + 0x194;
  param_1[0x18] = param_1 + 0x1b0;
  param_1[0x19] = param_1 + 0x1c5;
  param_1[0x1a] = param_1 + 0x1da;
  param_1[0x1b] = param_1 + 0x1ef;
  param_1[0x1c] = param_1 + 0x204;
  param_1[0xe1] = 0x10000;
  param_1[0x15] = param_1 + 0xd9;
  param_1[0x219] = &DAT_0063df90;
  param_1[0x1d] = param_1 + 0x219;
  param_1[0x17e] = 0x20000;
  param_1[0x16] = param_1 + 0x176;
  param_1[0x19c] = 0x30000;
  param_1[0x1b8] = 0x40000;
  param_1[0x1cd] = 0x50000;
  param_1[0x1e2] = 0x60000;
  param_1[0x1f7] = 0x70000;
  param_1[0x20c] = 0x80000;
  param_1[0x221] = 0x90000;
  uVar3 = 0xa0000;
  puVar4 = param_1 + 0x1e;
  puVar1 = param_1 + 0x22e;
  do {
    puVar1[8] = uVar3;
    *puVar1 = &DAT_0063df90;
    *puVar4 = puVar1;
    uVar3 = uVar3 + 0x10000;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 0x15;
  } while (uVar3 < 0x100000);
  param_1[0xd9] = &DAT_0063df90;
  param_1[0x2ae] = &DAT_0063df90;
  param_1[0xdf] = 0;
  param_1[0x177] = 2;
  param_1[0x176] = &DAT_0063e138;
  param_1[0x195] = 0x80;
  param_1[0x194] = &DAT_0063e160;
  param_1[0x1ef] = &DAT_0063df90;
  param_1[0x1da] = &DAT_0063e818;
  param_1[0x1c5] = &DAT_0063df90;
  param_1[0x1b0] = &DAT_0063df90;
  puVar4 = &DAT_0064b110;
  puVar1 = param_1 + 8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0x3ff00000;
  fVar5 = (float10)FUN_004554a0(param_1);
  *(double *)(param_1 + 0x74) = (double)fVar5;
  return;
}


