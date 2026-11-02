/* Module: sfppack1.dll
   Function: FUN_5cdc22f0
   Address: 5cdc22f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cdc22f0(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2);
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
LAB_5cdc259c:
        *param_2 = *(int *)((int)this + 0x168);
        *param_4 = *(undefined4 *)((int)this + 0x170);
        return 0;
      }
      *(undefined4 *)((int)this + 0x174) = 0;
      if (*(int *)((int)this + 0x80) == 0) {
        *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)this + 0x17c);
      }
      *(undefined4 *)((int)this + 0x164) = 0;
      puVar5 = *(undefined4 **)((int)this + 0x144) + *(int *)((int)this + 0x130) * uVar4 * 2;
      puVar6 = *(undefined4 **)((int)this + 0x144);
      for (iVar2 = ((*(int *)((int)this + 0x128) - *(int *)((int)this + 0x130)) * uVar4 & 0x1fffffff
                   ) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar5 = *(undefined4 **)((int)this + 0x148) + *(int *)((int)this + 300) * uVar4 * 2;
      puVar6 = *(undefined4 **)((int)this + 0x148);
      for (iVar2 = (*(int *)((int)this + 0x134) * uVar4 & 0x1fffffff) << 1; iVar2 != 0;
          iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x148) + *(int *)((int)this + 0x134) * uVar4 * 8)
      ;
      for (iVar2 = ((*(int *)((int)this + 0x128) - *(int *)((int)this + 0x134)) * uVar4 & 0x1fffffff
                   ) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    (**(code **)((int)this + 0x338))(param_1,param_2);
    if (*(int *)((int)this + 0x80) != 0) {
      iVar2 = *(int *)((int)this + 0x16c);
      if (iVar2 < *(int *)((int)this + 300)) {
        if ((*(int *)((int)this + 0x180) != 0) ||
           (*(undefined4 *)((int)this + 0x180) = 1, iVar2 < 1)) goto LAB_5cdc259c;
        puVar5 = (undefined4 *)(*(int *)((int)this + 0x144) + iVar2 * uVar4 * 8);
        for (iVar3 = ((*(int *)((int)this + 0x128) - iVar2) * uVar4 & 0x1fffffff) << 1; iVar3 != 0;
            iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        iVar2 = *(int *)((int)this + 0x16c);
        *(int *)((int)this + 0x178) = iVar2;
      }
      *(int *)((int)this + 0x16c) = iVar2 - *(int *)((int)this + 0x130);
    }
    if ((*(int *)((int)this + 0x16c) != *(int *)((int)this + 0x128)) &&
       (*(int *)((int)this + 0x80) == 0)) goto LAB_5cdc259c;
    if (uVar4 < 2) {
      uVar1 = FUN_5cdc1d90(this,*(int *)((int)this + 0x144),*(double **)((int)this + 0x148),
                           *(undefined4 *)((int)this + 0x14c),
                           (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2),
                           *(undefined4 *)((int)this + 0x134),*(uint *)((int)this + 0x150),
                           *(uint *)((int)this + 0x154));
      FUN_5cdc1e80(this,*(int *)((int)this + 0x144),*(double **)((int)this + 0x148),
                   *(int *)((int)this + 0x14c),uVar1);
      *(undefined4 *)((int)this + 0x164) = 1;
    }
    else {
      uVar1 = FUN_5cdc1c10(this,*(double **)((int)this + 0x144),*(double **)((int)this + 0x148),
                           *(undefined4 *)((int)this + 0x14c),
                           (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2),
                           *(undefined4 *)((int)this + 0x134),*(int *)((int)this + 0x150),
                           *(uint *)((int)this + 0x154));
      FUN_5cdc1f60(this,*(int *)((int)this + 0x144),*(double **)((int)this + 0x148),
                   *(double **)((int)this + 0x14c),uVar1);
      *(undefined4 *)((int)this + 0x164) = 1;
    }
  } while( true );
}


