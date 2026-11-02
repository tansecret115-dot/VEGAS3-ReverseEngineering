/* Module: rmme3260.dll
   Function: FUN_66204670
   Address: 66204670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66204670(void *param_1)

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
  int local_214 [3];
  int local_208 [3];
  int local_1fc [3];
  int local_1f0 [3];
  int local_1e4 [3];
  int local_1d8 [3];
  int local_1cc [3];
  int local_1c0 [3];
  int local_1b4 [3];
  int local_1a8 [3];
  int local_19c [3];
  int local_190 [3];
  int local_184 [3];
  int local_178 [3];
  int local_16c [3];
  int local_160 [3];
  int local_154 [3];
  int local_148 [3];
  int local_13c [3];
  int local_130 [3];
  char *local_124 [3];
  char *local_118 [3];
  char *local_10c [3];
  int local_100 [3];
  char *local_f4 [3];
  char *local_e8 [3];
  char *local_dc [3];
  char *local_d0 [3];
  char *local_c4 [3];
  char *local_b8 [3];
  int local_ac [3];
  char *local_a0 [3];
  int local_94 [3];
  int local_88;
  char *local_84 [3];
  int local_78;
  int local_74;
  int local_70;
  char *local_6c [3];
  int local_60 [3];
  int local_54;
  char *local_50 [3];
  int local_44 [3];
  char *local_38 [3];
  int local_2c;
  undefined4 local_28;
  int local_24 [3];
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_66250280(local_214,s____Bandwidth_<__lu),_6626f44c);
  FUN_66250280(local_c4,s____Bandwidth_>___lu_______Bandwi_6626f420);
  FUN_66250280(local_b8,s____Bandwidth_>___lu___6626f408);
  FUN_66250280(local_6c,s_AverageBandwidth__lu_Priority__l_6626f3e4);
  FUN_66250280(local_f4,s____Bandwidth_<__lu),TimestampDel_6626f3a4);
  FUN_66250280(local_a0,s_OnDepend___lu__6626f394);
  FUN_66250280(local_1fc,s_OffDepend___lu__6626f384);
  FUN_66250280(local_1e4,s_OnDepend___lu___OffDepend___lu__6626f364);
  FUN_662500f0(local_44);
  FUN_662500f0(local_24);
  FUN_662500f0(local_60);
  FUN_662500f0(local_50);
  FUN_662500f0(local_38);
  FUN_662500f0(local_84);
  FUN_66250280(local_118,s_____Bandwidth_>___lu_______OldPN_6626f338);
  FUN_66250280(local_1cc,s____OldPNMPlayer__6626f324);
  FUN_66250280(local_124,s_AverageBandwidth__lu_priority_9__6626f2f0);
  FUN_66250280(local_130,s_AverageBandwidth_0_priority_5_PN_6626f2bc);
  FUN_66250280(local_10c,s_____Bandwidth_<__lu)_&&_(_OldPNM_6626f258);
  FUN_662500f0(local_ac);
  FUN_662500f0(local_100);
  FUN_662500f0(local_e8);
  FUN_662500f0(local_dc);
  FUN_662500f0(local_d0);
  local_74 = *(int *)((int)param_1 + 0x28);
  local_54 = *(int *)((int)param_1 + 0x14);
  local_88 = *(int *)((int)param_1 + 0x18);
  sVar3 = 0;
  local_8 = 0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 0;
  local_c = 0;
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
  iVar1 = local_70;
  if (iVar6 < 0) goto LAB_662050e5;
  if (param_1 == (void *)0xffffffdc) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((int)param_1 + 0x34);
  }
  iVar2 = local_54;
  if (0 < iVar7) {
    if (local_74 == 0) {
      local_14 = (void *)0x0;
    }
    else {
      piVar8 = (int *)FUN_66250c10(local_74);
      local_14 = (void *)*piVar8;
    }
    iVar1 = local_70;
    iVar2 = local_54;
    if (local_14 != (void *)0x0) {
      sVar3 = FUN_662182a0((int)local_14);
      iVar6 = FUN_66217fa0(local_14,(undefined4 *)0x0,&local_8);
      iVar1 = local_70;
      iVar7 = local_54;
      if (iVar6 < 0) goto LAB_662050e5;
      do {
        local_18 = iVar7;
        if (local_18 == 0) goto LAB_6620489b;
        piVar8 = (int *)FUN_66250bf0(&local_18);
        sVar4 = FUN_662182a0(*piVar8);
        iVar7 = local_18;
      } while (sVar3 != sVar4);
      local_c = 1;
      local_10 = local_8;
LAB_6620489b:
      iVar1 = local_70;
      iVar2 = local_54;
      if (local_c == 0) {
        FUN_662508c0(local_ac,local_118[0]);
        FUN_662508c0(local_100,local_124[0]);
        piVar8 = local_100;
        puVar9 = FUN_662504f0(local_94,local_ac,&DAT_6626f254);
        piVar8 = FUN_662504a0(&local_78,puVar9,piVar8);
        FUN_662503a0(local_e8,piVar8);
        FUN_66250210(&local_78);
        FUN_66250210(local_94);
        iVar6 = FUN_662039e0(param_1,local_e8[0],sVar3,2,1);
        iVar1 = local_70;
        if (-1 < iVar6) {
          piVar8 = local_130;
          puVar9 = FUN_662504f0(&local_78,local_ac,&DAT_6626f254);
          piVar8 = FUN_662504a0(local_94,puVar9,piVar8);
          FUN_662503a0(local_dc,piVar8);
          FUN_66250210(local_94);
          FUN_66250210(&local_78);
          iVar6 = FUN_662039e0(param_1,local_dc[0],sVar3,0,1);
          iVar1 = local_70;
          if (-1 < iVar6) {
            FUN_662508c0(local_d0,local_10c[0]);
            iVar6 = FUN_662039e0(param_1,local_d0[0],sVar3,0,1);
            iVar2 = local_54;
            goto joined_r0x662049e1;
          }
        }
        goto LAB_662050e5;
      }
    }
  }
  do {
    while( true ) {
      do {
        local_70 = iVar2;
        local_18 = local_70;
        if (local_70 == 0) goto LAB_662050e5;
        puVar9 = (undefined4 *)FUN_66250bf0(&local_18);
        pvVar10 = (void *)*puVar9;
        iVar1 = local_70;
        iVar2 = local_18;
      } while (pvVar10 == (void *)0x0);
      uVar5 = FUN_662182a0((int)pvVar10);
      local_14 = (void *)CONCAT22(extraout_var,uVar5);
      iVar6 = FUN_66217fa0(pvVar10,(undefined4 *)0x0,&local_8);
      iVar1 = local_70;
      if (iVar6 < 0) goto LAB_662050e5;
      if (local_54 != local_70) break;
      if (param_1 == (void *)0xfffffff0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)param_1 + 0x20);
      }
      if (iVar6 == 1) {
        FUN_662508c0(local_44,local_b8[0]);
        FUN_662508c0(local_24,local_6c[0]);
        piVar8 = FUN_662504a0(local_94,local_44,local_24);
        FUN_662503a0(local_50,piVar8);
        FUN_66250210(local_94);
        if ((local_c == 1) && (local_8 == local_10)) {
          FUN_66250640(local_50,s__PNMKeyframeRule_T_6626f240);
        }
        pvVar10 = local_14;
        sVar3 = (short)local_14;
        iVar6 = FUN_662039e0(param_1,local_50[0],sVar3,2,0);
        iVar1 = local_70;
        if (iVar6 < 0) goto LAB_662050e5;
        FUN_662508c0(local_24,local_6c[0]);
        FUN_662508c0(local_60,local_a0[0]);
        piVar8 = local_60;
        pcVar11 = &DAT_6626f254;
        puVar9 = FUN_662504a0(local_160,local_44,local_24);
        puVar9 = FUN_662504f0(local_208,puVar9,pcVar11);
        piVar8 = FUN_662504a0(local_178,puVar9,piVar8);
        FUN_662503a0(local_38,piVar8);
        FUN_66250210(local_178);
        FUN_66250210(local_208);
        FUN_66250210(local_160);
        if ((local_c == 1) && (local_8 == local_10)) {
          FUN_66250640(local_38,s__PNMNonKeyframeRule_T_6626f228);
        }
        iVar6 = FUN_662039e0(param_1,local_38[0],sVar3,0,0);
        iVar1 = local_70;
        if (iVar6 < 0) goto LAB_662050e5;
        FUN_662508c0(local_84,local_f4[0]);
        if ((local_c == 1) && (local_8 == local_10)) {
          FUN_66250640(local_84,s__PNMThinningRule_T_6626f214);
        }
        uVar5 = 2;
        pcVar11 = local_84[0];
      }
      else {
        local_2c = local_18;
        puVar9 = (undefined4 *)FUN_66250bf0(&local_2c);
        if ((void *)*puVar9 == (void *)0x0) {
LAB_662050e0:
          iVar6 = -0x7fffbffb;
          iVar1 = local_70;
          goto LAB_662050e5;
        }
        iVar6 = FUN_66217fa0((void *)*puVar9,(undefined4 *)0x0,&local_28);
        iVar1 = local_70;
        if (iVar6 < 0) goto LAB_662050e5;
        FUN_662508c0(local_44,local_c4[0]);
        FUN_662508c0(local_24,local_6c[0]);
        piVar8 = FUN_662504a0(local_1c0,local_44,local_24);
        FUN_662503a0(local_50,piVar8);
        FUN_66250210(local_1c0);
        if ((local_c == 1) && (local_8 == local_10)) {
          FUN_66250640(local_50,s__PNMKeyframeRule_T_6626f240);
        }
        pvVar10 = local_14;
        sVar3 = (short)local_14;
        iVar6 = FUN_662039e0(param_1,local_50[0],sVar3,2,0);
        iVar1 = local_70;
        if (iVar6 < 0) goto LAB_662050e5;
        FUN_662508c0(local_24,local_6c[0]);
        FUN_662508c0(local_60,local_a0[0]);
        piVar8 = local_60;
        pcVar11 = &DAT_6626f254;
        puVar9 = FUN_662504a0(local_190,local_44,local_24);
        puVar9 = FUN_662504f0(local_1f0,puVar9,pcVar11);
        piVar8 = FUN_662504a0(local_13c,puVar9,piVar8);
        FUN_662503a0(local_38,piVar8);
        FUN_66250210(local_13c);
        FUN_66250210(local_1f0);
        FUN_66250210(local_190);
        if ((local_c == 1) && (local_8 == local_10)) {
          FUN_66250640(local_38,s__PNMNonKeyframeRule_T_6626f228);
        }
        iVar6 = FUN_662039e0(param_1,local_38[0],sVar3,0,0);
        iVar1 = local_70;
        if (iVar6 < 0) goto LAB_662050e5;
        FUN_662508c0(local_84,local_f4[0]);
        if (local_c == 1) {
          FUN_66250640(local_84,s__PNMThinningRule_T_6626f214);
        }
        uVar5 = 2;
        pcVar11 = local_84[0];
      }
LAB_66204f28:
      iVar6 = FUN_662039e0(param_1,pcVar11,(short)pvVar10,uVar5,0);
      iVar2 = local_18;
joined_r0x662049e1:
      iVar1 = local_70;
      if (iVar6 < 0) goto LAB_662050e5;
    }
    if (local_88 == local_70) {
      FUN_662508c0(local_44,local_b8[0]);
      FUN_662508c0(local_24,local_6c[0]);
      piVar8 = FUN_662504a0(local_1d8,local_44,local_24);
      FUN_662503a0(local_50,piVar8);
      FUN_66250210(local_1d8);
      if ((local_c == 1) && (local_8 == local_10)) {
        FUN_66250640(local_50,s__PNMKeyframeRule_T_6626f240);
      }
      pvVar10 = local_14;
      iVar6 = FUN_662039e0(param_1,local_50[0],(short)local_14,2,0);
      iVar1 = local_70;
      if (-1 < iVar6) {
        FUN_662508c0(local_24,local_6c[0]);
        FUN_662508c0(local_60,local_a0[0]);
        piVar8 = local_60;
        pcVar11 = &DAT_6626f254;
        puVar9 = FUN_662504a0(local_154,local_44,local_24);
        puVar9 = FUN_662504f0(local_148,puVar9,pcVar11);
        piVar8 = FUN_662504a0(local_1a8,puVar9,piVar8);
        FUN_662503a0(local_38,piVar8);
        FUN_66250210(local_1a8);
        FUN_66250210(local_148);
        FUN_66250210(local_154);
        if ((local_c == 1) && (local_8 == local_10)) {
          FUN_66250640(local_38,s__PNMNonKeyframeRule_T_6626f228);
        }
        uVar5 = 0;
        pcVar11 = local_38[0];
        goto LAB_66204f28;
      }
      break;
    }
    local_2c = local_18;
    puVar9 = (undefined4 *)FUN_66250bf0(&local_2c);
    if ((void *)*puVar9 == (void *)0x0) goto LAB_662050e0;
    iVar6 = FUN_66217fa0((void *)*puVar9,(undefined4 *)0x0,&local_28);
    iVar1 = local_70;
    if (iVar6 < 0) break;
    FUN_662508c0(local_44,local_c4[0]);
    FUN_662508c0(local_24,local_6c[0]);
    piVar8 = FUN_662504a0(local_16c,local_44,local_24);
    FUN_662503a0(local_50,piVar8);
    FUN_66250210(local_16c);
    if ((local_c == 1) && (local_8 == local_10)) {
      FUN_66250640(local_50,s__PNMKeyframeRule_T_6626f240);
    }
    sVar3 = (short)local_14;
    iVar6 = FUN_662039e0(param_1,local_50[0],sVar3,2,0);
    iVar1 = local_70;
    if (iVar6 < 0) break;
    FUN_662508c0(local_24,local_6c[0]);
    FUN_662508c0(local_60,local_a0[0]);
    piVar8 = local_60;
    pcVar11 = &DAT_6626f254;
    puVar9 = FUN_662504a0(local_1b4,local_44,local_24);
    puVar9 = FUN_662504f0(local_19c,puVar9,pcVar11);
    piVar8 = FUN_662504a0(local_184,puVar9,piVar8);
    FUN_662503a0(local_38,piVar8);
    FUN_66250210(local_184);
    FUN_66250210(local_19c);
    FUN_66250210(local_1b4);
    if ((local_c == 1) && (local_8 == local_10)) {
      FUN_66250640(local_38,s__PNMNonKeyframeRule_T_6626f228);
    }
    iVar6 = FUN_662039e0(param_1,local_38[0],sVar3,0,0);
    iVar1 = local_70;
    iVar2 = local_18;
  } while (-1 < iVar6);
LAB_662050e5:
  local_70 = iVar1;
  FUN_66250210((int *)local_d0);
  FUN_66250210((int *)local_dc);
  FUN_66250210((int *)local_e8);
  FUN_66250210(local_100);
  FUN_66250210(local_ac);
  FUN_66250210((int *)local_10c);
  FUN_66250210(local_130);
  FUN_66250210((int *)local_124);
  FUN_66250210(local_1cc);
  FUN_66250210((int *)local_118);
  FUN_66250210((int *)local_84);
  FUN_66250210((int *)local_38);
  FUN_66250210((int *)local_50);
  FUN_66250210(local_60);
  FUN_66250210(local_24);
  FUN_66250210(local_44);
  FUN_66250210(local_1e4);
  FUN_66250210(local_1fc);
  FUN_66250210((int *)local_a0);
  FUN_66250210((int *)local_f4);
  FUN_66250210((int *)local_6c);
  FUN_66250210((int *)local_b8);
  FUN_66250210((int *)local_c4);
  FUN_66250210(local_214);
  return iVar6;
}


