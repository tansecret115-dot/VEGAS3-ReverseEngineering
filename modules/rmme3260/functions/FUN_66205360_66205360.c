/* Module: rmme3260.dll
   Function: FUN_66205360
   Address: 66205360
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66205360(void *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined2 extraout_var;
  void *pvVar10;
  char *pcVar11;
  int local_1f4 [3];
  int local_1e8 [3];
  int local_1dc [3];
  int local_1d0 [3];
  int local_1c4 [3];
  int local_1b8 [3];
  int local_1ac [3];
  int local_1a0 [3];
  int local_194 [3];
  int local_188 [3];
  int local_17c [3];
  int local_170 [3];
  int local_164 [3];
  int local_158 [3];
  int local_14c [3];
  int local_140 [3];
  int local_134 [3];
  int local_128 [3];
  int local_11c [3];
  char *local_110 [3];
  int local_104 [3];
  char *local_f8 [3];
  char *local_ec [3];
  char *local_e0 [3];
  char *local_d4 [3];
  int local_c8 [3];
  int local_bc [3];
  char *local_b0 [3];
  int local_a4;
  char *local_a0 [3];
  int local_94 [3];
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_78 [3];
  int local_6c;
  undefined4 local_68;
  char *local_64 [3];
  int local_58 [3];
  int local_4c;
  undefined4 local_48;
  char *local_44 [3];
  byte *local_38;
  byte *local_34;
  int local_30 [3];
  char *local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  
  FUN_66250280(local_f8,s____Bandwidth_<__lu),_6626f44c);
  FUN_66250280(local_ec,s____Bandwidth_>___lu_______Bandwi_6626f420);
  FUN_66250280(local_e0,s____Bandwidth_>___lu___6626f408);
  FUN_66250280(local_64,s_AverageBandwidth__lu_Priority__l_6626f3e4);
  FUN_66250280(local_1f4,s_OnDepend___lu__6626f394);
  FUN_66250280(local_1dc,s_OffDepend___lu__6626f384);
  FUN_66250280(local_a0,s_OnDepend___lu___OffDepend___lu__6626f364);
  FUN_662500f0(local_58);
  FUN_662500f0(local_30);
  FUN_662500f0(local_78);
  FUN_662500f0(local_44);
  FUN_662500f0(local_24);
  FUN_66250280(local_1c4,s_____Bandwidth_>___lu_______OldPN_6626f338);
  FUN_66250280(local_bc,s____OldPNMPlayer__6626f324);
  FUN_66250280(local_110,s_AverageBandwidth__lu_priority_9__6626f2f0);
  FUN_66250280(local_104,s_AverageBandwidth_0_priority_5_PN_6626f2bc);
  FUN_662500f0(local_1ac);
  FUN_662500f0(local_c8);
  FUN_662500f0(local_d4);
  FUN_662500f0(local_b0);
  local_84 = *(int *)((int)param_1 + 0x28);
  local_6c = *(int *)((int)param_1 + 0x14);
  local_a4 = *(int *)((int)param_1 + 0x18);
  sVar3 = 0;
  local_8 = 0;
  local_48 = 0;
  local_4c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_1 == (void *)0xfffffff0) {
    sVar4 = 0;
  }
  else {
    sVar4 = (short)*(undefined4 *)((int)param_1 + 0x20);
  }
  if (param_1 != (void *)0xffffffdc) {
    sVar3 = (short)*(undefined4 *)((int)param_1 + 0x34);
  }
  iVar6 = FUN_66203bc0(param_1,(sVar4 + sVar3) * 6);
  iVar1 = local_80;
  if (iVar6 < 0) goto LAB_66205e77;
  if (param_1 == (void *)0xffffffdc) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((int)param_1 + 0x34);
  }
  iVar2 = local_6c;
  if (0 < iVar7) {
    if (local_84 == 0) {
      local_c = (void *)0x0;
    }
    else {
      piVar8 = (int *)FUN_66250c10(local_84);
      local_c = (void *)*piVar8;
    }
    iVar1 = local_80;
    iVar2 = local_6c;
    if (local_c != (void *)0x0) {
      sVar3 = FUN_662182a0((int)local_c);
      FUN_66217fa0(local_c,(undefined4 *)0x0,&local_8);
      local_18 = local_6c;
      do {
        if (local_18 == 0) goto LAB_6620554e;
        piVar8 = (int *)FUN_66250bf0(&local_18);
        sVar4 = FUN_662182a0(*piVar8);
      } while (sVar3 != sVar4);
      local_14 = 1;
      local_10 = local_8;
LAB_6620554e:
      iVar1 = local_80;
      iVar2 = local_6c;
      if (local_14 == 0) {
        local_34 = (byte *)0x0;
        local_38 = (byte *)0x0;
        local_68 = 0;
        iVar6 = FUN_66206470(local_c,&local_34,&local_38,&local_68);
        iVar1 = local_80;
        if ((iVar6 < 0) ||
           (piVar8 = FUN_6621b920(local_34,(int)local_38), iVar1 = local_80, piVar8 == (int *)0x0))
        {
LAB_66205e77:
          local_80 = iVar1;
          FUN_66250210((int *)local_b0);
          FUN_66250210((int *)local_d4);
          FUN_66250210(local_c8);
          FUN_66250210(local_1ac);
          FUN_66250210(local_104);
          FUN_66250210((int *)local_110);
          FUN_66250210(local_bc);
          FUN_66250210(local_1c4);
          FUN_66250210((int *)local_24);
          FUN_66250210((int *)local_44);
          FUN_66250210(local_78);
          FUN_66250210(local_30);
          FUN_66250210(local_58);
          FUN_66250210((int *)local_a0);
          FUN_66250210(local_1dc);
          FUN_66250210(local_1f4);
          FUN_66250210((int *)local_64);
          FUN_66250210((int *)local_e0);
          FUN_66250210((int *)local_ec);
          FUN_66250210((int *)local_f8);
          return iVar6;
        }
        local_7c = (**(code **)(*piVar8 + 0x38))();
        FUN_662508c0(local_c8,local_110[0]);
        piVar8 = local_c8;
        puVar9 = FUN_662504f0(local_94,local_bc,&DAT_6626f254);
        piVar8 = FUN_662504a0(&local_88,puVar9,piVar8);
        FUN_662503a0(local_d4,piVar8);
        FUN_66250210(&local_88);
        FUN_66250210(local_94);
        iVar6 = FUN_662039e0(param_1,local_d4[0],sVar3,2,1);
        iVar1 = local_80;
        if (iVar6 < 0) goto LAB_66205e77;
        iVar2 = local_6c;
        if ((short)local_7c != 1) {
          piVar8 = local_104;
          puVar9 = FUN_662504f0(&local_88,local_bc,&DAT_6626f254);
          piVar8 = FUN_662504a0(local_94,puVar9,piVar8);
          FUN_662503a0(local_b0,piVar8);
          FUN_66250210(local_94);
          FUN_66250210(&local_88);
          FUN_662508c0(local_78,local_a0[0]);
          puVar9 = FUN_66250550(local_94,&DAT_6626f254,local_78);
          FUN_66250680(local_b0,puVar9);
          FUN_66250210(local_94);
          iVar6 = FUN_662039e0(param_1,local_b0[0],sVar3,0,1);
          iVar2 = local_6c;
          goto joined_r0x66205e63;
        }
      }
    }
  }
joined_r0x66205700:
  do {
    local_80 = iVar2;
    local_18 = local_80;
    if (local_80 == 0) goto LAB_66205e77;
    puVar9 = (undefined4 *)FUN_66250bf0(&local_18);
    pvVar10 = (void *)*puVar9;
    iVar1 = local_80;
    iVar2 = local_18;
  } while (pvVar10 == (void *)0x0);
  uVar5 = FUN_662182a0((int)pvVar10);
  local_c = (void *)CONCAT22(extraout_var,uVar5);
  iVar6 = FUN_66217fa0(pvVar10,(undefined4 *)0x0,&local_8);
  iVar1 = local_80;
  if (iVar6 < 0) goto LAB_66205e77;
  local_38 = (byte *)0x0;
  local_34 = (byte *)0x0;
  local_68 = 0;
  iVar6 = FUN_66206470(pvVar10,&local_38,&local_34,&local_68);
  iVar1 = local_80;
  if ((iVar6 < 0) ||
     (piVar8 = FUN_6621b920(local_38,(int)local_34), iVar1 = local_80, piVar8 == (int *)0x0))
  goto LAB_66205e77;
  local_7c = (**(code **)(*piVar8 + 0x38))();
  sVar3 = (short)local_7c;
  *(short *)((int)param_1 + 0x8a) = sVar3;
  if (local_6c == local_80) {
    if (param_1 == (void *)0xfffffff0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)param_1 + 0x20);
    }
    if (iVar6 == 1) {
      FUN_662508c0(local_44,local_64[0]);
      iVar7 = local_14;
      if ((local_14 == 1) && (local_8 == local_10)) {
        FUN_66250640(local_44,s__PNMKeyframeRule_T_6626f240);
      }
      iVar6 = FUN_662039e0(param_1,local_44[0],(short)local_c,2,0);
      iVar1 = local_80;
      if (iVar6 < 0) goto LAB_66205e77;
      iVar2 = local_18;
      if ((short)local_7c == 1) goto joined_r0x66205700;
      FUN_662508c0(local_24,local_64[0]);
      FUN_662508c0(local_78,local_a0[0]);
      puVar9 = FUN_66250550(local_94,&DAT_6626f254,local_78);
      FUN_66250680(local_24,puVar9);
      FUN_66250210(local_94);
      if ((iVar7 == 1) && (local_8 == local_10)) {
        FUN_66250640(local_24,s__PNMNonKeyframeRule_T_6626f228);
      }
      uVar5 = 0;
      pcVar11 = local_24[0];
      pvVar10 = local_c;
    }
    else {
      local_4c = local_18;
      puVar9 = (undefined4 *)FUN_66250bf0(&local_4c);
      if ((void *)*puVar9 == (void *)0x0) {
LAB_66205e72:
        iVar6 = -0x7fffbffb;
        iVar1 = local_80;
        goto LAB_66205e77;
      }
      iVar6 = FUN_66217fa0((void *)*puVar9,(undefined4 *)0x0,&local_48);
      iVar1 = local_80;
      if (iVar6 < 0) goto LAB_66205e77;
      FUN_662508c0(local_58,local_f8[0]);
      if (sVar3 == 1) {
        FUN_662508c0(local_30,local_64[0]);
        piVar8 = FUN_662504a0(local_1d0,local_58,local_30);
        FUN_662503a0(local_44,piVar8);
        FUN_66250210(local_1d0);
        if ((local_14 == 1) && (local_8 == local_10)) {
          FUN_66250640(local_44,s__PNMKeyframeRule_T_6626f240);
        }
        uVar5 = 2;
        pcVar11 = local_44[0];
        pvVar10 = local_c;
      }
      else {
        FUN_662508c0(local_30,local_64[0]);
        piVar8 = FUN_662504a0(local_1e8,local_58,local_30);
        FUN_662503a0(local_44,piVar8);
        FUN_66250210(local_1e8);
        FUN_662508c0(local_30,local_64[0]);
        FUN_662508c0(local_78,local_a0[0]);
        piVar8 = local_78;
        pcVar11 = &DAT_6626f254;
        puVar9 = FUN_662504a0(local_158,local_58,local_30);
        puVar9 = FUN_662504f0(local_1a0,puVar9,pcVar11);
        piVar8 = FUN_662504a0(local_140,puVar9,piVar8);
        FUN_662503a0(local_24,piVar8);
        FUN_66250210(local_140);
        FUN_66250210(local_1a0);
        FUN_66250210(local_158);
        if ((local_14 == 1) && (local_8 == local_10)) {
          FUN_66250640(local_44,s__PNMKeyframeRule_T_6626f240);
        }
        pvVar10 = local_c;
        iVar6 = FUN_662039e0(param_1,local_44[0],(short)local_c,2,0);
        iVar1 = local_80;
        if (iVar6 < 0) goto LAB_66205e77;
        if ((local_14 == 1) && (local_8 == local_10)) {
          FUN_66250640(local_24,s__PNMNonKeyframeRule_T_6626f228);
        }
        uVar5 = 0;
        pcVar11 = local_24[0];
      }
    }
  }
  else {
    if (local_a4 != local_80) {
      local_4c = local_18;
      puVar9 = (undefined4 *)FUN_66250bf0(&local_4c);
      if ((void *)*puVar9 == (void *)0x0) goto LAB_66205e72;
      iVar6 = FUN_66217fa0((void *)*puVar9,(undefined4 *)0x0,&local_48);
      iVar1 = local_80;
      if (iVar6 < 0) goto LAB_66205e77;
      FUN_662508c0(local_58,local_ec[0]);
      if (sVar3 == 1) {
        FUN_662508c0(local_30,local_64[0]);
        piVar8 = FUN_662504a0(local_134,local_58,local_30);
        FUN_662503a0(local_24,piVar8);
        FUN_66250210(local_134);
        if ((local_14 == 1) && (local_8 == local_10)) {
          FUN_66250640(local_24,s__PNMKeyframeRule_T_6626f240);
        }
        uVar5 = 2;
        pcVar11 = local_24[0];
        pvVar10 = local_c;
        goto LAB_66205d11;
      }
      FUN_662508c0(local_30,local_64[0]);
      piVar8 = FUN_662504a0(local_14c,local_58,local_30);
      FUN_662503a0(local_44,piVar8);
      FUN_66250210(local_14c);
      iVar7 = local_14;
      if ((local_14 == 1) && (local_8 == local_10)) {
        FUN_66250640(local_44,s__PNMKeyframeRule_T_6626f240);
      }
      iVar6 = FUN_662039e0(param_1,local_44[0],(short)local_c,2,0);
      iVar1 = local_80;
      if (iVar6 < 0) goto LAB_66205e77;
      FUN_662508c0(local_30,local_64[0]);
      FUN_662508c0(local_78,local_a0[0]);
      piVar8 = local_78;
      pcVar11 = &DAT_6626f254;
      puVar9 = FUN_662504a0(local_194,local_58,local_30);
      puVar9 = FUN_662504f0(local_17c,puVar9,pcVar11);
      piVar8 = FUN_662504a0(local_164,puVar9,piVar8);
      FUN_662503a0(local_24,piVar8);
      FUN_66250210(local_164);
      FUN_66250210(local_17c);
      FUN_66250210(local_194);
      if ((iVar7 == 1) && (local_8 == local_10)) {
        FUN_66250640(local_24,s__PNMNonKeyframeRule_T_6626f228);
      }
      iVar6 = FUN_662039e0(param_1,local_24[0],(short)local_c,0,0);
      iVar2 = local_18;
      goto joined_r0x66205e63;
    }
    FUN_662508c0(local_58,local_e0[0]);
    if (sVar3 != 1) {
      FUN_662508c0(local_30,local_64[0]);
      piVar8 = FUN_662504a0(local_170,local_58,local_30);
      FUN_662503a0(local_44,piVar8);
      FUN_66250210(local_170);
      iVar7 = local_14;
      if ((local_14 == 1) && (local_8 == local_10)) {
        FUN_66250640(local_44,s__PNMKeyframeRule_T_6626f240);
      }
      iVar6 = FUN_662039e0(param_1,local_44[0],(short)local_c,2,0);
      iVar1 = local_80;
      if (-1 < iVar6) {
        FUN_662508c0(local_30,local_64[0]);
        FUN_662508c0(local_78,local_a0[0]);
        piVar8 = local_78;
        pcVar11 = &DAT_6626f254;
        puVar9 = FUN_662504a0(local_128,local_58,local_30);
        puVar9 = FUN_662504f0(local_188,puVar9,pcVar11);
        piVar8 = FUN_662504a0(local_1b8,puVar9,piVar8);
        FUN_662503a0(local_24,piVar8);
        FUN_66250210(local_1b8);
        FUN_66250210(local_188);
        FUN_66250210(local_128);
        if ((iVar7 == 1) && (local_8 == local_10)) {
          FUN_66250640(local_24,s__PNMNonKeyframeRule_T_6626f228);
        }
        uVar5 = 0;
        pcVar11 = local_24[0];
        pvVar10 = local_c;
        goto LAB_66205d11;
      }
      goto LAB_66205e77;
    }
    FUN_662508c0(local_30,local_64[0]);
    piVar8 = FUN_662504a0(local_11c,local_58,local_30);
    FUN_662503a0(local_24,piVar8);
    FUN_66250210(local_11c);
    if ((local_14 == 1) && (local_8 == local_10)) {
      FUN_66250640(local_24,s__PNMKeyframeRule_T_6626f240);
    }
    uVar5 = 2;
    pcVar11 = local_24[0];
    pvVar10 = local_c;
  }
LAB_66205d11:
  iVar6 = FUN_662039e0(param_1,pcVar11,(short)pvVar10,uVar5,0);
  iVar2 = local_18;
joined_r0x66205e63:
  iVar1 = local_80;
  if (iVar6 < 0) goto LAB_66205e77;
  goto joined_r0x66205700;
}


