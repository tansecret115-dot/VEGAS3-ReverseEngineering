/* Module: 14_43260.dll
   Function: FUN_100029c0
   Address: 100029c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_100029c0(void *this,undefined4 *param_1,uint param_2,int param_3,short *param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)((int)this + 600);
  iVar5 = 0;
  if (0 < iVar1) {
    uVar2 = 0x14 - *(short *)((int)this + 600);
    if ((ushort)param_2 < uVar2) {
      puVar4 = (undefined4 *)((int)this + iVar1 + 0x244);
      for (uVar3 = (param_2 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(uint *)((int)this + 600) = *(int *)((int)this + 600) + (param_2 & 0xffff);
      return 0xffffffff;
    }
    puVar4 = param_1;
    puVar6 = (undefined4 *)((int)this + iVar1 + 0x244);
    for (uVar3 = (uint)(uVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    param_2 = param_2 - uVar2;
    param_1 = (undefined4 *)((int)param_1 + (uint)uVar2);
    FUN_10002b10(this,(undefined1 *)((int)this + 0x244),param_3);
    *(undefined4 *)((int)this + 600) = 0;
    iVar5 = *(int *)((int)this + 0x264) * *(int *)((int)this + 0x260);
    *(undefined4 *)((int)this + 0x244) = 0;
    *(undefined4 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(undefined4 *)((int)this + 0x250) = 0;
    *(undefined4 *)((int)this + 0x254) = 0;
  }
  for (; 0x13 < (ushort)param_2; param_2 = param_2 + 0xffec) {
    FUN_10002b10(this,(undefined1 *)param_1,param_3 + iVar5 * 2);
    iVar5 = iVar5 + *(int *)((int)this + 0x264) * *(int *)((int)this + 0x260);
    param_1 = param_1 + 5;
  }
  puVar4 = (undefined4 *)((int)this + 0x244);
  for (uVar3 = (param_2 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(uint *)((int)this + 600) = param_2 & 0xffff;
  *param_4 = (short)iVar5 * 2;
  return 0;
}


