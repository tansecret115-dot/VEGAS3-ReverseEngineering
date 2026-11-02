/* Module: aviplug.dll
   Function: FUN_5f943250
   Address: 5f943250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f943250(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *param_1 = *(undefined4 *)(param_3 + 0xc);
  param_1[1] = *(undefined4 *)(param_3 + 0x14);
  param_1[2] = param_6;
  if (param_4 < 0) {
    param_4 = *(int *)(param_3 + 0x20);
  }
  param_1[3] = param_4;
  param_1[4] = *(undefined4 *)(param_3 + 0x24);
  param_1[5] = *(undefined4 *)(param_3 + 0x28);
  param_1[6] = *(undefined4 *)(param_3 + 0x2c);
  param_1[7] = *(undefined4 *)(param_3 + 8);
  param_1[8] = 1000000;
  if (param_5 < 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    param_1[10] = 0;
    param_1[9] = uVar1;
    return;
  }
  param_1[10] = 0;
  param_1[9] = param_5;
  return;
}


