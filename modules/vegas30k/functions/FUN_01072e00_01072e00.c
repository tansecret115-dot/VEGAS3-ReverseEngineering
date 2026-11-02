/* Module: vegas30k.dll
   Function: FUN_01072e00
   Address: 01072e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01072e00(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_2 + 0x21c) != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x21c) + 0x34c);
    iVar4 = *(int *)(param_2 + 0x34c);
    if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
      *(byte *)(iVar4 + 0xff) = *(byte *)(iVar4 + 0xff) | 2;
    }
    if ((*(uint *)(param_2 + 8) & 2) != 0) {
      *(byte *)(iVar4 + 0xff) = *(byte *)(iVar4 + 0xff) | 1;
    }
    *(undefined1 *)(iVar4 + 0x100) = 0;
    *(undefined1 *)(iVar4 + 0x101) = 0;
    *(undefined4 *)(iVar4 + 0x102) = 0x1000001;
    ISO9660_BuildShortDateTime
              ((_SYSTEMTIME *)(param_1 + 0xe7a),(tagISO9660_DATE_TIME *)(iVar4 + 0xf8));
    *(undefined1 *)(iVar4 + 0x106) = *(undefined1 *)(iVar4 + 0x38);
    bVar2 = *(byte *)(iVar4 + 0x38);
    puVar6 = (undefined4 *)(iVar4 + 0x39);
    puVar7 = (undefined4 *)(iVar4 + 0x107);
    for (uVar5 = (uint)(bVar2 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = bVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    bVar2 = *(char *)(iVar4 + 0x38) + 0x21;
    *(byte *)(iVar4 + 0xe6) = bVar2;
    if ((bVar2 & 1) != 0) {
      *(char *)(iVar4 + 0xe6) = *(char *)(iVar4 + 0x38) + '\"';
    }
    uVar5 = *(uint *)(iVar1 + 0x18) & 0x7ff;
    if (0x800 - uVar5 < (uint)*(byte *)(iVar4 + 0xe6)) {
      *(uint *)(iVar1 + 0x18) = (*(uint *)(iVar1 + 0x18) - uVar5) + 0x800;
    }
    *(uint *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + (uint)*(byte *)(iVar4 + 0xe6);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - *(int *)(iVar1 + 0x14);
    iVar3 = (*(uint *)(iVar1 + 0x18) >> 0xb) + (uint)((*(uint *)(iVar1 + 0x18) & 0x7ff) != 0);
    *(int *)(iVar1 + 0x14) = iVar3;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar3;
    if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
      *(byte *)(iVar4 + 0x146) = *(byte *)(iVar4 + 0x146) | 2;
    }
    if ((*(uint *)(param_2 + 8) & 2) != 0) {
      *(byte *)(iVar4 + 0x146) = *(byte *)(iVar4 + 0x146) | 1;
    }
    *(undefined4 *)(iVar4 + 0x149) = 0x1000001;
    ISO9660_BuildShortDateTime
              ((_SYSTEMTIME *)(param_1 + 0xe7a),(tagISO9660_DATE_TIME *)(iVar4 + 0x13f));
    *(undefined1 *)(iVar4 + 0x147) = 0;
    *(undefined1 *)(iVar4 + 0x148) = 0;
    *(undefined1 *)(iVar4 + 0x14d) = *(undefined1 *)(iVar4 + 0x5e);
    bVar2 = *(byte *)(iVar4 + 0x5e);
    puVar6 = (undefined4 *)(iVar4 + 0x5f);
    puVar7 = (undefined4 *)(iVar4 + 0x14e);
    for (uVar5 = (uint)(bVar2 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = bVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    bVar2 = *(char *)(iVar4 + 0x5e) + 0x21;
    *(byte *)(iVar4 + 0x12d) = bVar2;
    if ((bVar2 & 1) != 0) {
      *(char *)(iVar4 + 0x12d) = *(char *)(iVar4 + 0x5e) + '\"';
    }
    uVar5 = *(uint *)(iVar1 + 0x20) & 0x7ff;
    if (0x800 - uVar5 < (uint)*(byte *)(iVar4 + 0x12d)) {
      *(uint *)(iVar1 + 0x20) = (*(uint *)(iVar1 + 0x20) - uVar5) + 0x800;
    }
    *(uint *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + (uint)*(byte *)(iVar4 + 0x12d);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - *(int *)(iVar1 + 0x1c);
    iVar4 = (*(uint *)(iVar1 + 0x20) >> 0xb) + (uint)((*(uint *)(iVar1 + 0x20) & 0x7ff) != 0);
    *(int *)(iVar1 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar4;
  }
  return;
}


