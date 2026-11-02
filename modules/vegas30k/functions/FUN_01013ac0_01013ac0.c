/* Module: vegas30k.dll
   Function: FUN_01013ac0
   Address: 01013ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01013ac0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_2 + 0x34c);
  iVar1 = *(int *)(*(int *)(param_2 + 0x21c) + 0x34c);
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    *(byte *)(iVar3 + 0x6f) = *(byte *)(iVar3 + 0x6f) | 2;
  }
  if ((*(uint *)(param_2 + 8) & 2) != 0) {
    *(byte *)(iVar3 + 0x6f) = *(byte *)(iVar3 + 0x6f) | 1;
  }
  *(undefined1 *)(iVar3 + 0x70) = 0;
  *(undefined1 *)(iVar3 + 0x71) = 0;
  *(undefined4 *)(iVar3 + 0x72) = 0x1000001;
  ISO9660_BuildShortDateTime
            ((_SYSTEMTIME *)(param_1 + 0xb2a),(tagISO9660_DATE_TIME *)(iVar3 + 0x68));
  *(undefined1 *)(iVar3 + 0x76) = *(undefined1 *)(iVar3 + 0x30);
  bVar2 = *(byte *)(iVar3 + 0x30);
  puVar5 = (undefined4 *)(iVar3 + 0x31);
  puVar6 = (undefined4 *)(iVar3 + 0x77);
  for (uVar4 = (uint)(bVar2 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = bVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  bVar2 = *(char *)(iVar3 + 0x30) + 0x21;
  *(byte *)(iVar3 + 0x56) = bVar2;
  if ((bVar2 & 1) != 0) {
    *(char *)(iVar3 + 0x56) = *(char *)(iVar3 + 0x30) + '\"';
  }
  FUN_010139e0(param_2);
  uVar4 = *(uint *)(iVar1 + 0x14) & 0x7ff;
  if (0x800 - uVar4 < (uint)*(byte *)(iVar3 + 0x56)) {
    *(uint *)(iVar1 + 0x14) = (*(uint *)(iVar1 + 0x14) - uVar4) + 0x800;
  }
  *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + (uint)*(byte *)(iVar3 + 0x56);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(iVar1 + 0x10);
  iVar3 = (*(uint *)(iVar1 + 0x14) >> 0xb) + (uint)((*(uint *)(iVar1 + 0x14) & 0x7ff) != 0);
  *(int *)(iVar1 + 0x10) = iVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar3;
  return;
}


