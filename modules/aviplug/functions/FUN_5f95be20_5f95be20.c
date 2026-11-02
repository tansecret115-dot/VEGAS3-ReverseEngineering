/* Module: aviplug.dll
   Function: FUN_5f95be20
   Address: 5f95be20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f95be20(void *param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar11 = 0;
  if (*(int *)((int)param_1 + 0x34) == 0) {
    return 0;
  }
  iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
  if (iVar8 != 0) {
    iVar13 = *(int *)(*(int *)((int)param_1 + 0x98) + 0x24) + 0x40;
    if (*(int *)(iVar8 + 0x90) == iVar13) {
      puVar4 = *(undefined4 **)(iVar8 + 0x94);
    }
    else {
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)((int)param_1 + 0x30) + 0x20))
                         (*(int **)((int)param_1 + 0x30),0x42,iVar13);
      iVar11 = (-(uint)(puVar4 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
      if (-1 < iVar11) {
        iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
        puVar12 = *(undefined4 **)(iVar8 + 0x94);
        if (puVar12 == (undefined4 *)0x0) {
          *(undefined4 **)(iVar8 + 0x94) = puVar4;
          *(undefined2 *)puVar4 = 0;
          *(undefined2 *)((int)puVar4 + 2) = 0;
        }
        else {
          puVar14 = puVar4;
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          (**(code **)(**(int **)((int)param_1 + 0x30) + 0x24))
                    (*(int **)((int)param_1 + 0x30),
                     *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x94));
          *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x94) = puVar4;
        }
      }
    }
    *(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x90) = iVar13;
    if ((-1 < iVar11) && (puVar4 != (undefined4 *)0x0)) {
      puVar12 = (undefined4 *)((int)param_1 + 0x58);
      puVar14 = puVar4;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      uVar10 = *(uint *)(*(int *)((int)param_1 + 0x98) + 0x24);
      if (uVar10 == 0) {
        puVar4[0xd] = 0;
        puVar4[0xc] = 0;
      }
      else {
        puVar12 = *(undefined4 **)(*(int *)((int)param_1 + 0x98) + 0x20);
        puVar14 = puVar4 + 0x10;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        puVar4[0xc] = puVar4 + 0x10;
      }
    }
  }
  iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
  if (iVar8 == 0) {
    return iVar11;
  }
  psVar1 = *(short **)(iVar8 + 0x16);
  iVar8 = 0;
  if (psVar1 != (short *)0x0) {
    if ((*psVar1 == 3) || (*psVar1 == 1)) {
      iVar8 = 0x10;
    }
    else {
      iVar8 = (ushort)psVar1[8] + 0x12;
    }
  }
  if (*(int *)((int)param_1 + 0xb8) != iVar8) {
    if (psVar1 != (short *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x30) + 0x24))(*(int **)((int)param_1 + 0x30),psVar1);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x16) = 0;
    if (*(int *)((int)param_1 + 0xb8) != 0) {
      uVar5 = (**(code **)(**(int **)((int)param_1 + 0x30) + 0x20))
                        (*(int **)((int)param_1 + 0x30),0x42,*(int *)((int)param_1 + 0xb8));
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x16) = uVar5;
    }
  }
  puVar4 = *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x16);
  if ((puVar4 != (undefined4 *)0x0) && (*(undefined4 **)((int)param_1 + 0xb4) != (undefined4 *)0x0))
  {
    uVar10 = *(uint *)((int)param_1 + 0xb8);
    puVar12 = *(undefined4 **)((int)param_1 + 0xb4);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar4 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(short *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0xe) == 0xc) {
    iVar8 = FUN_5f95c930(param_1,*(int *)((int)param_1 + 0x34));
    bVar3 = true;
    if (iVar8 == 0) goto LAB_5f95c020;
  }
  else {
LAB_5f95c020:
    bVar3 = false;
  }
  iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
  if ((*(int *)(iVar8 + 0x16) == 0) && (!bVar3)) {
    if (*(int *)(iVar8 + 0x3e) != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x30) + 0x24))
                (*(int **)((int)param_1 + 0x30),*(int *)(iVar8 + 0x3e));
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x3e) = 0;
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x3a) = 0;
    return iVar11;
  }
  if (*(int *)(iVar8 + 0x3a) == 0x40) {
    puVar6 = *(undefined2 **)(iVar8 + 0x3e);
  }
  else {
    puVar6 = (undefined2 *)
             (**(code **)(**(int **)((int)param_1 + 0x30) + 0x20))
                       (*(int **)((int)param_1 + 0x30),0x42,0x40);
    iVar11 = (-(uint)(puVar6 != (undefined2 *)0x0) & 0x7ff8fff2) + 0x8007000e;
    if (iVar11 < 0) goto LAB_5f95c11b;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar2 = *(undefined2 **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x3e);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar6 = *puVar2;
      puVar6[1] = puVar2[1];
      (**(code **)(**(int **)((int)param_1 + 0x30) + 0x24))
                (*(int **)((int)param_1 + 0x30),
                 *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x3e));
    }
    *(undefined2 **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x3e) = puVar6;
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x3a) = 0x40;
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x9c);
  puVar12 = (undefined4 *)(puVar6 + 8);
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar12 = puVar12 + 1;
  }
LAB_5f95c11b:
  *(undefined4 *)(puVar6 + 0x16) = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0;
  if (bVar3) {
    iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
    uVar7 = *(short *)(iVar8 + 2) << 1;
    *(ushort *)(iVar8 + 0xc) = uVar7;
    *(undefined2 *)(iVar8 + 0xe) = 0x10;
    *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 4) * (uint)uVar7;
    *(undefined2 *)(iVar8 + 0x10) = 0;
    *(uint *)(puVar6 + 0x12) = *(uint *)(puVar6 + 0x12) | 0x100000;
  }
  return iVar11;
}


