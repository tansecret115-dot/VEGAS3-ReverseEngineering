/* Module: aviplug.dll
   Function: FUN_5f93d2f0
   Address: 5f93d2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5f93d2f0(int *param_1,int param_2,undefined4 *param_3)

{
  double dVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint unaff_EBX;
  undefined4 *puVar7;
  int unaff_EDI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_b4;
  
  puVar9 = &DAT_5f9da4c0;
  iVar2 = (**(code **)*param_3)(param_3,&DAT_5f9da4c0,&local_e0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_e0,0xcc);
    if (-1 < iVar2) {
      dVar1 = (double)uStack_c8 / (double)uStack_cc;
      if ((double)uStack_c8 / (double)uStack_cc <= _DAT_5f9d7d10) {
        dVar1 = _DAT_5f9d7d10;
      }
      iVar2 = *(int *)(param_2 + 0x428);
      puVar4 = (undefined4 *)(iVar2 + 0x50);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(double *)(iVar2 + 0x60) = dVar1;
      *(undefined4 *)(iVar2 + 0x68) = 0;
      *(undefined4 *)(iVar2 + 0x70) = 0;
      *(undefined4 *)(iVar2 + 0x50) = 0x40;
      *(undefined4 *)(iVar2 + 0x54) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x58) = 0;
      *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x6c) = 0x3ff00000;
      *(undefined4 *)(iVar2 + 0x74) = 0;
      *(undefined4 *)(iVar2 + 0x78) = 0;
      *(undefined4 *)(iVar2 + 0x7c) = 0;
      *(undefined4 *)(iVar2 + 0x80) = 0;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0x88) = 0;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      iVar2 = *(int *)(param_2 + 0x428);
      puVar4 = (undefined4 *)(iVar2 + 8);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(double *)(iVar2 + 0x18) = dVar1;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined4 *)(iVar2 + 8) = 0x40;
      *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x24) = 0x3ff00000;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      *(undefined4 *)(iVar2 + 0x40) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0,0,&stack0xffffff10);
      if ((-1 < iVar2) &&
         (puVar3 = FUN_5f936cf0(*(int *)(unaff_EDI + 0xc)), puVar3 != (undefined1 *)0x0)) {
        iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0,puVar3,&stack0xffffff10);
        if (iVar2 < 0) {
          FUN_5f936d40(*(int *)(unaff_EDI + 0xc));
        }
        else {
          if (*(int *)(*(int *)(param_2 + 0x428) + 0x48) != 0) {
            FUN_5f936d40(*(int *)(unaff_EDI + 0xc));
          }
          *(undefined1 **)(*(int *)(param_2 + 0x428) + 0x48) = puVar3;
          puVar4 = (undefined4 *)FUN_5f936cf0(*(int *)(unaff_EDI + 0xc));
          if (puVar4 != (undefined4 *)0x0) {
            puVar7 = *(undefined4 **)(*(int *)(param_2 + 0x428) + 0x48);
            puVar8 = puVar4;
            for (uVar6 = unaff_EBX >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar6 = unaff_EBX & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            if (**(int **)(param_2 + 0x428) != 0) {
              FUN_5f936d40(*(int *)(unaff_EDI + 0xc));
            }
            **(undefined4 **)(param_2 + 0x428) = puVar4;
          }
        }
      }
      iVar2 = *(int *)(*(int *)(param_2 + 0x428) + 0x94);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0x3fd00000;
        *(undefined4 *)(iVar2 + 0x10) = local_e0;
        *(undefined4 *)(iVar2 + 0x14) = uStack_dc;
        *(undefined4 *)(iVar2 + 0x1c) = uStack_b4;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        *(undefined4 *)(iVar2 + 0x28) = 0;
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x30) = 0;
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return (int)puVar9;
}


