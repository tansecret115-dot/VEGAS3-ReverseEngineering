/* Module: mcplugrw.dll
   Function: FUN_0040c310
   Address: 0040c310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040c310(undefined4 *param_1,void *param_2)

{
  int *this;
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int iVar5;
  int iVar6;
  uchar *lpText;
  BYTE *pBVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar8;
  CHAR *pCVar9;
  LPCSTR pCVar10;
  HKEY pHVar11;
  UINT UVar12;
  HKEY pHVar13;
  HKEY local_65c;
  HKEY local_658;
  HKEY local_654;
  HKEY local_650;
  HKEY local_64c;
  int local_648;
  HKEY local_644;
  void *local_640;
  int local_63c;
  CHAR local_638 [128];
  CHAR local_5b8 [128];
  CHAR local_538 [11];
  HKEY__ local_52d [12];
  CHAR local_4fb [24];
  undefined1 local_4e3;
  HKEY local_4c8;
  HKEY local_4c4 [2];
  int local_4bc;
  undefined4 local_468;
  undefined4 local_464;
  int local_45c;
  undefined4 local_454;
  undefined4 local_450;
  int local_438;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_414;
  undefined4 local_410;
  int local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  int local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  int local_3e4;
  int **local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  void *local_2c4;
  HKEY__ local_2c0 [7];
  uchar local_2a4 [260];
  int *local_1a0 [100];
  CHAR *local_10;
  undefined4 local_8;
  int local_4;
  
  this = DAT_004a8128;
  pCVar9 = local_638;
  for (iVar8 = 0xde; iVar8 != 0; iVar8 = iVar8 + -1) {
    pCVar9[0] = '\0';
    pCVar9[1] = '\0';
    pCVar9[2] = '\0';
    pCVar9[3] = '\0';
    pCVar9 = pCVar9 + 4;
  }
  local_450 = param_1[0xc];
  local_414 = param_1[0xb];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0x80004005;
  local_3e4 = *(int *)((int)param_2 + 0x590);
  local_2c4 = param_2;
  if (local_3e4 != 0) {
    lstrcpynA(local_4fb,(LPCSTR)((int)param_2 + 0x25),0x19);
    local_4e3 = 0;
  }
  local_4bc = 0x1b7e;
  local_3f4 = 0;
  local_3f0 = 0;
  FUN_004101e0(this,local_538,0xb);
  FUN_00415fd0(local_638,0x80);
  FUN_00416360(local_5b8,0x80);
  local_468 = *(undefined4 *)((int)param_2 + 0x570);
  local_464 = *(undefined4 *)((int)param_2 + 0x574);
  local_10 = local_4fb;
  local_4 = local_3e4;
  local_2d8 = local_1a0;
  local_410 = 0;
  local_40c = 0;
  local_408 = 1;
  local_3fc = 0;
  local_3f8 = 0;
  local_404 = 0;
  local_400 = 0;
  local_8 = 0;
  local_1a0[0] = this;
  local_654 = (HKEY)0x0;
  local_658 = (HKEY)0x0;
  local_644 = (HKEY)0x0;
  local_648 = 0;
  FUN_00416bc0(this,(int *)&local_654,(int *)&local_644);
  iVar8 = FUN_00406230((int)local_654,(int)local_644);
  if (iVar8 == 0) {
    local_654 = (HKEY)0x0;
    local_644 = (HKEY)0x0;
  }
  bVar1 = false;
  do {
    iVar8 = FUN_00412170(this,&local_63c,(LPSTR)local_2c0,0x19);
    if (-1 < iVar8) {
      if (local_63c == 0) break;
      iVar8 = FUN_00412e90(this,&local_648,(uint *)&local_65c,local_2c0,(uint *)&local_658,
                           (undefined4 *)0x0);
      if (((-1 < iVar8) && (local_654 < local_65c)) &&
         (iVar8 = FUN_00406230((int)local_65c,(int)local_658), iVar8 != 0)) {
        local_654 = local_65c;
        local_644 = local_658;
        FUN_00411eb0(this,(uchar *)local_2c0);
        bVar1 = true;
      }
    }
  } while (local_63c != 0);
  if (bVar1) {
    FUN_00412cf0(this,(HKEY)0x1,local_654);
    FUN_00412f90(this,&local_648,(int *)&local_65c,1);
    FUN_00416cd0(this,(int)local_654,(int)local_644);
    FUN_00416df0(this,(int)local_65c,(int)local_658);
  }
  FUN_00416bc0(this,(int *)&local_654,(int *)&local_644);
  iVar8 = FUN_00406230((int)local_654,(int)local_644);
  if (iVar8 == 0) {
    local_654 = (HKEY)0x0;
    local_644 = (HKEY)0x0;
  }
  local_454 = 0;
  iVar8 = FUN_00414230(this,(LPBYTE)local_52d);
  if (iVar8 < 0) {
LAB_0040c620:
    uVar3 = FUN_00415c50(this,2);
    if (uVar3 != 0) {
      if (local_654 == (HKEY)0x0) {
        FUN_00412cf0(this,(HKEY)0x2,(HKEY)0x0);
        iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
        FUN_00412e10(this,(uchar *)local_52d,2,0);
        uVar3 = FUN_00410900(this);
        local_658 = (HKEY)(uVar3 & 0xffff);
      }
      else {
        iVar8 = FUN_00412cf0(this,(HKEY)0x1,local_654);
        FUN_00405fc0((int)local_654,(int)local_644);
        local_65c = local_654;
        local_658 = local_644;
        FUN_00413180(this,local_654,local_654);
        if (iVar8 < 0) {
          iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
          if ((iVar8 == -0x7ffb1ec0) || (iVar8 == -0x7ffb1ecb)) {
            iVar8 = -0x7ffb1ed3;
          }
          local_65c = local_654;
        }
        else {
          iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
          uVar3 = FUN_00410900(this);
          local_658 = (HKEY)(uVar3 & 0xffff);
          FUN_00412e10(this,(uchar *)local_52d,1,(uint)local_65c);
          if ((((-1 < iVar8) || (iVar8 == -0x7ffb1ecb)) || (iVar8 == -0x7ffb1eb2)) ||
             (iVar8 == -0x7ffb1eb1)) {
            FUN_00415d10(this,2);
          }
        }
      }
      goto LAB_0040cabd;
    }
    uVar3 = FUN_00415c50(this,0x20);
    if (uVar3 == 0) {
LAB_0040c8d4:
      if (param_1[4] == 0) {
        if (local_654 == (HKEY)0x0) {
          FUN_00412cf0(this,(HKEY)0x2,(HKEY)0x0);
          pHVar11 = (HKEY)0x0;
          iVar8 = 2;
        }
        else {
          iVar8 = FUN_00412cf0(this,(HKEY)0x1,local_654);
          FUN_00405fc0((int)local_654,(int)local_644);
          local_65c = local_654;
          local_658 = local_644;
          if (iVar8 < 0) {
            FUN_00412cf0(this,(HKEY)0x2,(HKEY)0x0);
            pHVar11 = (HKEY)0x0;
            iVar8 = 2;
          }
          else {
            FUN_00413180(this,local_654,local_654);
            iVar8 = 1;
            pHVar11 = local_65c;
          }
        }
        FUN_00412e10(this,(uchar *)local_52d,iVar8,(uint)pHVar11);
        iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
        if (((-1 < iVar8) || (iVar8 == -0x7ffb1ecb)) && (local_65c != local_654)) {
          uVar3 = FUN_00410900(this);
          local_658 = (HKEY)(uVar3 & 0xffff);
          iVar5 = FUN_00405fc0((int)local_65c,(int)local_658);
          if (iVar5 == 0) {
            FUN_00405fc0((int)local_65c,0);
            local_658 = (HKEY)0x0;
          }
          FUN_00416df0(this,(int)local_65c,(int)local_658);
        }
      }
      else {
        iVar8 = FUN_00405fc0(param_1[4],param_1[5]);
        if (iVar8 == 0) {
          UVar12 = 0x30;
          pCVar10 = FUN_0041f9f0(DAT_004a811c,0x2749);
          pCVar4 = FUN_0041f9f0(DAT_004a811c,0x274a);
          MessageBoxA((HWND)0x0,pCVar4,pCVar10,UVar12);
          if (local_3e4 != 0) {
            return 0;
          }
          FUN_00416dd0(this,0,0);
          return 0;
        }
        local_65c = (HKEY)param_1[4];
        local_658 = (HKEY)param_1[5];
        iVar8 = FUN_00412cf0(this,(HKEY)0x1,local_65c);
        FUN_00413180(this,local_65c,local_65c);
        if (iVar8 < 0) {
          iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
          if (iVar8 == -0x7ffb1ec0) {
            iVar8 = -0x7ffb1ed3;
          }
          local_65c = (HKEY)param_1[4];
          local_454 = 1;
        }
        else {
          iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
          FUN_00412e10(this,(uchar *)local_52d,1,(uint)local_65c);
          local_454 = 1;
        }
      }
      goto LAB_0040cabd;
    }
    FUN_00416cb0(this,(int *)&local_64c,(int *)&local_650);
    iVar8 = FUN_00406230((int)local_64c,(int)local_650);
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x398) == 0)) {
      FUN_00415d10(this,0x20);
      goto LAB_0040c8d4;
    }
    iVar8 = 1;
    local_4c8 = local_64c;
    local_4c4[0] = local_650;
    local_438 = 1;
    FUN_00415d10(this,0x20);
    FUN_00407b80(local_414,(int)local_638);
    goto LAB_0040d3b0;
  }
  FUN_004142c0((int)this);
  iVar8 = FUN_00412e90(this,&local_648,(uint *)&local_65c,local_52d,(uint *)0x0,(undefined4 *)0x0);
  if (0 < iVar8) {
    switch(iVar8) {
    case 0x4e12c:
    case 0x4e12d:
    case 0x4e12e:
    case 0x4e12f:
    case 0x4e130:
    case 0x4e131:
    case 0x4e132:
    case 0x4e136:
    case 0x4e137:
      goto switchD_0040c696_caseD_4e12c;
    default:
      goto switchD_0040c696_caseD_4e133;
    }
  }
  if (((iVar8 != 0) && (iVar8 != -0x7ffb1ecb)) && (iVar8 != -0x7ffb1eb2)) {
switchD_0040c696_caseD_4e133:
    local_52d[0].unused._0_1_ = 0;
    goto LAB_0040c620;
  }
switchD_0040c696_caseD_4e12c:
  uVar2 = FUN_00410990(this,(LPCSTR)local_52d);
  local_658 = (HKEY)(uint)uVar2;
  iVar5 = FUN_00406230((int)local_65c,(int)local_658);
  if ((iVar5 == 0) || (iVar5 = FUN_00411eb0(this,(uchar *)local_52d), iVar5 < 0)) goto LAB_0040c620;
  if ((iVar8 == 0x4e12e) && (local_654 <= local_65c)) {
    FUN_00411740(this,1);
  }
  if (local_65c <= local_654) goto LAB_0040c620;
  FUN_00412cf0(this,(HKEY)0x1,local_65c);
  iVar8 = FUN_00412f90(this,&local_648,(int *)&local_65c,1);
  uVar3 = FUN_00410900(this);
  local_658 = (HKEY)(uVar3 & 0xffff);
  if (local_65c != local_654) {
    FUN_00416df0(this,(int)local_65c,(int)local_658);
    FUN_00415d10(this,2);
    iVar5 = FUN_00405fc0((int)local_65c,(int)local_658);
    if (iVar5 == 0) {
      FUN_00405fc0((int)local_65c,0);
      local_658 = (HKEY)0x0;
    }
  }
LAB_0040cabd:
  param_1[1] = local_658;
  local_4c4[0] = local_658;
  local_45c = local_648;
  local_2d4 = 0;
  *param_1 = local_65c;
  local_4c8 = local_65c;
  iVar5 = FUN_0040bf70((int)local_638);
  if (iVar8 != 0x4e12e) {
    FUN_00402880(param_2);
  }
  if (iVar8 == -0x7ffb1ed3) {
    if (local_3e4 == 0) {
      local_650 = (HKEY)0x0;
      local_64c = (HKEY)0x0;
      FUN_0042e410(&local_640,(LPCSTR)0x0,(LPCSTR)0x0);
      if (local_640 != (void *)0x0) {
        FUN_0042ea90((int)local_640,(int *)&local_650,0);
        FUN_0042ead0((int)local_640,(int *)&local_64c,0);
        FUN_0042e850(local_640);
      }
      if (((local_650 != (HKEY)0x0) &&
          (iVar6 = FUN_00406230((int)local_650,(int)local_64c), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x398) != 0)) {
        local_4c8 = local_650;
        local_4c4[0] = local_64c;
        FUN_00407b80(local_414,(int)local_638);
        iVar8 = 1;
        goto LAB_0040d3b0;
      }
    }
LAB_0040cbd5:
    switch(iVar8) {
    case -0x7ffb1ed3:
      if (local_3e4 != 0) {
        local_3f8 = 3;
        local_4c8 = DAT_004a84f4;
        local_4c4[0] = (HKEY)0x0;
        FUN_00406430((int)local_638);
        FUN_00405fc0((int)local_4c8,(int)local_4c4[0]);
        local_4bc = 0x1b7f;
        goto LAB_0040d3a4;
      }
      goto joined_r0x0040d360;
    default:
      goto switchD_0040cbe4_caseD_8004e12e;
    case -0x7ffb1ed1:
      UVar12 = 0x30;
      pCVar10 = FUN_0041f9f0(DAT_004a811c,0x2713);
      lpText = FUN_0041f9f0(DAT_004a811c,0x272e);
LAB_0040ce54:
      MessageBoxA((HWND)0x0,(LPCSTR)lpText,pCVar10,UVar12);
LAB_0040ce5c:
      if (local_3e4 == 0) {
        FUN_00416dd0(this,0,0);
      }
      return 0;
    case -0x7ffb1ed0:
      UVar12 = 0x30;
      pCVar10 = FUN_0041f9f0(DAT_004a811c,0x2713);
      pCVar4 = FUN_0041f9f0(DAT_004a811c,0x2730);
      iVar8 = 0;
      MessageBoxA((HWND)0x0,pCVar4,pCVar10,UVar12);
      local_4c8 = (HKEY)0x0;
      local_4c4[0] = (HKEY)0x0;
      break;
    case -0x7ffb1ecc:
      local_3f8 = 3 - (uint)(iVar5 != 0);
      FUN_00406430((int)local_638);
      uVar3 = FUN_004062e0((int)local_65c,local_3f8);
      if ((uVar3 & 8) != 0) {
        param_1[8] = 1;
      }
      if ((uVar3 & 4) != 0) {
        pBVar7 = FUN_0041f9f0(DAT_004a811c,0x2729);
        FUN_00420fe0(local_2a4,pBVar7);
        param_1[7] = 1;
        UVar12 = 0x30;
        pCVar10 = FUN_0041f9f0(DAT_004a811c,0x2713);
        MessageBoxA((HWND)0x0,(LPCSTR)local_2a4,pCVar10,UVar12);
        if (local_3e4 == 0) {
          FUN_00416dd0(this,0,0);
        }
        return 1;
      }
      pBVar7 = FUN_0041f9f0(DAT_004a811c,0x272b - (param_1[8] != 0));
      FUN_00420fe0(local_2a4,pBVar7);
      param_1[7] = 0;
      if (param_1[8] == 0) goto LAB_0040ce5c;
      iVar8 = FUN_00406450();
      if (1 < iVar8) {
        local_4bc = 0x1b81;
      }
      local_4c8 = (HKEY)0x0;
      local_4c4[0] = (HKEY)0x0;
      FUN_00406490(&local_4c8,local_4c4,0);
      FUN_00407b80(local_414,(int)local_638);
      iVar8 = 1;
      break;
    case -0x7ffb1ecb:
switchD_0040cbe4_caseD_8004e135:
      local_3f8 = 3;
      FUN_00406430((int)local_638);
      if (local_40c == 0) {
LAB_0040cfad:
        local_4bc = FUN_004066e0((uint)local_638);
      }
      else {
        if (iVar8 == 0x4e130) {
          local_408 = 0;
          FUN_00406560((int)param_2,3,(int)local_65c,(int)local_658,(int *)&local_650,
                       (int *)&local_64c);
          iVar8 = FUN_004087d0((int)local_638,(int)local_650,(int)local_64c);
          if (iVar8 == 0) {
            param_1[7] = 0;
            if (local_3e4 == 0) {
              FUN_00416dd0(this,0,0);
            }
            param_1[6] = 0x4e130;
            return 1;
          }
        }
        else {
          local_408 = 1;
        }
LAB_0040d2c1:
        local_4bc = FUN_004066e0((uint)local_638);
      }
      goto LAB_0040d3a4;
    }
  }
  else {
    if (iVar8 < -0x7ffb1ebe) {
      if (iVar8 != -0x7ffb1ebf) goto LAB_0040cbd5;
      FUN_0041f9f0(DAT_004a811c,0x2725);
      pBVar7 = FUN_0041f9f0(DAT_004a811c,0x2733);
      FUN_00420fe0(local_2a4,pBVar7);
      lpText = local_2a4;
      UVar12 = 0x30;
      pCVar10 = &DAT_004a82d5;
      goto LAB_0040ce54;
    }
    if (iVar8 < 0x4e130) {
      if (iVar8 == 0x4e12f) {
        local_3f8 = 3 - (uint)(iVar5 != 0);
        FUN_00406430((int)local_638);
        if (7 < local_45c) {
          bVar1 = FUN_004117b0(this);
          if (CONCAT31(extraout_var,bVar1) != 1) {
            if (iVar5 == 0) goto LAB_0040cfc3;
            FUN_00406560((int)param_2,2,(int)local_65c,(int)local_658,(int *)&local_650,
                         (int *)&local_64c);
            iVar8 = FUN_004087d0((int)local_638,(int)local_650,(int)local_64c);
            if (iVar8 != 0) goto LAB_0040cfad;
          }
          param_1[7] = 0;
LAB_0040cf82:
          if (local_3e4 != 0) {
            return 1;
          }
          FUN_00416dd0(this,0,0);
          return 1;
        }
        pBVar7 = FUN_0041f9f0(DAT_004a811c,0x271a);
        FUN_00420fe0(local_2a4,pBVar7);
        UVar12 = 0x30;
        pCVar10 = FUN_0041f9f0(DAT_004a811c,0x2724);
        MessageBoxA((HWND)0x0,(LPCSTR)local_2a4,pCVar10,UVar12);
        bVar1 = FUN_004117b0(this);
        if (CONCAT31(extraout_var_00,bVar1) == 1) {
          param_1[7] = 0;
          if (local_3e4 != 0) {
            return 1;
          }
          FUN_00416dd0(this,0,0);
          return 1;
        }
        if (iVar5 == 0) goto LAB_0040cfad;
        FUN_00406560((int)param_2,2,(int)local_65c,(int)local_658,(int *)&local_650,
                     (int *)&local_64c);
        iVar8 = FUN_004087d0((int)local_638,(int)local_650,(int)local_64c);
        if (iVar8 == 0) {
          param_1[7] = 0;
          if (local_3e4 != 0) {
            return 1;
          }
          FUN_00416dd0(this,0,0);
          return 1;
        }
        goto LAB_0040d2c1;
      }
      if (iVar8 < 0x4e12d) {
        if (iVar8 == 0x4e12c) {
          param_1[6] = 0x4e12c;
          goto LAB_0040cf82;
        }
        if (iVar8 == -0x7ffb1eb2) goto switchD_0040d0d7_caseD_4e136;
        if (iVar8 == -0x7ffb1eb1) {
          iVar8 = FUN_00405370((int)local_638,(int)local_4c8,(int)local_4c4[0]);
          goto LAB_0040d3b0;
        }
      }
      else {
        if (iVar8 == 0x4e12d) goto switchD_0040d0d7_caseD_4e131;
        if (iVar8 == 0x4e12e) {
          param_1[7] = 0;
          param_1[6] = 0x4e12e;
          goto LAB_0040cf82;
        }
      }
    }
    else {
      switch(iVar8) {
      case 0x4e130:
        goto switchD_0040cbe4_caseD_8004e135;
      case 0x4e131:
switchD_0040d0d7_caseD_4e131:
        bVar1 = FUN_004117b0(this);
        if (CONCAT31(extraout_var_01,bVar1) == 1) {
          param_1[7] = 0;
          param_1[6] = iVar8;
          if (local_3e4 == 0) {
            FUN_00416dd0(this,0,0);
          }
          goto LAB_0040d109;
        }
        local_3f8 = 3 - (uint)(iVar5 != 0);
        FUN_00406430((int)local_638);
        if (iVar5 != 0) {
          FUN_00406560((int)param_2,2,(int)local_65c,(int)local_658,(int *)&local_650,
                       (int *)&local_64c);
          iVar5 = FUN_004087d0((int)local_638,(int)local_650,(int)local_64c);
          if (iVar5 != 0) goto LAB_0040d2c1;
          goto LAB_0040d17f;
        }
        goto LAB_0040cfad;
      case 0x4e132:
        bVar1 = FUN_004117b0(this);
        if (CONCAT31(extraout_var_02,bVar1) != 1) {
          local_3f8 = 1;
          FUN_00406430((int)local_638);
          FUN_00406560((int)param_2,1,(int)local_65c,(int)local_658,(int *)&local_650,
                       (int *)&local_64c);
          iVar5 = FUN_004087d0((int)local_638,(int)local_650,(int)local_64c);
          if (iVar5 != 0) {
LAB_0040cfc3:
            local_4bc = FUN_004066e0((uint)local_638);
            goto LAB_0040d3a4;
          }
        }
LAB_0040d17f:
        param_1[7] = 0;
        if (local_3e4 == 0) {
          FUN_00416dd0(this,0,0);
          param_1[6] = iVar8;
          return 1;
        }
LAB_0040d109:
        param_1[6] = iVar8;
        return 1;
      case 0x4e136:
      case 0x4e137:
switchD_0040d0d7_caseD_4e136:
        iVar8 = FUN_00405370((int)local_638,(int)local_4c8,(int)local_4c4[0]);
        if (iVar8 != 0) {
          FUN_00411740(this,1);
          FUN_00415ca0(this,0x10);
        }
        goto LAB_0040d3b0;
      }
    }
switchD_0040cbe4_caseD_8004e12e:
    FUN_00411740(this,0);
    FUN_00406560((int)param_2,1,(int)local_65c,(int)local_658,(int *)&local_64c,(int *)&local_650);
    if (0 < (int)local_64c) {
      FUN_00411520(this,local_64c);
    }
    if (0 < (int)local_650) {
      FUN_00411660(this,local_650);
    }
joined_r0x0040d360:
    if (iVar5 == 0) {
      local_3f8 = 3;
      FUN_00406430((int)local_638);
      local_4bc = 0x1b7e;
    }
    else {
      local_3f8 = 2;
      FUN_00406430((int)local_638);
      local_4bc = 0x1b7d;
    }
LAB_0040d3a4:
    iVar8 = FUN_0040ba30((int)local_638);
  }
LAB_0040d3b0:
  param_1[8] = local_438;
  if (local_438 == 0) {
    *param_1 = local_4c8;
    param_1[1] = local_4c4[0];
    if (local_3e4 != 0) goto LAB_0040d403;
    pHVar11 = (HKEY)0x0;
    pHVar13 = (HKEY)0x0;
  }
  else {
    param_1[2] = local_4c8;
    param_1[3] = local_4c4[0];
    pHVar11 = local_4c8;
    pHVar13 = local_4c4[0];
    if (local_3e4 != 0) goto LAB_0040d403;
  }
  FUN_00416dd0(this,(int)pHVar11,(int)pHVar13);
LAB_0040d403:
  param_1[7] = local_42c;
  param_1[10] = local_2d0;
  param_1[9] = local_428;
  iVar5 = FUN_00412f90(this,&local_648,(int *)&local_65c,2);
  param_1[6] = iVar5;
  iVar5 = FUN_00411990(this);
  if ((iVar5 != 0) && (local_438 == 0)) {
    iVar5 = this[0x1fc];
    param_1[0xd] = iVar5;
    param_1[0xe] = this[0x1fd];
    if (iVar5 == 0) {
      iVar8 = 0;
    }
  }
  return iVar8;
}


