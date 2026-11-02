/* Module: rmme3260.dll
   Function: FUN_66229050
   Address: 66229050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66229050(void *this,short *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined1 local_2c;
  byte *local_28 [3];
  undefined1 *local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined1 *local_c;
  int local_8;
  
  local_18 = *(uint *)(param_1 + 3);
  local_8 = 0;
  local_c = (undefined1 *)0x0;
  if (*(int *)((int)this + 0x13e) == 0) {
    return -0x7ffbfff9;
  }
  local_10 = param_3 + 0xd;
  param_1[1] = (short)local_10;
  if (*(int *)((int)this + 0x10) < 0) {
    FUN_66228f00((int)this);
  }
  local_14 = (**(code **)(**(int **)((int)this + 0x142) + 0x24))();
  FUN_662296f0(this,(int)param_1,param_3,(int *)&local_18);
  uVar6 = local_10;
  if (*(int *)((int)this + 0x178) == 0) {
    local_c = operator_new(local_10);
    *local_c = *(undefined1 *)((int)param_1 + 1);
    local_c[1] = (char)*param_1;
    if (*param_1 == 1) {
      local_c[2] = *(undefined1 *)((int)param_1 + 3);
      local_c[3] = (char)param_1[1];
      local_c[4] = *(undefined1 *)((int)param_1 + 5);
      local_c[5] = (char)param_1[2];
      local_c[6] = (char)((uint)*(undefined4 *)(param_1 + 3) >> 0x18);
      local_c[7] = (char)((uint)*(undefined4 *)(param_1 + 3) >> 0x10);
      local_c[8] = (char)((uint)*(undefined4 *)(param_1 + 3) >> 8);
      local_c[9] = (char)param_1[3];
      local_c[10] = *(undefined1 *)((int)param_1 + 0xb);
      local_c[0xb] = (char)param_1[5];
      local_c[0xc] = (char)param_1[6];
    }
    puVar8 = param_2;
    puVar10 = (undefined4 *)(local_c + 0xd);
    for (uVar6 = param_3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = param_3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  else {
    local_1c = operator_new(local_10);
    *local_1c = *(undefined1 *)((int)param_1 + 1);
    local_1c[1] = (char)*param_1;
    if (*param_1 == 1) {
      local_1c[2] = *(undefined1 *)((int)param_1 + 3);
      local_1c[3] = (char)param_1[1];
      local_1c[4] = *(undefined1 *)((int)param_1 + 5);
      local_1c[5] = (char)param_1[2];
      local_1c[6] = (char)((uint)*(undefined4 *)(param_1 + 3) >> 0x18);
      local_1c[7] = (char)((uint)*(undefined4 *)(param_1 + 3) >> 0x10);
      local_1c[8] = (char)((uint)*(undefined4 *)(param_1 + 3) >> 8);
      local_1c[9] = (char)param_1[3];
      local_1c[10] = *(undefined1 *)((int)param_1 + 0xb);
      local_1c[0xb] = (char)param_1[5];
      local_1c[0xc] = (char)param_1[6];
    }
    puVar8 = param_2;
    puVar10 = (undefined4 *)(local_1c + 0xd);
    for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar5 = FUN_66225e90(this,local_1c,uVar6,(uint)(param_1[5] == 0),&local_c,&local_10);
    local_8 = iVar5;
    if (local_1c != (undefined1 *)0x0) {
      operator_delete(local_1c);
    }
    if (iVar5 != 0) {
      return local_8;
    }
    param_1[1] = (short)local_10;
    param_3 = local_10 - 0xd;
  }
  uVar3 = local_14;
  if (*(int *)((int)this + 0xb4) <= (int)(uint)(ushort)param_1[2]) {
    return -0x7fffbffb;
  }
  pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + (uint)(ushort)param_1[2] * 4);
  if (pvVar2 != (void *)0x0) {
    FUN_66219de0(pvVar2,(int)param_1,local_14,param_3,0);
  }
  if ((((uint)(ushort)param_1[2] == *(uint *)((int)this + 0x50)) && (param_1[5] == 0)) &&
     (pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x4c) * 4),
     pvVar2 != (void *)0x0)) {
    local_38 = *(undefined4 *)param_1;
    local_30 = *(undefined4 *)(param_1 + 4);
    local_2c = (undefined1)param_1[6];
    uStack_32 = (undefined2)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
    _local_34 = CONCAT22(uStack_32,*(undefined2 *)((int)this + 0x4c));
    FUN_66219de0(pvVar2,(int)&local_38,uVar3,param_3,0);
  }
  if (((*(int *)((int)this + 0x58) != 0) &&
      ((uint)(ushort)param_1[2] == *(uint *)((int)this + 0x54))) &&
     ((param_1[5] == 0 &&
      (pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x5c) * 4),
      pvVar2 != (void *)0x0)))) {
    local_38 = *(undefined4 *)param_1;
    local_30 = *(undefined4 *)(param_1 + 4);
    local_2c = (undefined1)param_1[6];
    uStack_32 = (undefined2)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
    _local_34 = CONCAT22(uStack_32,*(undefined2 *)((int)this + 0x5c));
    FUN_66219de0(pvVar2,(int)&local_38,uVar3,param_3,0);
  }
  if (((*(int *)((int)this + 0x68) != 0) && ((uint)(ushort)param_1[2] == *(uint *)((int)this + 100))
      ) && ((param_1[5] == 0 &&
            (pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x6c) * 4),
            pvVar2 != (void *)0x0)))) {
    local_38 = *(undefined4 *)param_1;
    local_30 = *(undefined4 *)(param_1 + 4);
    local_2c = (undefined1)param_1[6];
    uStack_32 = (undefined2)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
    _local_34 = CONCAT22(uStack_32,*(undefined2 *)((int)this + 0x6c));
    FUN_66219de0(pvVar2,(int)&local_38,uVar3,param_3,0);
  }
  if (((((uint)(ushort)param_1[2] == *(uint *)((int)this + 0x54)) && (param_1[5] == 0)) &&
      (-1 < *(int *)((int)this + 0x60))) &&
     (pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x60) * 4),
     pvVar2 != (void *)0x0)) {
    local_38 = *(undefined4 *)param_1;
    local_30 = *(undefined4 *)(param_1 + 4);
    local_2c = (undefined1)param_1[6];
    uStack_32 = (undefined2)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
    _local_34 = CONCAT22(uStack_32,*(undefined2 *)((int)this + 0x60));
    FUN_66219de0(pvVar2,(int)&local_38,uVar3,param_3,0);
  }
  if (*(int *)((int)this + 0x2a) <= (int)(uint)(ushort)param_1[2]) {
    return -0x7fffbffb;
  }
  local_1c = *(undefined1 **)(*(int *)((int)this + 0x26) + (uint)(ushort)param_1[2] * 4);
  if (local_1c == (void *)0x0) {
    return -0x7fffbffb;
  }
  if (local_c == (undefined1 *)0x0) {
    return -0x7ff8fff2;
  }
  FUN_66218240(local_1c,local_28);
  pcVar11 = s_application_x_pn_multirate_image_6626f818;
  pbVar9 = local_28[0];
  do {
    bVar1 = *pbVar9;
    bVar12 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_66229469:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_6622946e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar12 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_66229469;
    pbVar9 = pbVar9 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_6622946e:
  if ((iVar5 == 0) && (param_2 != (undefined4 *)0x0)) {
    local_18 = FUN_662647b0(param_2[2]);
  }
  else {
    pcVar11 = s_audio_x_pn_multirate_realaudio_6626f7a4;
    do {
      bVar1 = *local_28[0];
      bVar12 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_6622962f:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_66229634;
      }
      if (bVar1 == 0) break;
      bVar1 = local_28[0][1];
      bVar12 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_6622962f;
      local_28[0] = local_28[0] + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_66229634:
    if (iVar5 == 0) {
      pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + (uint)(ushort)param_1[2] * 4);
      sVar4 = FUN_66218520((int)local_1c);
      if ((sVar4 == 1) && (param_1[5] != 0)) {
        if (pvVar2 != (void *)0x0) {
          FUN_66219de0(pvVar2,(int)param_1,local_14,param_3,1);
        }
        if (((*(int *)((int)this + 0x68) != 0) &&
            ((uint)(ushort)param_1[2] == *(uint *)((int)this + 100))) &&
           (pvVar2 = *(void **)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x6c) * 4),
           pvVar2 != (void *)0x0)) {
          local_38 = *(undefined4 *)param_1;
          local_30 = *(undefined4 *)(param_1 + 4);
          local_2c = (undefined1)param_1[6];
          uStack_32 = (undefined2)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
          _local_34 = CONCAT22(uStack_32,*(undefined2 *)((int)this + 0x6c));
          FUN_66219de0(pvVar2,(int)&local_38,local_14,param_3,0);
        }
      }
    }
  }
  if (*(uint *)((int)this + 0x168) < local_18) {
    FUN_66218020(local_1c,local_18);
    *(uint *)((int)this + 0x168) = local_18;
  }
  uVar6 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(local_c,local_10);
  if (uVar6 != local_10) {
    local_8 = (**(code **)(**(int **)((int)this + 0x142) + 4))();
    FUN_66250210((int *)local_28);
    return local_8;
  }
  if (local_c != (undefined1 *)0x0) {
    operator_delete(local_c);
    local_c = (undefined1 *)0x0;
  }
  if ((*(int *)((int)this + 0x10) < *(int *)((int)this + 0x94)) &&
     (iVar5 = *(int *)(*(int *)((int)this + 0x90) + *(int *)((int)this + 0x10) * 4), iVar5 != 0)) {
    *(int *)(iVar5 + 0x12) = *(int *)(iVar5 + 0x12) + 1;
    *(int *)(*(int *)((int)this + 0xa0) + (uint)(ushort)param_1[2] * 4) = iVar5;
    if ((uint)(ushort)param_1[2] == *(uint *)((int)this + 0x50)) {
      *(int *)(*(int *)((int)this + 0xa0) + *(int *)((int)this + 0x4c) * 4) = iVar5;
    }
    if ((*(int *)((int)this + 0x68) != 0) &&
       ((uint)(ushort)param_1[2] == *(uint *)((int)this + 100))) {
      *(int *)(*(int *)((int)this + 0xa0) + *(int *)((int)this + 0x6c) * 4) = iVar5;
    }
    if ((uint)(ushort)param_1[2] == *(uint *)((int)this + 0x54)) {
      if (*(int *)((int)this + 0x58) != 0) {
        *(int *)(*(int *)((int)this + 0xa0) + *(int *)((int)this + 0x5c) * 4) = iVar5;
      }
      if (-1 < *(int *)((int)this + 0x60)) {
        *(int *)(*(int *)((int)this + 0xa0) + *(int *)((int)this + 0x60) * 4) = iVar5;
      }
    }
    *(int *)((int)this + 0x14a) = *(int *)((int)this + 0x14a) + 1;
    if (*(uint *)((int)this + 0x14e) < param_3) {
      *(uint *)((int)this + 0x14e) = param_3;
    }
    FUN_66250210((int *)local_28);
    return local_8;
  }
  local_8 = -0x7fffbffb;
  FUN_66250210((int *)local_28);
  return local_8;
}


