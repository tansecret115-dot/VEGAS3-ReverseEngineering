/* Module: rmme3260.dll
   Function: FUN_66229920
   Address: 66229920
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66229920(void *this,uint *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  void *this_00;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  bool bVar12;
  byte *local_44 [3];
  undefined4 local_38;
  undefined2 local_34;
  uint local_32;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_18;
  uint local_14;
  undefined1 *local_10;
  uint local_c;
  int local_8;
  undefined1 uVar6;
  undefined1 uVar7;
  
  local_14 = *param_1;
  local_8 = 0;
  local_1c = (undefined1 *)param_3;
  local_10 = (undefined1 *)0x0;
  if (*(int *)((int)this + 0x13e) == 0) {
    return -0x7ffbfff9;
  }
  if (*(int *)((int)this + 0x10) < 0) {
    FUN_66228f00((int)this);
  }
  local_24 = (**(code **)(**(int **)((int)this + 0x142) + 0x24))();
  local_34 = (ushort)param_1[1];
  local_18 = *(void **)(*(int *)((int)this + 0x26) + (uint)local_34 * 4);
  if (local_18 == (void *)0x0) {
    return -0x7fffbffb;
  }
  uVar8 = *param_1;
  uVar9 = param_3 + 0xc;
  local_2e = (ushort)param_1[2];
  local_38._2_2_ = (undefined2)uVar9;
  local_32 = uVar8;
  local_c = uVar9;
  if ((uint)local_34 == *(uint *)((int)this + 0x74)) {
    if (*(int *)((int)this + 0x78) != 0) {
      if ((local_2e & 2) == 0) {
        local_32 = *(uint *)((int)this + 0x7c);
        local_14 = local_32;
      }
      else {
        *(uint *)((int)this + 0x7c) = uVar8;
        local_14 = uVar8;
      }
    }
    uVar8 = local_32;
    if (*(int *)((int)this + 0x15c) == 0) {
      FUN_66217fa0(local_18,&local_20,&uStack_28);
      *(uint *)((int)this + 0x15c) = local_20 >> 3;
    }
    uVar9 = local_c;
    if (*(uint *)((int)this + 0x164) != uVar8) {
      *(undefined4 *)((int)this + 0x160) = 0;
      *(uint *)((int)this + 0x164) = uVar8;
    }
    *(uint *)((int)this + 0x160) = *(int *)((int)this + 0x160) + param_3;
    local_2c = *(undefined4 *)((int)this + 0x15c);
    uStack_28 = 0;
    iVar3 = ftol();
    local_14 = local_14 + iVar3;
  }
  if (((uint)(ushort)param_1[1] == *(uint *)((int)this + 0x8c)) && (param_2 != (undefined4 *)0x0)) {
    local_14 = FUN_662647b0(param_2[2]);
    uVar9 = local_c;
  }
  uVar5 = (undefined1)(uVar8 >> 8);
  uVar6 = (undefined1)(uVar8 >> 0x10);
  uVar7 = (undefined1)(uVar8 >> 0x18);
  if (*(int *)((int)this + 0x178) == 0) {
    local_10 = operator_new(uVar9);
    if (local_10 == (undefined1 *)0x0) {
      return -0x7ff8fff2;
    }
    *local_10 = 0;
    local_10[1] = 0;
    local_10[2] = local_38._3_1_;
    local_10[3] = local_38._2_1_;
    local_10[4] = local_34._1_1_;
    local_10[5] = (undefined1)local_34;
    local_10[6] = uVar7;
    local_10[7] = uVar6;
    local_10[8] = uVar5;
    local_10[9] = (undefined1)local_32;
    local_10[10] = local_2e._1_1_;
    local_10[0xb] = (undefined1)local_2e;
    puVar10 = (undefined4 *)(local_10 + 0xc);
    for (uVar8 = param_3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *param_2;
      param_2 = param_2 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = param_3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  else {
    local_20 = uVar9;
    local_1c = operator_new(uVar9);
    *local_1c = 0;
    local_1c[1] = 0;
    local_1c[2] = local_38._3_1_;
    local_1c[3] = local_38._2_1_;
    local_1c[4] = local_34._1_1_;
    local_1c[5] = (undefined1)local_34;
    local_1c[6] = uVar7;
    local_1c[7] = uVar6;
    local_1c[8] = uVar5;
    local_1c[9] = (undefined1)local_32;
    local_1c[10] = local_2e._1_1_;
    local_1c[0xb] = (undefined1)local_2e;
    puVar10 = (undefined4 *)(local_1c + 0xc);
    for (uVar8 = param_3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *param_2;
      param_2 = param_2 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = param_3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar3 = FUN_66225e90(this,local_1c,local_20,(byte)param_1[2] & 2,&local_10,&local_c);
    local_8 = iVar3;
    if (local_1c != (undefined1 *)0x0) {
      operator_delete(local_1c);
    }
    if (iVar3 != 0) {
      return local_8;
    }
    local_1c = (undefined1 *)(local_c - 0xc);
  }
  uVar8 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(local_10,local_c);
  if (uVar8 != local_c) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x142) + 4))();
    return iVar3;
  }
  FUN_662500f0(local_44);
  uVar8 = (uint)(ushort)param_1[1];
  if (((int)uVar8 < *(int *)((int)this + 0xb4)) &&
     (this_00 = *(void **)(*(int *)((int)this + 0xb0) + uVar8 * 4),
     (int)uVar8 < *(int *)((int)this + 0x2a))) {
    piVar4 = FUN_66218240(local_18,&local_38);
    FUN_662503a0(local_44,piVar4);
    FUN_66250210(&local_38);
    if (this_00 != (void *)0x0) {
      uVar8 = 0;
      pcVar11 = s_audio_x_pn_realaudio_6626f0fc;
      do {
        bVar1 = *local_44[0];
        bVar12 = bVar1 < (byte)*pcVar11;
        if (bVar1 != *pcVar11) {
LAB_66229c8d:
          iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_66229c92;
        }
        if (bVar1 == 0) break;
        bVar1 = local_44[0][1];
        bVar12 = bVar1 < (byte)pcVar11[1];
        if (bVar1 != pcVar11[1]) goto LAB_66229c8d;
        local_44[0] = local_44[0] + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_66229c92:
      if (iVar3 == 0) {
        sVar2 = FUN_66218520((int)local_18);
        uVar8 = (uint)(sVar2 == 1);
      }
      FUN_66219e40(this_00,param_1,local_24,(int)local_1c,uVar8);
    }
    if (local_10 != (undefined1 *)0x0) {
      operator_delete(local_10);
      local_10 = (undefined1 *)0x0;
    }
    uVar8 = local_14;
    if ((*(int *)((int)this + 0x10) < *(int *)((int)this + 0x94)) &&
       (iVar3 = *(int *)(*(int *)((int)this + 0x90) + *(int *)((int)this + 0x10) * 4), iVar3 != 0))
    {
      *(int *)(iVar3 + 0x12) = *(int *)(iVar3 + 0x12) + 1;
      *(int *)(*(int *)((int)this + 0xa0) + (uint)(ushort)param_1[1] * 4) = iVar3;
      if ((uint)(ushort)param_1[1] == *(uint *)((int)this + 0x50)) {
        *(int *)(*(int *)((int)this + 0xa0) + *(int *)((int)this + 0x4c) * 4) = iVar3;
      }
      *(int *)((int)this + 0x14a) = *(int *)((int)this + 0x14a) + 1;
      FUN_66218020(local_18,local_14);
      if (*(uint *)((int)this + 0x158) < uVar8) {
        *(uint *)((int)this + 0x158) = uVar8;
      }
      if (*(uint *)((int)this + 0x14e) < local_1c) {
        *(undefined1 **)((int)this + 0x14e) = local_1c;
      }
      FUN_66250210((int *)local_44);
      return local_8;
    }
  }
  local_8 = -0x7fffbffb;
  FUN_66250210((int *)local_44);
  return local_8;
}


