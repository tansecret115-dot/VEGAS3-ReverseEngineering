/* Module: vegas30k.dll
   Function: FUN_01072cb0
   Address: 01072cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01072cb0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  *(undefined1 *)(iVar1 + 0x266) = 0;
  *(undefined1 *)(iVar1 + 0x265) = *(undefined1 *)(iVar1 + 0x38);
  bVar2 = *(byte *)(iVar1 + 0x38);
  puVar4 = (undefined4 *)(iVar1 + 0x39);
  puVar5 = (undefined4 *)(iVar1 + 0x26d);
  for (uVar3 = (uint)(bVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = bVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  bVar2 = *(char *)(iVar1 + 0x38) + 8;
  *(byte *)(iVar1 + 0x264) = bVar2;
  if ((bVar2 & 1) != 0) {
    *(char *)(iVar1 + 0x264) = *(char *)(iVar1 + 0x38) + '\t';
  }
  *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (uint)*(byte *)(iVar1 + 0x264);
  *(undefined1 *)(iVar1 + 0x295) = 0;
  *(undefined1 *)(iVar1 + 0x294) = *(undefined1 *)(iVar1 + 0x5e);
  bVar2 = *(byte *)(iVar1 + 0x5e);
  puVar4 = (undefined4 *)(iVar1 + 0x5f);
  puVar5 = (undefined4 *)(iVar1 + 0x29c);
  for (uVar3 = (uint)(bVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = bVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  bVar2 = *(char *)(iVar1 + 0x5e) + 8;
  *(byte *)(iVar1 + 0x293) = bVar2;
  if ((bVar2 & 1) != 0) {
    *(char *)(iVar1 + 0x293) = *(char *)(iVar1 + 0x5e) + '\t';
  }
  *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + (uint)*(byte *)(iVar1 + 0x293);
  return;
}


