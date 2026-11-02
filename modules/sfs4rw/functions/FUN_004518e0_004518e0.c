/* Module: sfs4rw.dll
   Function: FUN_004518e0
   Address: 004518e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004518e0(int *param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *unaff_EBX;
  int iVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int unaff_retaddr;
  uint uVar10;
  
  piVar2 = *(int **)((int)param_1 + 0x51);
  iVar5 = piVar2[1];
  iVar7 = *piVar2;
  *(undefined1 *)((int)param_1 + 0xfa) = param_2;
  *(undefined1 *)((int)param_1 + 0xfb) = param_3;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    iVar7 = *piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  iVar7 = iVar7 + 1;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    iVar7 = *piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar8 = (byte *)(iVar7 + 1);
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    pbVar8 = (byte *)*piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar9 = pbVar8 + 1;
  *(uint *)((int)param_1 + 0xf2) = (uint)*pbVar8;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    pbVar9 = (byte *)*piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar8 = pbVar9 + 1;
  *(uint *)((int)param_1 + 0x59) = (uint)*pbVar9 << 8;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    pbVar8 = (byte *)*piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar9 = pbVar8 + 1;
  *(uint *)((int)param_1 + 0x59) = *(int *)((int)param_1 + 0x59) + (uint)*pbVar8;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    pbVar9 = (byte *)*piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar8 = pbVar9 + 1;
  *(uint *)((int)param_1 + 0x55) = (uint)*pbVar9 << 8;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_00451bbd;
    pbVar8 = (byte *)*piVar2;
    iVar5 = piVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar9 = pbVar8 + 1;
  *(uint *)((int)param_1 + 0x55) = *(int *)((int)param_1 + 0x55) + (uint)*pbVar8;
  if (iVar5 == 0) {
    uVar3 = (*(code *)piVar2[3])(param_1);
    if ((char)uVar3 == '\0') {
LAB_00451bbd:
      return uVar3 & 0xffffff00;
    }
    pbVar9 = (byte *)*piVar2;
    iVar5 = piVar2[1];
  }
  *(uint *)((int)param_1 + 0x5d) = (uint)*pbVar9;
  iVar7 = *param_1;
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)((int)param_1 + 0x1a5);
  *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)((int)param_1 + 0x55);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)((int)param_1 + 0x59);
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)((int)param_1 + 0x5d);
  iVar5 = iVar5 + -1;
  *(undefined4 *)(*param_1 + 0x14) = 99;
  pbVar9 = pbVar9 + 1;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(char *)(*(int *)((int)param_1 + 0x1bd) + 0x51) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x39;
    (**(code **)*param_1)(param_1);
  }
  if (((*(int *)((int)param_1 + 0x59) == 0) || (*(int *)((int)param_1 + 0x55) == 0)) ||
     (*(int *)((int)param_1 + 0x5d) < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1f;
    (**(code **)*param_1)(param_1);
  }
  if (unaff_retaddr != *(int *)((int)param_1 + 0x5d) * 3) {
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((int)param_1 + 0xf6) == 0) {
    uVar4 = (**(code **)param_1[1])(param_1,1,*(int *)((int)param_1 + 0x5d) * 0x51);
    *(undefined4 *)((int)param_1 + 0xf6) = uVar4;
  }
  puVar6 = *(uint **)((int)param_1 + 0xf6);
  uVar10 = 0;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    do {
      puVar6[1] = uVar10;
      if (iVar5 == 0) {
        uVar3 = (*(code *)unaff_EBX[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00451bbd;
        pbVar9 = (byte *)*unaff_EBX;
        iVar5 = unaff_EBX[1];
      }
      iVar5 = iVar5 + -1;
      pbVar8 = pbVar9 + 1;
      *puVar6 = (uint)*pbVar9;
      if (iVar5 == 0) {
        uVar3 = (*(code *)unaff_EBX[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00451bbd;
        pbVar8 = (byte *)*unaff_EBX;
        iVar5 = unaff_EBX[1];
      }
      iVar5 = iVar5 + -1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      puVar6[3] = bVar1 & 0xf;
      puVar6[2] = (int)(uint)bVar1 >> 4;
      if (iVar5 == 0) {
        uVar3 = (*(code *)unaff_EBX[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00451bbd;
        pbVar8 = (byte *)*unaff_EBX;
        iVar5 = unaff_EBX[1];
      }
      iVar5 = iVar5 + -1;
      puVar6[4] = (uint)*pbVar8;
      iVar7 = *param_1;
      pbVar9 = pbVar8 + 1;
      *(uint *)(iVar7 + 0x18) = *puVar6;
      *(uint *)(iVar7 + 0x1c) = puVar6[2];
      *(uint *)(iVar7 + 0x20) = puVar6[3];
      *(uint *)(iVar7 + 0x24) = puVar6[4];
      *(undefined4 *)(*param_1 + 0x14) = 100;
      (**(code **)(*param_1 + 4))(param_1,1);
      puVar6 = (uint *)((int)puVar6 + 0x51);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)((int)param_1 + 0x5d));
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0x1bd) + 0x51) = 1;
  *unaff_EBX = pbVar9;
  unaff_EBX[1] = iVar5;
  return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
}


