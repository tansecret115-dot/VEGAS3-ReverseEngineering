/* Module: sfppack1.dll
   Function: FUN_5cdc1940
   Address: 5cdc1940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cdc1940(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2);
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0x164) == 0)) && (*(int *)((int)this + 0x180) != 0))
  {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0x164) == 1) {
      (**(code **)((int)this + 0x33c))(param_3,param_4);
      if (*(int *)((int)this + 0x174) != *(int *)((int)this + 0x178)) {
LAB_5cdc1bec:
        *param_2 = *(int *)((int)this + 0x168);
        *param_4 = *(undefined4 *)((int)this + 0x170);
        return 0;
      }
      *(undefined4 *)((int)this + 0x174) = 0;
      if (*(int *)((int)this + 0x80) == 0) {
        *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)this + 0x17c);
      }
      *(undefined4 *)((int)this + 0x164) = 0;
      puVar4 = *(undefined4 **)((int)this + 0x138) + *(int *)((int)this + 0x130) * uVar3;
      puVar5 = *(undefined4 **)((int)this + 0x138);
      for (uVar1 = (*(int *)((int)this + 0x128) - *(int *)((int)this + 0x130)) * uVar3 & 0x3fffffff;
          uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar4 = *(undefined4 **)((int)this + 0x13c) + *(int *)((int)this + 300) * uVar3;
      puVar5 = *(undefined4 **)((int)this + 0x13c);
      for (uVar1 = *(int *)((int)this + 0x134) * uVar3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1)
      {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x13c) + *(int *)((int)this + 0x134) * uVar3 * 4)
      ;
      for (uVar1 = (*(int *)((int)this + 0x128) - *(int *)((int)this + 0x134)) * uVar3 & 0x3fffffff;
          uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    (**(code **)((int)this + 0x338))(param_1,param_2);
    if (*(int *)((int)this + 0x80) != 0) {
      iVar2 = *(int *)((int)this + 0x16c);
      if (iVar2 < *(int *)((int)this + 300)) {
        if ((*(int *)((int)this + 0x180) != 0) ||
           (*(undefined4 *)((int)this + 0x180) = 1, iVar2 < 1)) goto LAB_5cdc1bec;
        puVar4 = (undefined4 *)(*(int *)((int)this + 0x138) + iVar2 * uVar3 * 4);
        for (uVar1 = (*(int *)((int)this + 0x128) - iVar2) * uVar3 & 0x3fffffff; uVar1 != 0;
            uVar1 = uVar1 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        iVar2 = *(int *)((int)this + 0x16c);
        *(int *)((int)this + 0x178) = iVar2;
      }
      *(int *)((int)this + 0x16c) = iVar2 - *(int *)((int)this + 0x130);
    }
    if ((*(int *)((int)this + 0x16c) != *(int *)((int)this + 0x128)) &&
       (*(int *)((int)this + 0x80) == 0)) goto LAB_5cdc1bec;
    if (uVar3 < 2) {
      uVar1 = FUN_5cdc1140(this,*(int *)((int)this + 0x138),*(float **)((int)this + 0x13c),
                           *(undefined4 *)((int)this + 0x140),
                           (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2),
                           *(undefined4 *)((int)this + 0x134),*(float *)((int)this + 0x150),
                           *(uint *)((int)this + 0x154));
      FUN_5cdc1220(this,*(int *)((int)this + 0x138),*(float **)((int)this + 0x13c),
                   *(int *)((int)this + 0x140),uVar1);
      *(undefined4 *)((int)this + 0x164) = 1;
    }
    else {
      uVar1 = FUN_5cdc0fc0(this,*(float **)((int)this + 0x138),*(float **)((int)this + 0x13c),
                           *(undefined4 *)((int)this + 0x140),
                           (float)(uint)*(ushort *)(*(int *)((int)this + 0x70) + 2),
                           *(undefined4 *)((int)this + 0x134),*(uint *)((int)this + 0x150),
                           *(float **)((int)this + 0x154));
      FUN_5cdc1300(this,*(int *)((int)this + 0x138),*(float **)((int)this + 0x13c),
                   *(float **)((int)this + 0x140),uVar1);
      *(undefined4 *)((int)this + 0x164) = 1;
    }
  } while( true );
}


