/* Module: aviplug.dll
   Function: FUN_5f9432e0
   Address: 5f9432e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9432e0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *param_1 = *(undefined4 *)(param_3 + 8);
  param_1[1] = *(undefined4 *)(param_3 + 0xc);
  param_1[2] = *(undefined4 *)(param_3 + 0x10);
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_3 + 0x14);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)(param_3 + 0x16);
  param_1[5] = *(undefined4 *)(param_3 + 0x1c);
  param_1[6] = *(undefined4 *)(param_3 + 0x20);
  param_1[7] = *(undefined4 *)(param_3 + 0x24);
  if (param_4 < 0) {
    param_4 = *(int *)(param_3 + 0x28);
  }
  param_1[8] = param_4;
  param_1[9] = *(undefined4 *)(param_3 + 0x18);
  param_1[10] = *(undefined4 *)(param_3 + 0x2c);
  param_1[0xb] = *(undefined4 *)(param_3 + 0x30);
  param_1[0xc] = *(undefined4 *)(param_3 + 0x34);
  param_1[0xd] = (int)*(short *)(param_3 + 0x38);
  param_1[0xe] = (int)*(short *)(param_3 + 0x3a);
  param_1[0xf] = (int)*(short *)(param_3 + 0x3c);
  param_1[0x10] = (int)*(short *)(param_3 + 0x3e);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar3 = param_1 + 0x13;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}


