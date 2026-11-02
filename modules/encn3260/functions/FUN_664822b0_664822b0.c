/* Module: encn3260.dll
   Function: FUN_664822b0
   Address: 664822b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664822b0(int *param_1,int *param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined1 local_1b;
  undefined1 local_17;
  undefined1 uStack_16;
  undefined1 local_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 local_12;
  undefined1 uStack_11;
  
  piVar4 = param_3;
  if (param_2 != (int *)0x0) {
    FUN_66483190(param_1,param_2,s_Unable_to_process_packet_664e2170);
    return 0;
  }
  iVar8 = (**(code **)(*param_3 + 0x24))(param_3);
  piVar3 = param_1;
  if (iVar8 != 0) {
    *(short *)((int)param_1 + 0x9e) = *(short *)((int)param_1 + 0x9e) + 1;
    if (*(ushort *)((int)param_1 + 0x9e) < 0xff00) {
      return 0;
    }
    *(undefined2 *)((int)param_1 + 0x9e) = 0;
    return 0;
  }
  if (*(int *)((int)param_1 + 0x8e) == 0) {
    uVar9 = (**(code **)(*piVar4 + 0x14))(piVar4);
    if (((*(uint *)((int)piVar3 + 0x76) <= uVar9) ||
        (iVar8 = (**(code **)(*piVar4 + 0x14))(piVar4),
        (uint)(*(int *)((int)piVar3 + 0x76) - iVar8) < 0x10000)) &&
       (iVar8 = (**(code **)(*piVar4 + 0x14))(piVar4),
       0xfffe < (uint)(iVar8 - *(int *)((int)piVar3 + 0x76)))) goto LAB_66482363;
    if (*(int *)((int)piVar3 + 0x8e) != 0) goto LAB_66482354;
  }
  else {
LAB_66482354:
    *(undefined4 *)((int)piVar3 + 0x8e) = 0;
  }
  uVar10 = (**(code **)(*piVar4 + 0x14))(piVar4);
  *(undefined4 *)((int)piVar3 + 0x76) = uVar10;
LAB_66482363:
  uVar9 = (**(code **)(*piVar4 + 0x18))(piVar4);
  psVar1 = (short *)(piVar3[0x11] + (uVar9 & 0xffff) * 4);
  param_3 = operator_new(0x20);
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    *param_3 = (int)&PTR_FUN_664dc580;
    param_3[6] = 0;
    param_3[7] = 0;
    *(undefined2 *)(param_3 + 1) = 0;
    *(undefined2 *)((int)param_3 + 6) = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
  }
  (**(code **)*param_3)(param_3);
  if (*(int *)((int)piVar3 + 0x96) == 0) {
    piVar11 = (int *)(**(code **)(*piVar4 + 0x10))(piVar4);
    uVar5 = (**(code **)(*piVar4 + 0x1c))(piVar4);
    uVar6 = (**(code **)(*piVar4 + 0x20))(piVar4);
    local_12 = (undefined1)uVar6;
    uStack_11 = (undefined1)((ushort)uVar6 >> 8);
    uVar9 = (**(code **)(*piVar11 + 0x18))(piVar11);
    puVar12 = (undefined4 *)(**(code **)(*piVar11 + 0x1c))(piVar11);
    uVar6 = (**(code **)(*piVar4 + 0x18))(piVar4);
    sVar2 = *psVar1;
    *psVar1 = sVar2 + 1;
    uVar10 = (**(code **)(*piVar4 + 0x14))(piVar4);
    (**(code **)(*piVar11 + 8))(piVar11);
    puVar13 = operator_new(uVar9 + 0xc);
    *puVar13 = 0;
    puVar13[1] = (char)((uint)uVar10 >> 0x18);
    puVar13[2] = (char)((uint)uVar10 >> 0x10);
    local_1b = (undefined1)uVar10;
    puVar13[3] = (char)((uint)uVar10 >> 8);
    uStack_16 = (undefined1)((ushort)sVar2 >> 8);
    puVar13[4] = local_1b;
    local_17 = (undefined1)sVar2;
    puVar13[5] = uStack_16;
    uStack_14 = (undefined1)((ushort)uVar6 >> 8);
    puVar13[6] = local_17;
    local_15 = (undefined1)uVar6;
    puVar13[7] = uStack_14;
    puVar13[8] = local_15;
    puVar13[9] = uVar5;
    puVar13[10] = uStack_11;
    puVar13[0xb] = local_12;
    puVar15 = (undefined4 *)(puVar13 + 0xc);
    for (uVar14 = uVar9 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar14 = uVar9 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    param_1 = (int *)0x0;
    iVar8 = (**(code **)(*(int *)piVar3[0xf] + 0xc))((int *)piVar3[0xf],&DAT_664dcf70,&param_1);
    if (iVar8 != 0) {
      return 0x80004005;
    }
    param_2 = (int *)0x0;
    iVar8 = (**(code **)(*(int *)piVar3[0xf] + 0xc))((int *)piVar3[0xf],&DAT_664dcf60,&param_2);
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 8))(param_1);
      return 0x80004005;
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,puVar13,(undefined1 *)((int)(puVar13 + 0xc) + (uVar9 - (int)puVar13)));
    (**(code **)(*param_1 + 0x2c))(param_1,param_2,*(undefined4 *)((int)piVar3 + 0x76),0,0,0);
    piVar4 = param_3;
    (**(code **)(*param_3 + 8))(param_1);
    (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*param_2 + 8))(param_2);
    piVar4[2] = 9;
    *(undefined2 *)(piVar4 + 1) = *(undefined2 *)((int)piVar3 + 0x9e);
    *(short *)((int)piVar3 + 0x9e) = *(short *)((int)piVar3 + 0x9e) + 1;
    if (0xfeff < *(ushort *)((int)piVar3 + 0x9e)) {
      *(undefined2 *)((int)piVar3 + 0x9e) = 0;
    }
    *(short *)((int)piVar4 + 6) = (short)piVar3[0x28];
    piVar3 = (int *)piVar3[9];
  }
  else {
    piVar11 = (int *)(**(code **)(*piVar4 + 0x10))(piVar4);
    uVar5 = (**(code **)(*piVar4 + 0x1c))(piVar4);
    uVar6 = (**(code **)(*piVar4 + 0x20))(piVar4);
    uVar9 = (**(code **)(*piVar11 + 0x18))(piVar11);
    puVar12 = (undefined4 *)(**(code **)(*piVar11 + 0x1c))(piVar11);
    uVar7 = (**(code **)(*piVar4 + 0x18))(piVar4);
    uVar10 = (**(code **)(*piVar4 + 0x14))(piVar4);
    (**(code **)(*piVar11 + 8))(piVar11);
    puVar13 = operator_new(uVar9 + 10);
    *puVar13 = 0;
    puVar13[1] = (char)((uint)uVar10 >> 0x18);
    puVar13[2] = (char)((uint)uVar10 >> 0x10);
    local_1b = (undefined1)uVar10;
    puVar13[3] = (char)((uint)uVar10 >> 8);
    uStack_16 = (undefined1)((ushort)uVar7 >> 8);
    puVar13[4] = local_1b;
    local_17 = (undefined1)uVar7;
    puVar13[5] = uStack_16;
    puVar13[6] = local_17;
    uStack_13 = (undefined1)((ushort)uVar6 >> 8);
    puVar13[7] = uVar5;
    uStack_14 = (undefined1)uVar6;
    puVar13[8] = uStack_13;
    puVar13[9] = uStack_14;
    puVar15 = (undefined4 *)(puVar13 + 10);
    for (uVar14 = uVar9 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar14 = uVar9 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    param_1 = (int *)0x0;
    iVar8 = (**(code **)(*(int *)piVar3[0xf] + 0xc))((int *)piVar3[0xf],&DAT_664dcf70,&param_1);
    if (iVar8 != 0) {
      return 0x80004005;
    }
    param_2 = (int *)0x0;
    iVar8 = (**(code **)(*(int *)piVar3[0xf] + 0xc))((int *)piVar3[0xf],&DAT_664dcf60,&param_2);
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 8))(param_1);
      return 0x80004005;
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,puVar13,(undefined1 *)((int)(puVar13 + 10) + (uVar9 - (int)puVar13)));
    (**(code **)(*param_1 + 0x2c))(param_1,param_2,*(undefined4 *)((int)piVar3 + 0x76),0,0,0);
    piVar4 = param_3;
    (**(code **)(*param_3 + 8))(param_1);
    (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*param_2 + 8))(param_2);
    piVar4[2] = 10;
    *(undefined2 *)(piVar4 + 1) = *(undefined2 *)((int)piVar3 + 0x9e);
    *(short *)((int)piVar3 + 0x9e) = *(short *)((int)piVar3 + 0x9e) + 1;
    if (0xfeff < *(ushort *)((int)piVar3 + 0x9e)) {
      *(undefined2 *)((int)piVar3 + 0x9e) = 0;
    }
    *(short *)(piVar3 + 0x28) = (short)piVar3[0x28] + 1;
    *(short *)((int)piVar4 + 6) = (short)piVar3[0x28];
    piVar3 = (int *)piVar3[9];
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x44))(piVar3,piVar4);
  }
  (**(code **)(*piVar4 + 4))(piVar4);
  operator_delete(puVar13);
  return 0;
}


