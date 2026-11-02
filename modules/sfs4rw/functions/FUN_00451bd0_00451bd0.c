/* Module: sfs4rw.dll
   Function: FUN_00451bd0
   Address: 00451bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00451bd0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iStack_10;
  
  puVar11 = *(undefined4 **)((int)param_1 + 0x51);
  pbVar8 = (byte *)*puVar11;
  iVar7 = puVar11[1];
  if (*(char *)(*(int *)((int)param_1 + 0x1bd) + 0x51) == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3d;
    (**(code **)*param_1)(param_1);
  }
  if (iVar7 == 0) {
    uVar2 = (*(code *)puVar11[3])(param_1);
    if ((char)uVar2 == '\0') goto LAB_00451eb3;
    iVar7 = puVar11[1];
    pbVar8 = (byte *)*puVar11;
  }
  iVar7 = iVar7 + -1;
  bVar1 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  if (iVar7 == 0) {
    uVar2 = (*(code *)puVar11[3])(param_1);
    if ((char)uVar2 == '\0') goto LAB_00451eb3;
    iVar7 = puVar11[1];
    pbVar8 = (byte *)*puVar11;
  }
  iVar7 = iVar7 + -1;
  iVar5 = (uint)bVar1 * 0x100 + (uint)*pbVar8;
  pbVar8 = pbVar8 + 1;
  if (iVar7 == 0) {
    uVar2 = (*(code *)puVar11[3])(param_1);
    if ((char)uVar2 == '\0') goto LAB_00451eb3;
    iVar7 = puVar11[1];
    pbVar8 = (byte *)*puVar11;
  }
  bVar1 = *pbVar8;
  puVar3 = (undefined4 *)(uint)bVar1;
  iVar7 = iVar7 + -1;
  pbVar8 = pbVar8 + 1;
  if (((iVar5 != (int)puVar3 * 2 + 6) || (bVar1 == 0)) || (4 < bVar1)) {
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x66;
  *(undefined4 **)(*param_1 + 0x18) = puVar3;
  (**(code **)(*param_1 + 4))(param_1,1);
  iStack_10 = 0;
  *(int *)((int)param_1 + 0x14d) = iVar5;
  if (iVar5 != 0) {
    puVar12 = (undefined4 *)((int)param_1 + 0x151);
    do {
      if (iVar7 == 0) {
        uVar2 = (*(code *)puVar11[3])(param_1);
        if ((char)uVar2 == '\0') goto LAB_00451eb3;
        iVar7 = puVar11[1];
        pbVar8 = (byte *)*puVar11;
      }
      iVar7 = iVar7 + -1;
      uVar6 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      if (iVar7 == 0) {
        uVar2 = (*(code *)puVar11[3])(param_1);
        if ((char)uVar2 == '\0') goto LAB_00451eb3;
        iVar7 = puVar11[1];
        pbVar8 = (byte *)*puVar11;
      }
      iVar7 = iVar7 + -1;
      puVar10 = *(uint **)((int)param_1 + 0xf6);
      iVar4 = 0;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      if (0 < *(int *)((int)param_1 + 0x5d)) {
        do {
          if (uVar6 == *puVar10) goto LAB_00451d5e;
          iVar4 = iVar4 + 1;
          puVar10 = (uint *)((int)puVar10 + 0x51);
        } while (iVar4 < *(int *)((int)param_1 + 0x5d));
      }
      *(undefined4 *)(*param_1 + 0x14) = 5;
      *(uint *)(*param_1 + 0x18) = uVar6;
      (**(code **)*param_1)(param_1);
LAB_00451d5e:
      *puVar12 = puVar10;
      puVar10[5] = (int)(uint)bVar1 >> 4;
      puVar10[6] = bVar1 & 0xf;
      iVar4 = *param_1;
      *(uint *)(iVar4 + 0x18) = uVar6;
      *(uint *)(iVar4 + 0x1c) = puVar10[5];
      *(uint *)(iVar4 + 0x20) = puVar10[6];
      *(undefined4 *)(*param_1 + 0x14) = 0x67;
      (**(code **)(*param_1 + 4))(param_1,1);
      iStack_10 = iStack_10 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar3;
    } while (iStack_10 < iVar5);
  }
  if (iVar7 == 0) {
    uVar2 = (*(code *)puVar11[3])(param_1);
    if ((char)uVar2 == '\0') goto LAB_00451eb3;
    iVar7 = puVar11[1];
    pbVar8 = (byte *)*puVar11;
  }
  iVar7 = iVar7 + -1;
  pbVar9 = pbVar8 + 1;
  *(uint *)((int)param_1 + 0x195) = (uint)*pbVar8;
  if (iVar7 == 0) {
    uVar2 = (*(code *)puVar11[3])(param_1);
    if ((char)uVar2 == '\0') goto LAB_00451eb3;
    iVar7 = puVar11[1];
    pbVar9 = (byte *)*puVar11;
  }
  iVar7 = iVar7 + -1;
  pbVar8 = pbVar9 + 1;
  *(uint *)((int)param_1 + 0x199) = (uint)*pbVar9;
  if (iVar7 == 0) {
    uVar2 = (*(code *)puVar11[3])(param_1);
    if ((char)uVar2 == '\0') {
LAB_00451eb3:
      return uVar2 & 0xffffff00;
    }
    iVar7 = puVar11[1];
    pbVar8 = (byte *)*puVar11;
  }
  bVar1 = *pbVar8;
  *(uint *)((int)param_1 + 0x1a1) = bVar1 & 0xf;
  iVar5 = *param_1;
  *(int *)((int)param_1 + 0x19d) = (int)(uint)bVar1 >> 4;
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)((int)param_1 + 0x195);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)((int)param_1 + 0x199);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)((int)param_1 + 0x19d);
  *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)((int)param_1 + 0x1a1);
  *(undefined4 *)(*param_1 + 0x14) = 0x68;
  (**(code **)(*param_1 + 4))(param_1,1);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x52) = 0;
  iVar5 = *(int *)((int)param_1 + 0xae) + 1;
  *(int *)((int)param_1 + 0xae) = iVar5;
  *puVar11 = pbVar8 + 1;
  puVar11[1] = iVar7 + -1;
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}


