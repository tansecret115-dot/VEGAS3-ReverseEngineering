/* Module: erv13260.dll
   Function: FUN_635f6e30
   Address: 635f6e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f6e30(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  
  *param_1 = 0x546;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x15] = 0;
  param_1[0xe] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x16) = 10;
  *(undefined1 *)((int)param_1 + 0x62) = 10;
  *(undefined1 *)((int)param_1 + 0x5b) = 10;
  *(undefined1 *)((int)param_1 + 0x61) = 10;
  *(undefined1 *)((int)param_1 + 0x59) = 0x14;
  *(undefined1 *)((int)param_1 + 0x5a) = 10;
  *(undefined1 *)(param_1 + 0x17) = 2;
  *(undefined4 *)((int)param_1 + 0x5d) = 0;
  puVar3 = calloc(*param_2 * param_2[1],1);
  *(undefined4 **)((int)param_1 + 99) = puVar3;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  for (uVar5 = (uint)(iVar1 * iVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = iVar1 * iVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  pvVar4 = malloc(0x38);
  param_1[0xf] = pvVar4;
  pvVar4 = malloc(0x38);
  param_1[0x10] = pvVar4;
  pvVar4 = malloc(0x38);
  param_1[0x11] = pvVar4;
  pvVar4 = malloc(0x10);
  param_1[0x12] = pvVar4;
  pvVar4 = malloc(0x10);
  param_1[0x13] = pvVar4;
  pvVar4 = malloc(0x10);
  param_1[0x14] = pvVar4;
  *(undefined4 *)(param_1[0x12] + 0xc) = 0;
  return;
}


