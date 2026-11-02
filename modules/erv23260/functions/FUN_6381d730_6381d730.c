/* Module: erv23260.dll
   Function: FUN_6381d730
   Address: 6381d730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6381d730(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = (-(uint)(*(int *)((int)this + 0x334) != 0) & 6) + 6;
  puVar6 = (undefined4 *)(*(int *)((int)this + 0x380) + param_1 * iVar2 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x380) + param_2 * iVar2 * 4);
  if (puVar6 < puVar1) {
    uVar4 = (uint)((int)puVar1 + (3 - (int)puVar6)) >> 2;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  if (param_1 < param_2) {
    iVar2 = param_1 << 5;
    do {
      pbVar3 = (byte *)(*(int *)((int)this + 0x39c) + param_1);
      *pbVar3 = *pbVar3 & 0xe0;
      *(byte *)(param_1 + *(int *)((int)this + 0x39c)) =
           *(byte *)(param_1 + *(int *)((int)this + 0x39c)) | 0x40;
      switch(*(undefined4 *)((int)this + 0x460)) {
      case 0:
      case 1:
      case 5:
        *(undefined1 *)(*(int *)((int)this + 0x38c) + param_1) = 3;
        break;
      case 2:
        *(undefined1 *)(*(int *)((int)this + 0x38c) + param_1) = 3;
      case 3:
        *(undefined1 *)(*(int *)((int)this + 0x398) + param_1) = 0x11;
        break;
      case 4:
        *(undefined1 *)(*(int *)((int)this + 0x38c) + param_1) = 8;
      }
      puVar6 = (undefined4 *)(*(int *)((int)this + 0x388) + iVar2);
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      if ((*(int *)((int)this + 0x338) != 0) || (*(int *)((int)this + 0x334) != 0)) {
        *(undefined4 *)(*(int *)((int)this + 0x390) + param_1 * 8) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x390) + 4 + param_1 * 8) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x394) + param_1 * 8) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x394) + 4 + param_1 * 8) = 0;
      }
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 0x20;
    } while (param_1 < param_2);
  }
  return;
}


