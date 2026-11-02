/* Module: vegas30.exe
   Function: FUN_005182b0
   Address: 005182b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005182b0(int *param_1,HWND param_2,uint param_3,HWND param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  SHORT SVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  LPARAM LVar11;
  uint uVar12;
  LRESULT LVar13;
  HWND pHVar14;
  int iVar15;
  code *pcVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  code *pcVar21;
  undefined4 *puVar22;
  float10 fVar23;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  float10 extraout_ST0_10;
  float10 extraout_ST0_11;
  float10 extraout_ST0_12;
  float10 extraout_ST0_13;
  float10 extraout_ST0_14;
  float10 extraout_ST0_15;
  float10 extraout_ST0_16;
  float10 extraout_ST0_17;
  float10 extraout_ST0_18;
  float10 extraout_ST0_19;
  float10 extraout_ST0_20;
  UINT UVar24;
  WPARAM WVar25;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a4;
  longlong local_39c;
  int local_390;
  undefined8 local_38c;
  float local_384;
  float local_380;
  uint local_37c;
  undefined8 local_378;
  CHAR local_370 [256];
  undefined4 local_270 [16];
  float local_230;
  float local_22c;
  double local_220;
  undefined1 local_214 [44];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_190;
  float local_18c;
  float local_170;
  float local_16c;
  undefined1 local_134 [24];
  undefined4 local_11c [25];
  undefined4 local_b8 [46];
  
  local_390 = 1;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar10 = *param_1;
  if (iVar10 == 0) {
    return 1;
  }
  iVar15 = *(int *)(iVar10 + 0x98);
  if (iVar15 == 0) {
    return 1;
  }
  local_38c._0_4_ = (float)(param_3 & 0xffff);
  local_37c = param_3 >> 0x10;
  iVar8 = FUN_00522a00(0xffffffff);
  iVar19 = *(int *)(iVar15 + 4) << 0x18;
  uVar20 = iVar19 >> 0x1f;
  SVar7 = GetKeyState(0x11);
  if (SVar7 < 0) {
    uVar20 = (uint)(-1 < iVar19);
  }
  iVar19 = FUN_0050c470(*(undefined4 *)(iVar10 + 0x98),*(undefined4 *)(iVar15 + 0x88),
                        *(undefined4 *)(iVar15 + 0x8c),local_134,0,0,0);
  if (iVar19 == -1) {
    return 1;
  }
  if (*(int *)(iVar15 + 0x9c) == 1) {
    iVar19 = FUN_0050c470(*(undefined4 *)(iVar10 + 0x98),*(undefined4 *)(iVar15 + 0x88),
                          *(undefined4 *)(iVar15 + 0x8c),local_214,1,0,0);
joined_r0x005183e5:
    if (iVar19 == -1) {
      return 1;
    }
  }
  else if (*(int *)(iVar15 + 0x9c) == 2) {
    iVar19 = FUN_0050c470(*(undefined4 *)(iVar10 + 0x98),*(undefined4 *)(iVar15 + 0x88),
                          *(undefined4 *)(iVar15 + 0x8c),local_214,2,0,0);
    goto joined_r0x005183e5;
  }
  puVar17 = local_11c;
  puVar18 = local_270;
  for (iVar19 = 0x17; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  FUN_005a61e0(&local_190,local_270);
  FUN_005a6120(local_270,local_270,-local_220,0);
  puVar17 = (undefined4 *)(iVar15 + 0x24);
  fVar23 = (float10)FUN_005a5f80(puVar17);
  local_378._0_4_ = (float)fVar23;
  fVar23 = (float10)FUN_005a5ff0(puVar17);
  fVar2 = (float)fVar23;
  fVar23 = (float10)FUN_005a5f80(local_270);
  fVar3 = (float)fVar23;
  fVar23 = (float10)FUN_005a5ff0(local_270);
  fVar4 = (float)fVar23;
  local_3ac = fVar4;
  if (fVar4 < fVar3) {
    local_3ac = fVar3;
  }
  local_3b4 = 1.0;
  fVar6 = fVar4;
  if (fVar4 < _DAT_00610f20) {
    fVar6 = -fVar4;
  }
  if (fVar6 <= (float)_DAT_0061a3b8) {
    fVar6 = fVar2;
    if (fVar2 < _DAT_00610f20) {
      fVar6 = -fVar2;
    }
    if ((float)_DAT_0061a3b8 < fVar6) {
      local_3b4 = (float)local_378 / fVar2;
    }
  }
  else {
    local_3b4 = fVar3 / fVar4;
  }
  FUN_005b83b0(DAT_0064b138,1);
  fVar6 = (float)local_38c;
  local_3b0 = fVar3;
  if ((uint)(float)local_38c < 0x52c) {
    if ((float)local_38c == 1.85392e-42) {
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200))
      goto LAB_0051adcf;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)_DAT_0061a564 <= fVar23) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)_DAT_0061a560) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3b4 = (float)fVar23;
        }
        else {
          local_3b4 = 360.0;
        }
      }
      else {
        local_3b4 = -360.0;
      }
      _CIpow();
      local_38c = ftol();
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_38c / extraout_ST0_11 == (float10)local_3b4) goto LAB_0051adcf;
      iVar10 = FUN_0050bd90(*param_1,0,0,0x52b);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) goto LAB_0051adcf;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1
                           );
      param_1[0x34] = iVar10;
      *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x5c + *(int *)(iVar8 + 8)) =
           local_3b4 * (float)_DAT_0061a4d0;
      LVar11 = ftol();
      iVar10 = 0x52c;
      goto LAB_0051a12d;
    }
    switch((float)local_38c) {
    case 1.5148e-42:
      puVar17 = *(undefined4 **)(*param_1 + 0x98);
      puVar18 = local_b8;
      for (iVar10 = 0x2e; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      FUN_005b84d0(DAT_0064b138,1);
      iVar10 = _SfViewField_DialogBoxEx_32
                         (*(undefined4 *)(*param_1 + 8),"VIDEOMOTIONEDITINFO",local_b8,0,
                          &PTR_s_flXRotation_0061a3c0,5,0,local_b8);
      FUN_005b83b0(DAT_0064b138,1);
      puVar17 = DAT_0064b138;
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 == 1) {
        FUN_005b83b0(DAT_0064b138,1);
        puVar18 = local_b8;
        puVar22 = *(undefined4 **)(*param_1 + 0x98);
        for (iVar10 = 0x2e; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar22 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar22 = puVar22 + 1;
        }
        DAT_0064767c = DAT_0064767c | 0x400;
        FUN_005b84d0(puVar17,1);
        local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      }
      break;
    default:
      goto switchD_00518538_caseD_43a;
    case 1.82309e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)_DAT_00610f20 <= fVar23) {
        fVar2 = (float)local_378 * _DAT_0061a4a8;
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)fVar2) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          fVar2 = (float)fVar23;
        }
      }
      else {
        local_378._0_4_ = 0.0;
        fVar2 = (float)local_378;
      }
      local_378._0_4_ = fVar2;
      local_3b0 = fVar4;
      if (uVar20 != 0) {
        local_3b0 = (float)local_378 / local_3b4;
      }
      _CIpow();
      lVar5 = ftol();
      fVar2 = (float)((float10)lVar5 / extraout_ST0);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float)local_378 == fVar2) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,(float)local_38c);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),0
                           );
      param_1[0x34] = iVar10;
      iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
      if ((_DAT_00610f20 == (float)local_378) &&
         (local_38c = ftol(), (float10)local_38c / extraout_ST0_00 == (float10)_DAT_00610f20)) {
        local_38c._0_4_ = *(float *)(iVar10 + 0x68);
        local_38c._4_4_ = *(float *)(iVar10 + 0x6c);
        iVar10 = iVar10 + 0x18;
        FUN_005a6440(iVar10,local_270,&local_230,(float)_DAT_0061a3b8 / fVar2,
                     ((float)_DAT_0061a3b8 / fVar2) / local_3b4);
      }
      else {
        fVar3 = fVar2;
        if (fVar2 < _DAT_00610f20) {
          fVar3 = -fVar2;
        }
        if (fVar3 <= (float)_DAT_0061a3b8) {
          local_378._0_4_ = 1.0;
        }
        else {
          local_378._0_4_ = (float)local_378 / fVar2;
        }
        fVar2 = fVar4;
        if (fVar4 < _DAT_00610f20) {
          fVar2 = -fVar4;
        }
        if (fVar2 <= (float)_DAT_0061a3b8) {
          local_3b0 = 1.0;
        }
        else {
          local_3b0 = local_3b0 / fVar4;
        }
        if (_DAT_00619ab0 == (float)local_378) goto LAB_005187e0;
        local_38c._0_4_ = *(float *)(iVar10 + 0x68);
        local_38c._4_4_ = *(float *)(iVar10 + 0x6c);
        iVar10 = iVar10 + 0x18;
        FUN_005a6440(iVar10,local_270,&local_230,(float)local_378,local_3b0);
      }
LAB_005187d5:
      FUN_005a6120(iVar10,iVar10,(float)local_38c,local_38c._4_4_,0);
      local_390 = 0;
      goto LAB_005187e0;
    case 1.82449e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)_DAT_00610f20 <= fVar23) {
        local_3a4 = (float)local_378 * _DAT_0061a4a8;
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)local_3a4) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3a4 = (float)fVar23;
        }
      }
      else {
        local_3a4 = 0.0;
      }
      if (uVar20 != 0) {
        local_3b0 = local_3a4 * local_3b4;
      }
      _CIpow();
      local_378 = ftol();
      fVar2 = (float)((float10)local_378 / extraout_ST0_01);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      if (local_3a4 == fVar2) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,(float)local_38c);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),0
                           );
      param_1[0x34] = iVar10;
      iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
      if (_DAT_00610f20 == local_3a4) {
        local_38c = ftol();
        if ((float10)local_38c / extraout_ST0_02 == (float10)_DAT_00610f20) {
          local_38c._0_4_ = *(float *)(iVar10 + 0x68);
          local_38c._4_4_ = *(float *)(iVar10 + 0x6c);
          iVar10 = iVar10 + 0x18;
          FUN_005a6440(iVar10,local_270,&local_230,local_3b4 * ((float)_DAT_0061a3b8 / fVar2),
                       (float)_DAT_0061a3b8 / fVar2);
          goto LAB_005187d5;
        }
      }
      fVar4 = fVar3;
      if (fVar3 < _DAT_00610f20) {
        fVar4 = -fVar3;
      }
      if (fVar4 <= (float)_DAT_0061a3b8) {
        local_3b0 = 1.0;
      }
      else {
        local_3b0 = local_3b0 / fVar3;
      }
      fVar3 = fVar2;
      if (fVar2 < _DAT_00610f20) {
        fVar3 = -fVar2;
      }
      if (((float)_DAT_0061a3b8 < fVar3) && (_DAT_00619ab0 != local_3a4 / fVar2)) {
        local_38c._0_4_ = *(float *)(iVar10 + 0x68);
        local_38c._4_4_ = *(float *)(iVar10 + 0x6c);
        iVar10 = iVar10 + 0x18;
        FUN_005a6440(iVar10,local_270,&local_230,local_3b0,local_3a4 / fVar2);
        goto LAB_005187d5;
      }
LAB_005187e0:
      FUN_0050c010(*param_1,0);
      break;
    case 1.82869e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      fVar23 = (fVar23 - (float10)local_230) + (float10)local_190;
      if (fVar23 <= (float10)((float)local_378 * _DAT_0061a4fc)) {
        fVar23 = (float10)((float)local_378 * _DAT_0061a4fc);
      }
      fVar23 = (((fVar23 + (float10)local_230) - (float10)local_190) - (float10)local_230) +
               (float10)local_170;
      if ((float10)((float)local_378 * _DAT_0061a4a0) <= fVar23) {
        fVar23 = (float10)((float)local_378 * _DAT_0061a4a0);
      }
      local_38c._0_4_ = (float)((fVar23 + (float10)local_230) - (float10)local_170);
      _CIpow();
      local_39c = ftol();
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_39c / extraout_ST0_03 == (float10)(float)local_38c) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),0
                           );
      param_1[0x34] = iVar10;
      FUN_005a6090(*(int *)(iVar8 + 4) * iVar10 + 0x18 + *(int *)(iVar8 + 8),
                   (float)local_38c - local_230,0);
      goto LAB_0051adb2;
    case 1.8315e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c != 0x100) &&
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c == 0x200)) {
        GetWindowTextA(param_4,local_370,0x100);
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        fVar23 = (fVar23 - (float10)local_22c) + (float10)local_18c;
        if (fVar23 <= (float10)(fVar2 * _DAT_0061a4fc)) {
          fVar23 = (float10)(fVar2 * _DAT_0061a4fc);
        }
        fVar23 = (((fVar23 + (float10)local_22c) - (float10)local_18c) - (float10)local_22c) +
                 (float10)local_16c;
        if ((float10)(fVar2 * _DAT_0061a4a0) <= fVar23) {
          fVar23 = (float10)(fVar2 * _DAT_0061a4a0);
        }
        local_38c._0_4_ = (float)((fVar23 + (float10)local_22c) - (float10)local_16c);
        _CIpow();
        local_39c = ftol();
        local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
        if ((float10)local_39c / extraout_ST0_04 != (float10)(float)local_38c) {
          iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
          local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
          local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          if (-1 < iVar10) {
            FUN_0050bfb0(*param_1);
            iVar10 = *(int *)(*param_1 + 0x98);
            iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),
                                  *(undefined4 *)(iVar10 + 0x8c),0);
            param_1[0x34] = iVar10;
            FUN_005a6090(*(int *)(iVar8 + 4) * iVar10 + 0x18 + *(int *)(iVar8 + 8),0,
                         (float)local_38c - local_22c);
            local_390 = 0;
            FUN_0050c010(*param_1,0);
            local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
            local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          }
        }
      }
      break;
    case 1.8343e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c != 0x100) &&
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c == 0x200)) {
        GetWindowTextA(param_4,local_370,0x100);
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if ((float10)_DAT_0061a588 <= fVar23) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          if (fVar23 <= (float10)_DAT_0061a584) {
            fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
            local_3b4 = (float)fVar23;
          }
          else {
            local_3b4 = 36000.0;
          }
        }
        else {
          local_3b4 = -36000.0;
        }
        _CIpow();
        local_38c = ftol();
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
        if ((float10)local_38c / extraout_ST0_05 != (float10)local_3b4) {
          iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
          local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          if (-1 < iVar10) {
            FUN_0050bfb0(*param_1);
            iVar10 = *(int *)(*param_1 + 0x98);
            iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),
                                  *(undefined4 *)(iVar10 + 0x8c),0);
            param_1[0x34] = iVar10;
            fVar2 = (float)_DAT_0061a4d0;
            iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
            FUN_005a6120(iVar10 + 0x18,iVar10 + 0x18,
                         (double)(local_3b4 * fVar2 - (float)*(double *)(iVar10 + 0x68)),0);
            *(double *)(iVar10 + 0x68) = (double)(local_3b4 * fVar2);
            LVar11 = ftol();
            WVar25 = 1;
            UVar24 = 0x610;
            pHVar14 = GetDlgItem(param_2,0x51e);
            SendMessageA(pHVar14,UVar24,WVar25,LVar11);
            local_390 = 0;
            FUN_0050c010(*param_1,0);
            local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          }
        }
      }
      break;
    case 1.8371e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)_DAT_00610f20 <= fVar23) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)_DAT_00612ab8) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3b4 = (float)fVar23;
        }
        else {
          local_3b4 = 100.0;
        }
      }
      else {
        local_3b4 = 0.0;
      }
      _CIpow();
      local_38c = ftol();
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_38c / extraout_ST0_06 == (float10)local_3b4) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),0
                           );
      param_1[0x34] = iVar10;
      *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x78 + *(int *)(iVar8 + 8)) =
           local_3b4 * _DAT_0061a580;
      LVar11 = ftol();
      iVar10 = 0x520;
      goto LAB_0051ad9d;
    case 1.8399e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (local_37c != 3) {
        if (local_37c == 4) {
          GetWindowTextA(param_4,local_370,0x100);
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          if ((float10)_DAT_0061a4f8 <= fVar23 * (float10)_DAT_00612af0) {
            fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
            if (fVar23 * (float10)_DAT_00612af0 <= (float10)_DAT_0061a57c) {
              fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
              local_38c._0_4_ = (float)(fVar23 * (float10)_DAT_00612af0);
            }
            else {
              local_38c._0_4_ = 10.0;
            }
          }
          else {
            local_38c._0_4_ = 0.01;
          }
          puVar18 = local_270;
          for (iVar15 = 0x17; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          FUN_00512a70(param_1,(float)local_38c,local_270,iVar10 + 0x170);
          SfSetDlgItemText(param_2,0x521,"$1.1f",
                           (double)(*(float *)(*(int *)(iVar10 + 0x98) + 8) * _DAT_00612ab8));
          InvalidateRect((HWND)param_1[1],(RECT *)0x0,0);
          local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
          local_378 = CONCAT44(local_378._4_4_,(float)local_378);
        }
        else {
          local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
          local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          if (local_37c == 1) {
            WVar25 = SendMessageA(param_4,0x147,0,0);
            local_370[0] = '\0';
            SendMessageA(param_4,0x148,WVar25,(LPARAM)local_370);
            fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
            local_38c._0_4_ = (float)(fVar23 * (float10)_DAT_00612af0);
            puVar18 = local_270;
            for (iVar15 = 0x17; iVar15 != 0; iVar15 = iVar15 + -1) {
              *puVar18 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar18 = puVar18 + 1;
            }
            FUN_00512a70(param_1,(float)local_38c,local_270,iVar10 + 0x170);
            InvalidateRect((HWND)param_1[1],(RECT *)0x0,0);
            local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
            local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          }
        }
      }
      break;
    case 1.84131e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((((local_37c != 9) &&
           (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
           local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 1)) &&
          (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
          local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 3)) &&
         (((local_37c == 10 || (local_37c == 2)) ||
          ((local_37c == 4 ||
           (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
           local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c == 0x700)))))) {
        SendMessageA(param_4,0x702,0,(LPARAM)&local_38c);
        if ((((float)_DAT_0061a3b8 < ABS(local_1ac - local_384)) ||
            ((float)_DAT_0061a3b8 < ABS(local_1b0 - local_38c._4_4_))) ||
           (((float)_DAT_0061a3b8 < ABS(local_1b4 - (float)local_38c) ||
            (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
            local_378 = CONCAT44(local_378._4_4_,(float)local_378),
            (float)_DAT_0061a3b8 < ABS(local_1a8 - local_380))))) {
          iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
          local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
          local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          if (-1 < iVar10) {
            FUN_0050bfb0(*param_1);
            iVar10 = *(int *)(*param_1 + 0x98);
            iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),
                                  *(undefined4 *)(iVar10 + 0x8c),1);
            param_1[0x34] = iVar10;
            local_390 = 0;
            pfVar1 = (float *)(*(int *)(iVar8 + 4) * iVar10 + 0x60 + *(int *)(iVar8 + 8));
            *pfVar1 = (float)local_38c;
            pfVar1[1] = local_38c._4_4_;
            pfVar1[2] = local_384;
            pfVar1[3] = local_380;
            FUN_0050c010(*param_1,0);
            local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
            local_378 = CONCAT44(local_378._4_4_,(float)local_378);
          }
        }
      }
      break;
    case 1.84271e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      local_3b4 = (float)local_378 * _DAT_0061a4fc;
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)local_3b4 <= fVar23) {
        local_3b4 = (float)local_378 * _DAT_0061a494;
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)local_3b4) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3b4 = (float)fVar23;
        }
      }
      _CIpow();
      local_38c = ftol();
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_38c / extraout_ST0_07 == (float10)local_3b4) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1
                           );
      param_1[0x34] = iVar10;
      *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x4c + *(int *)(iVar8 + 8)) = local_3b4 / local_3ac;
      LVar11 = ftol();
      iVar10 = 0x525;
      goto LAB_0051a12d;
    case 1.84411e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      local_3b4 = fVar2 * _DAT_0061a4fc;
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)local_3b4 <= fVar23) {
        local_3b4 = fVar2 * _DAT_0061a494;
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)local_3b4) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3b4 = (float)fVar23;
        }
      }
      _CIpow();
      local_38c = ftol();
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_38c / extraout_ST0_08 == (float10)local_3b4) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1
                           );
      param_1[0x34] = iVar10;
      *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x50 + *(int *)(iVar8 + 8)) = local_3b4 / local_3ac;
      LVar11 = ftol();
      iVar10 = 0x526;
      goto LAB_0051a12d;
    case 1.84831e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)_DAT_00610f20 <= fVar23) {
        local_3a4 = (float)local_378 * _DAT_0061a4a8;
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)local_3a4) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3a4 = (float)fVar23;
        }
      }
      else {
        local_3a4 = 0.0;
      }
      local_3b0 = fVar4;
      if (uVar20 != 0) {
        local_3b0 = local_3a4 / local_3b4;
      }
      _CIpow();
      local_38c = ftol();
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_38c / extraout_ST0_09 == (float10)local_3a4) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1
                           );
      param_1[0x34] = iVar10;
      iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
      *(float *)(iVar10 + 0x54) = local_3a4 / fVar3;
      *(float *)(iVar10 + 0x58) = local_3b0 / fVar4;
      LVar11 = ftol();
      pcVar21 = GetDlgItem_exref;
      WVar25 = 1;
      UVar24 = 0x610;
      pHVar14 = GetDlgItem(param_2,0x528);
      pcVar16 = SendMessageA_exref;
      SendMessageA(pHVar14,UVar24,WVar25,LVar11);
      goto LAB_005197e0;
    case 1.85112e-42:
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((local_37c == 0x100) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
      GetWindowTextA(param_4,local_370,0x100);
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if ((float10)_DAT_00610f20 <= fVar23) {
        local_3a4 = (float)local_378 * _DAT_0061a4a8;
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if (fVar23 <= (float10)local_3a4) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          local_3a4 = (float)fVar23;
        }
      }
      else {
        local_3a4 = 0.0;
      }
      if (uVar20 != 0) {
        local_3b0 = local_3a4 * local_3b4;
      }
      _CIpow();
      local_38c = ftol();
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if ((float10)local_38c / extraout_ST0_10 == (float10)local_3a4) break;
      iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (iVar10 < 0) break;
      FUN_0050bfb0(*param_1);
      iVar10 = *(int *)(*param_1 + 0x98);
      iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1
                           );
      param_1[0x34] = iVar10;
      iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
      *(float *)(iVar10 + 0x54) = local_3b0 / fVar3;
      *(float *)(iVar10 + 0x58) = local_3a4 / fVar4;
      LVar11 = ftol();
      pcVar21 = GetDlgItem_exref;
      WVar25 = 1;
      UVar24 = 0x610;
      pHVar14 = GetDlgItem(param_2,0x528);
      pcVar16 = SendMessageA_exref;
      SendMessageA(pHVar14,UVar24,WVar25,LVar11);
LAB_005197e0:
      uVar9 = ftol();
      uVar9 = (*pcVar21)(param_2,0x52a,0x610,1,uVar9);
      (*pcVar16)(uVar9);
      local_390 = 0;
      FUN_0050c010(*param_1,0);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    }
    goto LAB_0051adcf;
  }
  switch((float)local_38c) {
  case 1.85672e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_00610f20 <= fVar23) {
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)local_3ac) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        local_3b0 = (float)fVar23;
      }
      else {
        local_3b0 = local_3ac;
      }
    }
    else {
      local_3b0 = 0.0;
    }
    _CIpow();
    local_38c = ftol();
    if ((float10)local_38c / extraout_ST0_12 == (float10)local_3b0) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1);
    fVar2 = _DAT_00610f20;
    param_1[0x34] = iVar10;
    if (fVar2 < local_3ac) {
      *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x70 + *(int *)(iVar8 + 8)) = local_3b0 / local_3ac;
    }
    LVar11 = ftol();
    iVar10 = 0x52e;
    goto LAB_0051a12d;
  default:
switchD_00518538_caseD_43a:
    local_390 = 1;
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    break;
  case 1.85952e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_00610f20 <= fVar23) {
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)_DAT_00619ab0) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        fVar2 = (float)fVar23;
      }
      else {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_13 == (float10)fVar2) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),1);
    param_1[0x34] = iVar10;
    *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x74 + *(int *)(iVar8 + 8)) = fVar2;
    LVar11 = ftol();
    iVar10 = 0x530;
LAB_0051a12d:
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,iVar10);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
    local_390 = 0;
    FUN_0050c010(*param_1,0);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    break;
  case 1.86373e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((((local_37c == 9) ||
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c == 1)) ||
        (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
        local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c == 3)) ||
       (((local_37c != 10 && (local_37c != 2)) &&
        ((local_37c != 4 &&
         (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
         local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x700)))))) break;
    SendMessageA(param_4,0x702,0,(LPARAM)&local_38c);
    if (((ABS(local_1e0 - local_384) <= (float)_DAT_0061a3b8) &&
        (ABS(local_1e4 - local_38c._4_4_) <= (float)_DAT_0061a3b8)) &&
       ((ABS(local_1e8 - (float)local_38c) <= (float)_DAT_0061a3b8 &&
        (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
        local_378 = CONCAT44(local_378._4_4_,(float)local_378),
        ABS(local_1dc - local_380) <= (float)_DAT_0061a3b8)))) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    pfVar1 = (float *)(*(int *)(iVar8 + 4) * iVar10 + 0x2c + *(int *)(iVar8 + 8));
    *pfVar1 = (float)local_38c;
    pfVar1[1] = local_38c._4_4_;
    pfVar1[2] = local_384;
    pfVar1[3] = local_380;
    goto LAB_0051adb2;
  case 1.86793e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    local_3b0 = (float)local_378 * _DAT_0061a4fc;
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)local_3b0 <= fVar23) {
      local_3b0 = (float)local_378 * _DAT_0061a494;
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)local_3b0) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        local_3b0 = (float)fVar23;
      }
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_14 == (float10)local_3b0) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x18 + *(int *)(iVar8 + 8)) = local_3b0 / local_3ac;
    LVar11 = ftol();
    iVar10 = 0x537;
    goto LAB_0051ad9d;
  case 1.86933e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    local_3b0 = fVar2 * _DAT_0061a4fc;
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)local_3b0 <= fVar23) {
      local_3b0 = fVar2 * _DAT_0061a494;
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)local_3b0) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        local_3b0 = (float)fVar23;
      }
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_15 == (float10)local_3b0) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x1c + *(int *)(iVar8 + 8)) = local_3b0 / local_3ac;
    LVar11 = ftol();
    iVar10 = 0x538;
    goto LAB_0051ad9d;
  case 1.87354e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_00610f20 <= fVar23) {
      local_3a4 = (float)local_378 * _DAT_0061a4a8;
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)local_3a4) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        local_3a4 = (float)fVar23;
      }
    }
    else {
      local_3a4 = 0.0;
    }
    local_3b0 = fVar4;
    if (uVar20 != 0) {
      local_3b0 = local_3a4 / local_3b4;
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_16 == (float10)local_3a4) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
    *(float *)(iVar10 + 0x20) = local_3a4 / fVar3;
    *(float *)(iVar10 + 0x24) = local_3b0 / fVar4;
    LVar11 = ftol();
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,0x53b);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
    LVar11 = ftol();
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,0x53c);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
    goto LAB_0051ac35;
  case 1.87494e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_00610f20 <= fVar23) {
      local_3a4 = (float)local_378 * _DAT_0061a4a8;
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)local_3a4) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        local_3a4 = (float)fVar23;
      }
    }
    else {
      local_3a4 = 0.0;
    }
    if (uVar20 != 0) {
      local_3b0 = local_3a4 * local_3b4;
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_17 == (float10)local_3a4) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    iVar10 = *(int *)(iVar8 + 4) * iVar10 + *(int *)(iVar8 + 8);
    *(float *)(iVar10 + 0x20) = local_3b0 / fVar3;
    *(float *)(iVar10 + 0x24) = local_3a4 / fVar4;
    LVar11 = ftol();
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,0x53b);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
    LVar11 = ftol();
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,0x53c);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
    goto LAB_0051aaa1;
  case 1.87914e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_00610f20 <= fVar23) {
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      fVar2 = local_3ac;
      if (fVar23 <= (float10)local_3ac) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        fVar2 = (float)fVar23;
      }
    }
    else {
      fVar2 = 0.0;
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_19 == (float10)fVar2) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    fVar3 = _DAT_00610f20;
    param_1[0x34] = iVar10;
    if (fVar3 < local_3ac) {
      *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x3c + *(int *)(iVar8 + 8)) = fVar2 / local_3ac;
    }
    LVar11 = ftol();
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,0x53e);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
LAB_0051ac35:
    local_390 = 0;
    FUN_0050c010(*param_1,0);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    break;
  case 1.88194e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_00610f20 <= fVar23) {
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)_DAT_00619ab0) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        fVar2 = (float)fVar23;
      }
      else {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_20 == (float10)fVar2) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x40 + *(int *)(iVar8 + 8)) = fVar2;
    LVar11 = ftol();
    iVar10 = 0x540;
LAB_0051ad9d:
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,iVar10);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
LAB_0051adb2:
    local_390 = 0;
    FUN_0050c010(*param_1,0);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    break;
  case 1.88475e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (local_37c != 3) {
      if (local_37c == 4) {
        GetWindowTextA(param_4,local_370,0x100);
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        if ((float10)_DAT_006128e0 <= fVar23) {
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          if (fVar23 <= (float10)_DAT_0061a558) {
            fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          }
          else {
            fVar23 = (float10)_DAT_0061a558;
          }
        }
        else {
          fVar23 = (float10)_DAT_006128e0;
        }
        *(float *)(*(int *)(iVar10 + 0x98) + 0x20) = (float)((float10)_DAT_006106d0 / fVar23);
        _DAT_006495d0 = (double)*(float *)(*(int *)(iVar10 + 0x98) + 0x20);
        FUN_00512930(param_1,*(undefined4 *)(*(int *)(*param_1 + 0x98) + 8));
        SfSetDlgItemText(param_2,0x541,&DAT_0061a540,_DAT_006106d0 / _DAT_006495d0);
        InvalidateRect((HWND)param_1[1],(RECT *)0x0,0);
        local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      }
      else {
        local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
        if (local_37c == 1) {
          WVar25 = SendMessageA(param_4,0x147,0,0);
          local_370[0] = '\0';
          SendMessageA(param_4,0x148,WVar25,(LPARAM)local_370);
          fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
          *(float *)(*(int *)(iVar10 + 0x98) + 0x20) = (float)((float10)_DAT_006106d0 / fVar23);
          _DAT_006495d0 = (double)*(float *)(*(int *)(iVar10 + 0x98) + 0x20);
          FUN_00512930(param_1,*(undefined4 *)(*(int *)(*param_1 + 0x98) + 8));
          InvalidateRect((HWND)param_1[1],(RECT *)0x0,0);
          local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
          local_378 = CONCAT44(local_378._4_4_,(float)local_378);
        }
      }
    }
    break;
  case 1.88895e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (local_37c == 0) {
      iVar15 = FUN_0050bd90(*param_1,0,0,0);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (-1 < iVar15) {
        FUN_0050bfb0(*param_1);
        uVar12 = SendMessageA(param_4,0xf0,0,0);
        iVar10 = *(int *)(*(int *)(iVar10 + 0x98) + 0x90);
        uVar20 = *(uint *)(iVar10 + 0xf8);
        *(uint *)(iVar10 + 0xf8) = (uVar12 ^ uVar20) & 1 ^ uVar20;
        FUN_0050c010(*param_1,0);
        local_390 = 0;
        local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      }
    }
    break;
  case 1.89035e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (local_37c == 0) {
      iVar15 = FUN_0050bd90(*param_1,0,0,0);
      local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
      local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      if (-1 < iVar15) {
        FUN_0050bfb0(*param_1);
        LVar13 = SendMessageA(param_4,0xf0,0,0);
        *(uint *)(*(int *)(iVar10 + 0x98) + 4) =
             (uint)(LVar13 == 0) << 1 | *(uint *)(*(int *)(iVar10 + 0x98) + 4) & 0xfffffffd;
        FUN_0050c010(*param_1,0);
        local_390 = 0;
        local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
        local_378 = CONCAT44(local_378._4_4_,(float)local_378);
      }
    }
    break;
  case 1.89876e-42:
    local_38c = CONCAT44(local_38c._4_4_,(float)local_38c);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((local_37c == 0x100) ||
       (local_38c = CONCAT44(local_38c._4_4_,(float)local_38c),
       local_378 = CONCAT44(local_378._4_4_,(float)local_378), local_37c != 0x200)) break;
    GetWindowTextA(param_4,local_370,0x100);
    fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
    if ((float10)_DAT_0061a564 <= fVar23) {
      fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
      if (fVar23 <= (float10)_DAT_0061a560) {
        fVar23 = (float10)_SfTextToDoubleToken_8(local_370,0);
        fVar2 = (float)fVar23;
      }
      else {
        fVar2 = 360.0;
      }
    }
    else {
      fVar2 = -360.0;
    }
    _CIpow();
    local_38c = ftol();
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if ((float10)local_38c / extraout_ST0_18 == (float10)fVar2) break;
    iVar10 = FUN_0050bd90(*param_1,0,0,fVar6);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
    if (iVar10 < 0) break;
    FUN_0050bfb0(*param_1);
    iVar10 = *(int *)(*param_1 + 0x98);
    iVar10 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c),2);
    param_1[0x34] = iVar10;
    *(float *)(*(int *)(iVar8 + 4) * iVar10 + 0x28 + *(int *)(iVar8 + 8)) =
         fVar2 * (float)_DAT_0061a4d0;
    LVar11 = ftol();
    WVar25 = 1;
    UVar24 = 0x610;
    pHVar14 = GetDlgItem(param_2,0x54c);
    SendMessageA(pHVar14,UVar24,WVar25,LVar11);
LAB_0051aaa1:
    local_390 = 0;
    FUN_0050c010(*param_1,0);
    local_378 = CONCAT44(local_378._4_4_,(float)local_378);
  }
LAB_0051adcf:
  FUN_005b84d0(DAT_0064b138,1);
  if (local_390 == 0) {
    FUN_0050c380(*param_1,param_1[0x34]);
    FUN_0053eb20(*(undefined4 *)(*param_1 + 0x90));
    DAT_0064767c = DAT_0064767c | 0x800;
    *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x10;
  }
  return local_390;
}


