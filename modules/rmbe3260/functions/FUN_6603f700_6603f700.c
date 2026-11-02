/* Module: rmbe3260.dll
   Function: FUN_6603f700
   Address: 6603f700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_6603f700(void *this,uint *param_1,void *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  bool bVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  LSTATUS LVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  char *pcVar15;
  CHAR local_2bc [512];
  undefined1 local_bc [36];
  uint local_98;
  uint *local_94;
  int local_90;
  int local_88;
  CHAR local_84 [16];
  undefined4 local_74 [2];
  undefined4 *local_6c;
  uint *local_68;
  undefined4 local_64;
  int local_60 [2];
  uint local_58 [3];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_42;
  uint *local_3c;
  undefined4 local_38 [3];
  ushort local_2c;
  ushort uStack_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_22;
  uint local_1c;
  uint local_18;
  uint local_14;
  float local_10;
  uint local_c;
  uint *local_8;
  
  thunk_FUN_6605b610((int *)((int)this + 0x1b4));
  local_10 = (float)param_1[10];
  if (99 < *param_1) {
    local_10 = (float)param_1[0x14];
    *(uint *)((int)this + 0x134) = param_1[0x15];
    *(uint *)((int)this + 0x138) = param_1[0x16];
    *(uint *)((int)this + 0x18c) = param_1[0x17];
    *(uint *)((int)this + 400) = param_1[0x18];
  }
  if (0x83 < *param_1) {
    *(uint *)((int)this + 0x194) = param_1[0x19];
    *(uint *)((int)this + 0x198) = param_1[0x1a];
    *(uint *)((int)this + 0x1a8) = param_1[0x1b];
    *(uint *)((int)this + 0x1ac) = param_1[0x1c];
    *(uint *)((int)this + 0x19c) = param_1[0x1d];
    *(uint *)((int)this + 0x1a0) = param_1[0x1e];
    *(uint *)((int)this + 0x1a4) = param_1[0x1f];
    *(uint *)((int)this + 0x1b0) = param_1[0x20];
  }
  FUN_66040d30((int)this);
  FUN_6603d180((int)local_bc);
  uVar14 = 0;
  if (local_98 != 0) {
    do {
      if ((param_1[3] == *local_94) && (param_1[4] == local_94[1])) {
        FUN_6605b970((void *)((int)this + 0x1b4),*(char **)(local_90 + uVar14 * 4));
        break;
      }
      uVar14 = uVar14 + 1;
      local_94 = local_94 + 2;
    } while (uVar14 < local_98);
  }
  *(uint *)((int)this + 300) = param_1[3];
  *(uint *)((int)this + 0x130) = param_1[4];
  if (*(int *)((int)this + 300) == 0) {
    return 0xfff5;
  }
  if (*(int *)((int)this + 0x124) == 0) {
    local_88 = uVar14 * 0x20 + local_88;
    *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(local_88 + 4);
    *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(local_88 + 8);
  }
  else {
    *(undefined4 *)((int)this + 0x144) = 1;
    *(undefined4 *)((int)this + 0x148) = 1;
  }
  *(uint *)((int)this + 0x14c) = param_1[7];
  uVar14 = param_1[8];
  *(uint *)((int)this + 0x150) = uVar14;
  if ((*(int *)((int)this + 0x14c) == 0) || (uVar14 == 0)) {
    return 0xfffd;
  }
  *(int *)((int)this + 0x154) = *(int *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)((int)this + 0x150);
  bVar4 = false;
  if (((param_1[0x11] != 0) && (param_1[0x12] != 0)) && (*(int *)((int)this + 0x124) == 0)) {
    bVar4 = true;
    *(uint *)((int)this + 0x15c) = (*(int *)((int)this + 0x150) - param_1[0x10]) - param_1[0x12];
    *(uint *)((int)this + 0x160) = param_1[0xf];
    *(uint *)((int)this + 0x154) = param_1[0x11];
    *(uint *)((int)this + 0x158) = param_1[0x12];
  }
  *(uint *)((int)this + 0x154) =
       *(uint *)((int)this + 0x154) - *(uint *)((int)this + 0x154) % *(uint *)((int)this + 0x144);
  iVar12 = *(uint *)((int)this + 0x158) -
           *(uint *)((int)this + 0x158) % *(uint *)((int)this + 0x148);
  *(int *)((int)this + 0x158) = iVar12;
  if (*(uint *)((int)this + 0x14c) <
      (uint)(*(int *)((int)this + 0x160) + *(int *)((int)this + 0x154))) {
    return 0xfffd;
  }
  if (*(uint *)((int)this + 0x150) < (uint)(iVar12 + *(int *)((int)this + 0x15c))) {
    return 0xfffd;
  }
  if (!bVar4) {
    *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x150) - iVar12 >> 1;
    *(uint *)((int)this + 0x160) =
         (uint)(*(int *)((int)this + 0x14c) - *(int *)((int)this + 0x154)) >> 1;
  }
  local_c = 0x18;
  if (param_1[1] == 6) {
    local_c = 0xc;
    *(uint *)((int)this + 0x16c) = (*(int *)((int)this + 0x14c) * 3 & 0x3fffffffU) >> 1;
    uVar14 = (*(int *)((int)this + 0x154) * 3 & 0x3fffffffU) >> 1;
  }
  else {
    *(uint *)((int)this + 0x16c) = *(int *)((int)this + 0x14c) * 0x18 + 0x1fU >> 3 & 0x1ffffffc;
    uVar14 = *(int *)((int)this + 0x154) * 0x18 + 0x1fU >> 3 & 0x1ffffffc;
  }
  *(uint *)((int)this + 0x170) = uVar14;
  *(int *)((int)this + 0x178) = *(int *)((int)this + 0x16c) * *(int *)((int)this + 0x150);
  *(int *)((int)this + 0x17c) = *(int *)((int)this + 0x158) * *(int *)((int)this + 0x170);
  *(int *)((int)this + 0x164) = *(int *)((int)this + 0x15c) * *(int *)((int)this + 0x16c);
  *(int *)((int)this + 0x168) = *(int *)((int)this + 0x160) * 3;
  iVar12 = *(int *)((int)this + 0x154);
  if (param_1[1] == 6) {
    if ((iVar12 != *(int *)((int)this + 0x14c)) ||
       (*(int *)((int)this + 0x158) != *(int *)((int)this + 0x150))) {
      *(int *)((int)this + 0x174) = iVar12;
      uVar14 = *(uint *)((int)this + 0x17c);
LAB_6603fa76:
      pvVar5 = operator_new(uVar14);
      *(void **)((int)this + 0x180) = pvVar5;
    }
  }
  else if (iVar12 != *(int *)((int)this + 0x14c)) {
    *(int *)((int)this + 0x174) = iVar12 * 3;
    uVar14 = *(uint *)((int)this + 0x17c);
    goto LAB_6603fa76;
  }
  param_1[0x10] = *(uint *)((int)this + 0x15c);
  param_1[0xf] = *(uint *)((int)this + 0x160);
  param_1[0x11] = *(uint *)((int)this + 0x154);
  param_1[0x12] = *(uint *)((int)this + 0x158);
  if (param_1[1] == 2) {
    uVar13 = 0x52474256;
  }
  else {
    if (param_1[1] != 6) {
      return 0xfff2;
    }
    uVar13 = 0x59555632;
  }
  puVar6 = local_38;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_2c = *(ushort *)((int)this + 0x154);
  uStack_2a = *(ushort *)((int)this + 0x158);
  local_24 = 0;
  local_26 = 0;
  local_38[0] = 0x1a;
  local_38[1] = 0x5649444f;
  local_28 = (undefined2)local_c;
  local_38[2] = uVar13;
  uVar13 = ftol();
  pvVar5 = param_2;
  local_22 = uVar13;
  puVar6 = local_38;
  puVar10 = (undefined4 *)((int)this + 0xed);
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar6;
  if ((*(int *)((int)this + 0x134) == 0) || (*(int *)((int)this + 0x138) == 0)) {
    *(uint *)((int)this + 0x134) = (uint)local_2c;
    *(uint *)((int)this + 0x138) = (uint)uStack_2a;
  }
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)this + 0x134);
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0x138);
  if ((uint)local_2c < *(uint *)((int)this + 0x13c)) {
    *(uint *)((int)this + 0x13c) = (uint)local_2c;
  }
  if ((uint)uStack_2a < *(uint *)((int)this + 0x140)) {
    *(uint *)((int)this + 0x140) = (uint)uStack_2a;
  }
  local_8 = (uint *)0xfff5;
  puVar7 = local_58;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *(undefined2 *)((int)this + 0x134);
  *(undefined2 *)puVar7 = 0;
  local_58[2] = *(uint *)((int)this + 300);
  local_4a = *(undefined2 *)((int)this + 0x138);
  local_48 = (undefined2)local_c;
  local_58[0] = 0x1a;
  local_58[1] = 0x5649444f;
  local_44 = 0;
  local_46 = 0;
  puVar7 = local_8;
  local_4c = uVar2;
  local_42 = uVar13;
  if (param_2 == (void *)0x0) goto LAB_6603fd3a;
  piVar11 = (int *)((int)this + 0x128);
  iVar12 = FUN_6605f0a0(param_2,local_58[2],piVar11);
  if (iVar12 == 0) {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
    }
    *piVar11 = (int)puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      return 0xfff3;
    }
    InterlockedIncrement(puVar6 + 3);
    InterlockedIncrement((LONG *)(*piVar11 + 0xc));
    param_2 = (void *)*piVar11;
    puVar6 = FUN_6605f0e0(pvVar5,*(uint *)((int)this + 300));
    *puVar6 = param_2;
  }
  else {
    if (*piVar11 == 0) {
      return 0xfff2;
    }
    InterlockedIncrement((LONG *)(*piVar11 + 0xc));
  }
  iVar12 = *(int *)*piVar11;
  if (iVar12 != 0) {
    *(int *)*piVar11 = iVar12 + 1;
    puVar7 = (uint *)0x0;
    goto LAB_6603fd3a;
  }
  puVar6 = operator_new(0x3c);
  if (puVar6 == (undefined4 *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = FUN_660424a0(puVar6);
  }
  *(undefined4 *)(*piVar11 + 8) = uVar13;
  if (*(int *)((int)this + 300) == 0) {
LAB_6603fcec:
    puVar7 = local_8;
  }
  else {
    iVar12 = FUN_66042510(*(void **)(*piVar11 + 8),*(int *)((int)this + 300),(char *)0x0);
    puVar7 = (uint *)0x0;
    if (iVar12 != 0) goto LAB_6603fcec;
  }
  if (puVar7 != (uint *)0x0) {
    return (uint)puVar7;
  }
  iVar12 = FUN_66042720(*(void **)(*piVar11 + 8),*(undefined4 *)((int)this + 300),*piVar11 + 4);
  if (iVar12 == 0) {
    *(int *)*piVar11 = *(int *)*piVar11 + 1;
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)0xfff6;
  }
LAB_6603fd3a:
  *(undefined4 *)((int)this + 0x117) = 0;
  *(undefined4 *)((int)this + 0x11b) = 0;
  *(undefined1 *)((int)this + 0x11f) = 0;
  if (puVar7 == (uint *)0x0) {
    local_6c = local_38;
    local_68 = local_58;
    local_64 = 0;
    puVar6 = (undefined4 *)((int)this + 0xa6);
    iVar12 = FUN_66042770(*(void **)(*(int *)((int)this + 0x128) + 8),
                          *(undefined4 *)(*(int *)((int)this + 0x128) + 4),puVar6,&local_6c);
    if (iVar12 == 0) {
      local_18 = param_1[9];
      if (*(int *)((int)this + 300) == 0x434c5631) {
        local_8 = (uint *)0x10;
        uVar14 = FUN_6603bea0();
        uVar14 = uVar14 >> 0x14 & 0xff;
        uVar8 = FUN_6603bea0();
        wsprintfA(local_2bc,s_Software__s__s__d__d_Preferences_6606e398,s_Real_Networks_6606e3c8,
                  s_RealProducer_6606e3d8,uVar8 >> 0x1c,uVar14);
        LVar9 = RegQueryValueA((HKEY)0x80000000,local_2bc,local_84,(PLONG)&local_8);
        if (((LVar9 == 0) && (uVar14 = atoi(local_84), 0x32 < uVar14)) && (uVar14 < 100)) {
          local_18 = (uVar14 * local_18) / 100;
        }
      }
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10003,&local_18);
      local_3c = param_1 + 0xd;
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10004,local_3c);
      *(uint *)((int)this + 0xba) = param_1[0xb];
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10001,
                   (uint *)((int)this + 0xba));
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10010,&local_10);
      puVar7 = (uint *)((int)this + 0x188);
      if ((int)*param_1 < 0x4d) {
        *puVar7 = 0x32;
      }
      else {
        *puVar7 = param_1[0x13];
      }
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10005,puVar7);
      *(uint *)((int)this + 0xbe) = (uint)(param_1[0xc] != 0);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10002,
                   (uint *)((int)this + 0xbe));
      if (*(int *)((int)this + 300) == 0x52563230) {
        local_8 = (uint *)(uint)(*(int *)((int)this + 0x130) == 0);
        FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10020,&local_8);
      }
      param_2 = *(void **)((int)this + 0x1a8);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10025,&param_2);
      param_2 = *(void **)((int)this + 0x194);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10021,&param_2);
      if (*(int *)((int)this + 0x18c) != 0) {
        param_2 = *(void **)((int)this + 0x1ac);
        FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10028,&param_2);
      }
      param_2 = *(void **)((int)this + 0x1b0);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10022,&param_2);
      param_2 = *(void **)((int)this + 0x19c);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x1002a,&param_2);
      param_2 = *(void **)((int)this + 0x1a4);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x1002c,&param_2);
      param_2 = *(void **)((int)this + 0x1a0);
      FUN_660428e0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,0x10029,&param_2);
      pvVar5 = operator_new(0x6d);
      if (pvVar5 == (void *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10 = FUN_66056230(pvVar5,s_EncDataCallback_6606e388,0,0);
      }
      *(undefined4 **)((int)this + 0xae) = puVar10;
      FUN_660427c0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,this,puVar10,
                   CEngineVideoStream::DataCallback);
      piVar11 = (int *)FUN_66042910(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6);
      if (piVar11 != (int *)0x0) {
        *(undefined4 *)((int)this + 0xaa) = 0;
        iVar12 = (**(code **)*piVar11)(3,(undefined4 *)((int)this + 0xaa));
        if (iVar12 == 0) {
          pvVar5 = operator_new(0x6d);
          if (pvVar5 == (void *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = FUN_66056230(pvVar5,s_EncPreview_6606e37c,0,0);
          }
          *(undefined4 **)((int)this + 0x120) = puVar10;
        }
        (**(code **)(*piVar11 + 8))();
      }
      if (param_1[9] < 0x3e801) {
        local_c = (-(uint)(0x1f400 < param_1[9]) & 400) + 600;
      }
      else {
        local_c = 0x578;
      }
      FUN_66042880(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,local_c,local_c,&local_c);
      local_60[1] = 1;
      local_60[0] = local_c * 2;
      *(int *)((int)this + 0x107) = local_60[0];
      (**(code **)(**(int **)((int)this + 0x56) + 0x10))(local_60,local_74);
      pvVar5 = (void *)((int)this + 0xc2);
      FUN_66042e40(pvVar5,0,*(uint **)((int)this + 0xae));
      FUN_66042e40(pvVar5,1,*(uint **)((int)this + 0x56));
      FUN_66042e40(pvVar5,2,&local_c);
      local_1c = (uint)(_DAT_660680d8 <= local_10);
      FUN_66042e40(pvVar5,3,&local_1c);
      FUN_660427f0(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,&local_14);
      *(undefined4 *)((int)this + 4) = 0x4d445052;
      *(undefined4 *)((int)this + 8) = 0x3a;
      *(undefined2 *)((int)this + 0xc) = 0;
      *(undefined2 *)((int)this + 0xe) = *(undefined2 *)((int)this + 0x40);
      uVar14 = param_1[6];
      *(undefined4 *)((int)this + 0x1c) = local_74[0];
      *(uint *)((int)this + 0x20) = uVar14;
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x107);
      if (*(int *)((int)this + 0x18c) == 0) {
        *(undefined4 *)((int)this + 0x24) = 5000;
      }
      else {
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x1ac);
      }
      *(uint *)((int)this + 0x28) = param_1[2];
      uVar13 = *(undefined4 *)(*(int *)((int)this + 0x46) + -8);
      *(int *)((int)this + 0x2d) = *(int *)((int)this + 0x46);
      *(char *)((int)this + 0x2c) = (char)uVar13;
      iVar12 = -1;
      pcVar15 = s_video_x_pn_realvideo_6606cde8;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar1 != '\0');
      *(char **)((int)this + 0x32) = s_video_x_pn_realvideo_6606cde8;
      *(byte *)((int)this + 0x31) = ~(byte)iVar12 - 1;
      *(uint *)((int)this + 0x36) = local_14;
      pvVar5 = operator_new(local_14);
      *(void **)((int)this + 0x3a) = pvVar5;
      *(uint *)((int)this + 0x10) = param_1[9];
      *(uint *)((int)this + 0x14) = param_1[9];
      local_8 = operator_new(local_14);
      iVar12 = FUN_66042820(*(void **)(*(int *)((int)this + 0x128) + 8),*puVar6,local_8);
      puVar7 = local_8;
      if (iVar12 == 0) {
        *local_8 = local_14;
        uVar13 = ftol();
        *(undefined4 *)((int)puVar7 + 0x16) = uVar13;
        puVar3 = *(undefined1 **)((int)this + 0x3a);
        *puVar3 = (char)(local_14 >> 0x18);
        puVar3[1] = (char)(*puVar7 >> 0x10);
        puVar3[2] = (char)(*puVar7 >> 8);
        puVar3[3] = (char)*puVar7;
        puVar3[4] = (char)(puVar7[1] >> 0x18);
        puVar3[5] = (char)(puVar7[1] >> 0x10);
        puVar3[6] = (char)(puVar7[1] >> 8);
        puVar3[7] = (char)puVar7[1];
        puVar3[8] = (char)(puVar7[2] >> 0x18);
        puVar3[9] = (char)(puVar7[2] >> 0x10);
        puVar3[10] = (char)(puVar7[2] >> 8);
        puVar3[0xb] = (char)puVar7[2];
        puVar3[0xc] = *(undefined1 *)((int)puVar7 + 0xd);
        puVar3[0xd] = (char)puVar7[3];
        puVar3[0xe] = *(undefined1 *)((int)puVar7 + 0xf);
        puVar3[0xf] = *(undefined1 *)((int)puVar7 + 0xe);
        puVar3[0x10] = *(undefined1 *)((int)puVar7 + 0x11);
        puVar3[0x11] = (char)puVar7[4];
        puVar3[0x12] = *(undefined1 *)((int)puVar7 + 0x13);
        puVar3[0x13] = *(undefined1 *)((int)puVar7 + 0x12);
        puVar3[0x14] = *(undefined1 *)((int)puVar7 + 0x15);
        puVar3[0x15] = (char)puVar7[5];
        puVar3[0x16] = (char)((uint)*(undefined4 *)((int)puVar7 + 0x16) >> 0x18);
        puVar3[0x17] = (char)((uint)*(undefined4 *)((int)puVar7 + 0x16) >> 0x10);
        puVar3[0x18] = (char)((uint)*(undefined4 *)((int)puVar7 + 0x16) >> 8);
        puVar3[0x19] = *(undefined1 *)((int)puVar7 + 0x16);
        puVar6 = (undefined4 *)((int)puVar7 + 0x1a);
        puVar10 = (undefined4 *)(*(int *)((int)this + 0x3a) + 0x1a);
        for (uVar14 = local_14 - 0x1a >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar14 = local_14 - 0x1a & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        if (local_8 != (uint *)0x0) {
          operator_delete(local_8);
        }
        iVar12 = FUN_6603dfd0(*(void **)((int)this + 0x52),(undefined4 *)((int)this + 4));
        if (iVar12 == 0) {
          *(uint *)((int)this + 0x1c0) = param_1[9] / 1000;
          if (*local_3c != 0) {
            *(undefined4 *)((int)this + 0x1c4) = 1;
            *(undefined4 *)((int)this + 0x1c8) = 0;
            *(undefined4 *)((int)this + 0x1cc) = 0;
            FUN_66040c50((int)this);
            return 0;
          }
          *(undefined4 *)((int)this + 0x1c4) = 0;
          *(undefined4 *)((int)this + 0x1c8) = 1;
          *(float *)((int)this + 0x1cc) = local_10;
          FUN_66040c50((int)this);
          return 0;
        }
      }
    }
  }
  return 0xfff6;
}


