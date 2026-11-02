/* Module: vegas30.exe
   Function: FUN_0051afc0
   Address: 0051afc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0051afc0(int *param_1,HWND param_2,undefined4 param_3,uint param_4,HWND param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  SHORT SVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  HWND pHVar10;
  undefined4 uVar11;
  float fVar12;
  LPARAM LVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
  float10 fVar19;
  uint local_1e8;
  float local_1dc;
  float local_1d8;
  uint local_1c8;
  float local_1c4;
  float local_1b8 [16];
  float local_178;
  float local_174;
  undefined4 local_168;
  undefined4 uStack_164;
  float local_15c;
  float local_158;
  float local_13c;
  float local_138;
  undefined1 local_100 [24];
  float local_e8 [25];
  undefined1 local_84 [132];
  
  local_1dc = 1.4013e-45;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar9 = *param_1;
  if (iVar9 == 0) {
    return 1;
  }
  iVar14 = *(int *)(iVar9 + 0x98);
  if (iVar14 == 0) {
    return 1;
  }
  local_1e8 = param_4 & 0xffff;
  if (7 < (param_4 & 0xffff)) {
    return 1;
  }
  iVar7 = FUN_00522a00(0xffffffff);
  iVar8 = FUN_0050c470(*(undefined4 *)(iVar9 + 0x98),*(undefined4 *)(iVar14 + 0x88),
                       *(undefined4 *)(iVar14 + 0x8c),local_100,0,0,0);
  if (iVar8 == -1) {
    return 1;
  }
  if (*(int *)(iVar14 + 0x9c) == 1) {
    iVar9 = FUN_0050c470(*(undefined4 *)(iVar9 + 0x98),*(undefined4 *)(iVar14 + 0x88),
                         *(undefined4 *)(iVar14 + 0x8c),local_84,1,0,0);
joined_r0x0051b0c3:
    if (iVar9 == -1) {
      return 1;
    }
  }
  else if (*(int *)(iVar14 + 0x9c) == 2) {
    iVar9 = FUN_0050c470(*(undefined4 *)(iVar9 + 0x98),*(undefined4 *)(iVar14 + 0x88),
                         *(undefined4 *)(iVar14 + 0x8c),local_84,2,0,0);
    goto joined_r0x0051b0c3;
  }
  pfVar15 = local_e8;
  pfVar16 = local_1b8;
  for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  FUN_005a61e0();
  FUN_005a6120(local_1b8,local_1b8,-(double)CONCAT44(uStack_164,local_168),0);
  fVar19 = (float10)FUN_005a5f80(iVar14 + 0x24);
  fVar1 = (float)fVar19;
  fVar19 = (float10)FUN_005a5ff0(iVar14 + 0x24);
  fVar2 = (float)fVar19;
  fVar19 = (float10)FUN_005a5f80(local_1b8);
  fVar3 = (float)fVar19;
  fVar19 = (float10)FUN_005a5ff0(local_1b8);
  fVar4 = (float)fVar19;
  local_1d8 = fVar4;
  if (fVar4 < fVar3) {
    local_1d8 = fVar3;
  }
  local_1c4 = 1.0;
  fVar12 = fVar4;
  if (fVar4 < _DAT_00610f20) {
    fVar12 = -fVar4;
  }
  if (fVar12 <= (float)_DAT_0061a3b8) {
    fVar12 = fVar2;
    if (fVar2 < _DAT_00610f20) {
      fVar12 = -fVar2;
    }
    if ((float)_DAT_0061a3b8 < fVar12) {
      local_1c4 = fVar1 / fVar2;
    }
  }
  else {
    local_1c4 = fVar3 / fVar4;
  }
  iVar9 = *(int *)(iVar14 + 4) << 0x18;
  local_1c8 = iVar9 >> 0x1f;
  SVar6 = GetKeyState(0x11);
  if (SVar6 < 0) {
    local_1c8 = (uint)(-1 < iVar9);
  }
  iVar9 = GetDlgCtrlID(param_5);
  FUN_0050bd90(*param_1,0,0,iVar9);
  FUN_0050bfb0(*param_1);
  FUN_005b83b0();
  iVar9 = *(int *)(iVar14 + 0x9c);
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      pHVar10 = GetDlgItem(param_2,0x525);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),1)
        ;
        param_1[0x34] = iVar8;
        iVar9 = *(int *)(iVar7 + 4);
        iVar14 = *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = (float)iVar7;
        fVar2 = local_1d8;
        if (local_1d8 < _DAT_00610f20) {
          fVar2 = -local_1d8;
        }
        if ((float)_DAT_0061a3b8 < fVar2) {
          fVar1 = fVar1 / local_1d8;
        }
        *(float *)(iVar9 * iVar8 + iVar14 + 0x4c) = fVar1;
        local_1dc = 0.0;
        goto LAB_0051c7c6;
      }
      pHVar10 = GetDlgItem(param_2,0x526);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),1)
        ;
        param_1[0x34] = iVar8;
        iVar9 = *(int *)(iVar7 + 4);
        iVar14 = *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = (float)iVar7;
        fVar2 = local_1d8;
        if (local_1d8 < _DAT_00610f20) {
          fVar2 = -local_1d8;
        }
        if ((float)_DAT_0061a3b8 < fVar2) {
          fVar1 = fVar1 / local_1d8;
        }
        *(float *)(iVar9 * iVar8 + iVar14 + 0x50) = fVar1;
        local_1dc = 0.0;
        goto LAB_0051c7c6;
      }
      pHVar10 = GetDlgItem(param_2,0x528);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),1)
        ;
        param_1[0x34] = iVar9;
        iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar9 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = fVar3;
        if (fVar3 < _DAT_00610f20) {
          fVar1 = -fVar3;
        }
        fVar2 = _DAT_00619ab0;
        if ((float)_DAT_0061a3b8 < fVar1) {
          fVar2 = (float)iVar9 / fVar3;
        }
        *(float *)(iVar14 + 0x54) = fVar2;
        if (local_1c8 != 0) {
          local_1dc = 0.0;
          *(float *)(iVar14 + 0x58) = ((fVar2 * fVar3) / local_1c4) / fVar4;
          goto LAB_0051c7c6;
        }
      }
      else {
        pHVar10 = GetDlgItem(param_2,0x52a);
        if (param_5 != pHVar10) {
          pHVar10 = GetDlgItem(param_2,0x52c);
          if (param_5 == pHVar10) {
            iVar9 = *(int *)(*param_1 + 0x98);
            iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                 *(undefined4 *)(iVar9 + 0x8c),1);
            param_1[0x34] = iVar9;
            iVar9 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
            if ((local_1e8 == 4) || (local_1e8 == 5)) {
              SendMessageA(param_5,0x60a,0,0);
              LVar13 = ftol();
              SendMessageA(param_5,0x610,0,LVar13);
              iVar14 = ftol();
            }
            else {
              uVar11 = ftol();
              iVar14 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,5,uVar11);
            }
            if ((float)iVar14 * (float)_DAT_0061a4d0 != *(float *)(iVar9 + 0x5c)) {
              *(float *)(iVar9 + 0x5c) = (float)iVar14 * (float)_DAT_0061a4d0;
              local_1dc = 0.0;
            }
          }
          else {
            pHVar10 = GetDlgItem(param_2,0x52e);
            if (param_5 == pHVar10) {
              iVar9 = *(int *)(*param_1 + 0x98);
              iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                   *(undefined4 *)(iVar9 + 0x8c),1);
              param_1[0x34] = iVar9;
              iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
              iVar9 = _Trackbar_DefScrollProc_20(param_3,param_4,param_5,1,5);
              if ((float)iVar9 / local_1d8 != *(float *)(iVar14 + 0x70)) {
                *(float *)(iVar14 + 0x70) = (float)iVar9 / local_1d8;
                local_1dc = 0.0;
              }
            }
            else {
              pHVar10 = GetDlgItem(param_2,0x530);
              if (param_5 == pHVar10) {
                iVar9 = *(int *)(*param_1 + 0x98);
                iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                     *(undefined4 *)(iVar9 + 0x8c),1);
                param_1[0x34] = iVar9;
                iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
                iVar9 = _Trackbar_DefScrollProc_20(param_3,param_4,param_5,1,10);
                if ((float)iVar9 * _DAT_0061a580 != *(float *)(iVar14 + 0x74)) {
                  *(float *)(iVar14 + 0x74) = (float)iVar9 * _DAT_0061a580;
                  local_1dc = 0.0;
                }
              }
            }
          }
          goto LAB_0051c7c6;
        }
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),1)
        ;
        param_1[0x34] = iVar9;
        iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar9 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = fVar4;
        if (fVar4 < _DAT_00610f20) {
          fVar1 = -fVar4;
        }
        fVar2 = _DAT_00619ab0;
        if ((float)_DAT_0061a3b8 < fVar1) {
          fVar2 = (float)iVar9 / fVar4;
        }
        *(float *)(iVar14 + 0x58) = fVar2;
        if (local_1c8 != 0) {
          local_1dc = 0.0;
          *(float *)(iVar14 + 0x54) = (fVar2 * fVar4 * local_1c4) / fVar3;
          goto LAB_0051c7c6;
        }
      }
    }
    else {
      if (iVar9 != 2) goto LAB_0051c7c6;
      pHVar10 = GetDlgItem(param_2,0x537);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),2)
        ;
        param_1[0x34] = iVar8;
        iVar9 = *(int *)(iVar7 + 4);
        iVar14 = *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = (float)iVar7;
        fVar2 = local_1d8;
        if (local_1d8 < _DAT_00610f20) {
          fVar2 = -local_1d8;
        }
        if ((float)_DAT_0061a3b8 < fVar2) {
          fVar1 = fVar1 / local_1d8;
        }
        *(float *)(iVar9 * iVar8 + iVar14 + 0x18) = fVar1;
        local_1dc = 0.0;
        goto LAB_0051c7c6;
      }
      pHVar10 = GetDlgItem(param_2,0x538);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),2)
        ;
        param_1[0x34] = iVar8;
        iVar9 = *(int *)(iVar7 + 4);
        iVar14 = *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = (float)iVar7;
        fVar2 = local_1d8;
        if (local_1d8 < _DAT_00610f20) {
          fVar2 = -local_1d8;
        }
        if ((float)_DAT_0061a3b8 < fVar2) {
          fVar1 = fVar1 / local_1d8;
        }
        *(float *)(iVar9 * iVar8 + iVar14 + 0x1c) = fVar1;
        local_1dc = 0.0;
        goto LAB_0051c7c6;
      }
      pHVar10 = GetDlgItem(param_2,0x53b);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),2)
        ;
        param_1[0x34] = iVar9;
        iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar9 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = fVar3;
        if (fVar3 < _DAT_00610f20) {
          fVar1 = -fVar3;
        }
        fVar2 = _DAT_00619ab0;
        if ((float)_DAT_0061a3b8 < fVar1) {
          fVar2 = (float)iVar9 / fVar3;
        }
        *(float *)(iVar14 + 0x20) = fVar2;
        if (local_1c8 != 0) {
          local_1dc = 0.0;
          *(float *)(iVar14 + 0x24) = ((fVar2 * fVar3) / local_1c4) / fVar4;
          goto LAB_0051c7c6;
        }
      }
      else {
        pHVar10 = GetDlgItem(param_2,0x53c);
        if (param_5 != pHVar10) {
          pHVar10 = GetDlgItem(param_2,0x54c);
          if (param_5 == pHVar10) {
            iVar9 = *(int *)(*param_1 + 0x98);
            iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                 *(undefined4 *)(iVar9 + 0x8c),2);
            param_1[0x34] = iVar9;
            iVar9 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
            if ((local_1e8 == 4) || (local_1e8 == 5)) {
              SendMessageA(param_5,0x60a,0,0);
              LVar13 = ftol();
              SendMessageA(param_5,0x610,0,LVar13);
              iVar14 = ftol();
            }
            else {
              uVar11 = ftol();
              iVar14 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,5,uVar11);
            }
            if ((float)iVar14 * (float)_DAT_0061a4d0 != *(float *)(iVar9 + 0x28)) {
              *(float *)(iVar9 + 0x28) = (float)iVar14 * (float)_DAT_0061a4d0;
              local_1dc = 0.0;
            }
          }
          else {
            pHVar10 = GetDlgItem(param_2,0x53e);
            if (param_5 == pHVar10) {
              iVar9 = *(int *)(*param_1 + 0x98);
              iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                   *(undefined4 *)(iVar9 + 0x8c),2);
              fVar1 = _DAT_00610f20;
              param_1[0x34] = iVar9;
              iVar9 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
              fVar2 = local_1d8;
              if (local_1d8 < _DAT_00610f20) {
                fVar2 = -local_1d8;
              }
              if ((float)_DAT_0061a3b8 < fVar2) {
                iVar14 = _Trackbar_DefScrollProc_20(param_3,param_4,param_5,1,5);
                fVar1 = (float)iVar14 / local_1d8;
              }
              if (fVar1 != *(float *)(iVar9 + 0x3c)) {
                *(float *)(iVar9 + 0x3c) = fVar1;
                local_1dc = 0.0;
              }
            }
            else {
              pHVar10 = GetDlgItem(param_2,0x540);
              if (param_5 == pHVar10) {
                iVar9 = *(int *)(*param_1 + 0x98);
                iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                     *(undefined4 *)(iVar9 + 0x8c),2);
                param_1[0x34] = iVar9;
                iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
                iVar9 = _Trackbar_DefScrollProc_20(param_3,param_4,param_5,1,10);
                if ((float)iVar9 * _DAT_0061a580 != *(float *)(iVar14 + 0x40)) {
                  *(float *)(iVar14 + 0x40) = (float)iVar9 * _DAT_0061a580;
                  local_1dc = 0.0;
                }
              }
            }
          }
          goto LAB_0051c7c6;
        }
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),2)
        ;
        param_1[0x34] = iVar9;
        iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar9 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar1 = fVar4;
        if (fVar4 < _DAT_00610f20) {
          fVar1 = -fVar4;
        }
        fVar2 = _DAT_00619ab0;
        if ((float)_DAT_0061a3b8 < fVar1) {
          fVar2 = (float)iVar9 / fVar4;
        }
        *(float *)(iVar14 + 0x24) = fVar2;
        if (local_1c8 != 0) {
          local_1dc = 0.0;
          *(float *)(iVar14 + 0x20) = (fVar2 * fVar4 * local_1c4) / fVar3;
          goto LAB_0051c7c6;
        }
      }
    }
    local_1dc = 0.0;
    goto LAB_0051c7c6;
  }
  pHVar10 = GetDlgItem(param_2,0x517);
  if (param_5 == pHVar10) {
    iVar9 = *(int *)(*param_1 + 0x98);
    iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),0);
    param_1[0x34] = iVar9;
    iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
    uVar11 = ftol();
    iVar9 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
    fVar1 = (float)iVar9;
    local_1dc = fVar4;
    if (local_1c8 != 0) {
      local_1dc = fVar1 / local_1c4;
    }
    pfVar15 = (float *)(iVar14 + 0x18);
    bVar18 = _DAT_00619ab0 <= fVar3;
    pfVar16 = local_1b8;
    pfVar17 = pfVar15;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar17 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar17 = pfVar17 + 1;
    }
    if (bVar18) {
      fVar2 = fVar3;
      if (fVar3 < _DAT_00610f20) {
        fVar2 = -fVar3;
      }
      fVar12 = _DAT_00619ab0;
      if ((float)_DAT_0061a3b8 < fVar2) {
        fVar12 = fVar1 / fVar3;
      }
      fVar1 = fVar4;
      if (fVar4 < _DAT_00610f20) {
        fVar1 = -fVar4;
      }
      if (fVar1 <= (float)_DAT_0061a3b8) {
        local_1dc = 1.0;
      }
      else {
        local_1dc = local_1dc / fVar4;
      }
      if ((fVar12 != _DAT_00619ab0) || (local_1dc != _DAT_00619ab0)) {
LAB_0051b62b:
        FUN_005a6440(pfVar15,local_1b8,&local_178,fVar12,local_1dc);
      }
    }
    else {
      *pfVar15 = local_178 - fVar1;
      *(float *)(iVar14 + 0x48) = local_178 - fVar1;
      *(float *)(iVar14 + 0x28) = local_178 + fVar1;
      *(float *)(iVar14 + 0x38) = local_178 + fVar1;
      if (fVar4 < _DAT_00619ab0) {
        *(float *)(iVar14 + 0x1c) = local_174 - local_1dc;
        *(float *)(iVar14 + 0x4c) = local_174 + local_1dc;
        *(float *)(iVar14 + 0x2c) = local_174 - local_1dc;
        *(float *)(iVar14 + 0x3c) = local_174 + local_1dc;
      }
    }
  }
  else {
    pHVar10 = GetDlgItem(param_2,0x518);
    if (param_5 != pHVar10) {
      pHVar10 = GetDlgItem(param_2,0x51a);
      if (param_5 == pHVar10) {
        iVar9 = *(int *)(*param_1 + 0x98);
        iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),0)
        ;
        param_1[0x34] = iVar8;
        iVar9 = *(int *)(iVar7 + 4);
        iVar14 = *(int *)(iVar7 + 8);
        uVar11 = ftol();
        iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
        fVar2 = ((float)iVar7 - local_178) + local_15c;
        if (fVar2 <= fVar1 * _DAT_0061a4fc) {
          fVar2 = fVar1 * _DAT_0061a4fc;
        }
        fVar2 = (((fVar2 + local_178) - local_15c) - local_178) + local_13c;
        if (fVar1 * _DAT_0061a4a0 <= fVar2) {
          fVar2 = fVar1 * _DAT_0061a4a0;
        }
        FUN_005a6090(iVar9 * iVar8 + iVar14 + 0x18,((fVar2 + local_178) - local_13c) - local_178,0);
        local_1dc = 0.0;
      }
      else {
        pHVar10 = GetDlgItem(param_2,0x51c);
        if (param_5 == pHVar10) {
          iVar9 = *(int *)(*param_1 + 0x98);
          iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),
                               0);
          param_1[0x34] = iVar8;
          iVar9 = *(int *)(iVar7 + 4);
          iVar14 = *(int *)(iVar7 + 8);
          uVar11 = ftol();
          iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
          fVar1 = ((float)iVar7 - local_174) + local_158;
          if (fVar1 <= fVar2 * _DAT_0061a4fc) {
            fVar1 = fVar2 * _DAT_0061a4fc;
          }
          fVar1 = (((fVar1 + local_174) - local_158) - local_174) + local_138;
          if (fVar2 * _DAT_0061a4a0 <= fVar1) {
            fVar1 = fVar2 * _DAT_0061a4a0;
          }
          FUN_005a6090(iVar9 * iVar8 + iVar14 + 0x18,0,((fVar1 + local_174) - local_138) - local_174
                      );
          local_1dc = 0.0;
        }
        else {
          pHVar10 = GetDlgItem(param_2,0x520);
          if (param_5 == pHVar10) {
            iVar9 = *(int *)(*param_1 + 0x98);
            iVar8 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                 *(undefined4 *)(iVar9 + 0x8c),0);
            param_1[0x34] = iVar8;
            iVar9 = *(int *)(iVar7 + 4);
            iVar14 = *(int *)(iVar7 + 8);
            uVar11 = ftol();
            iVar7 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
            local_1dc = 0.0;
            *(float *)(iVar9 * iVar8 + iVar14 + 0x78) = (float)iVar7 * _DAT_0061a580;
          }
          else {
            pHVar10 = GetDlgItem(param_2,0x51e);
            if (param_5 == pHVar10) {
              iVar9 = *(int *)(*param_1 + 0x98);
              iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                   *(undefined4 *)(iVar9 + 0x8c),0);
              param_1[0x34] = iVar9;
              iVar9 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
              if ((local_1e8 == 4) || (local_1e8 == 5)) {
                SendMessageA(param_5,0x60a,0,0);
                LVar13 = ftol();
                SendMessageA(param_5,0x610,0,LVar13);
                iVar14 = ftol();
              }
              else {
                uVar11 = ftol();
                iVar14 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,5,uVar11);
              }
              dVar5 = (double)iVar14 * _DAT_0061a4d0;
              if (dVar5 != *(double *)(iVar9 + 0x68)) {
                FUN_005a6120(iVar9 + 0x18,iVar9 + 0x18,dVar5 - *(double *)(iVar9 + 0x68),0);
                local_1dc = 0.0;
                *(double *)(iVar9 + 0x68) = dVar5;
              }
            }
            else {
              pHVar10 = GetDlgItem(param_2,0x520);
              if (param_5 == pHVar10) {
                iVar9 = *(int *)(*param_1 + 0x98);
                iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),
                                     *(undefined4 *)(iVar9 + 0x8c),0);
                param_1[0x34] = iVar9;
                iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
                iVar9 = _Trackbar_DefScrollProc_20(param_3,param_4,param_5,1,5);
                fVar1 = (float)iVar9;
                fVar2 = local_1d8;
                if (local_1d8 < _DAT_00610f20) {
                  fVar2 = -local_1d8;
                }
                if ((float)_DAT_0061a3b8 < fVar2) {
                  if (fVar1 < _DAT_00610f20) {
                    local_1dc = 0.0;
                    *(float *)(iVar14 + 0x74) = _DAT_00610f20 / local_1d8;
                    goto LAB_0051c7c6;
                  }
                  if (local_1d8 < fVar1) {
                    local_1dc = 0.0;
                    *(float *)(iVar14 + 0x74) = local_1d8 / local_1d8;
                    goto LAB_0051c7c6;
                  }
                  *(float *)(iVar14 + 0x74) = fVar1 / local_1d8;
                }
                local_1dc = 0.0;
              }
            }
          }
        }
      }
      goto LAB_0051c7c6;
    }
    iVar9 = *(int *)(*param_1 + 0x98);
    iVar9 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar9 + 0x88),*(undefined4 *)(iVar9 + 0x8c),0);
    param_1[0x34] = iVar9;
    iVar14 = *(int *)(iVar7 + 4) * iVar9 + *(int *)(iVar7 + 8);
    uVar11 = ftol();
    iVar9 = _Spinner_DefScrollProc_24(param_3,param_4,param_5,1,10,uVar11);
    local_1dc = (float)iVar9;
    fVar1 = fVar3;
    if (local_1c8 != 0) {
      fVar1 = local_1dc * local_1c4;
    }
    pfVar15 = (float *)(iVar14 + 0x18);
    bVar18 = _DAT_00619ab0 <= fVar4;
    pfVar16 = local_1b8;
    pfVar17 = pfVar15;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar17 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar17 = pfVar17 + 1;
    }
    if (bVar18) {
      fVar2 = fVar3;
      if (fVar3 < _DAT_00610f20) {
        fVar2 = -fVar3;
      }
      fVar12 = _DAT_00619ab0;
      if ((float)_DAT_0061a3b8 < fVar2) {
        fVar12 = fVar1 / fVar3;
      }
      fVar1 = fVar4;
      if (fVar4 < _DAT_00610f20) {
        fVar1 = -fVar4;
      }
      if (fVar1 <= (float)_DAT_0061a3b8) {
        local_1dc = 1.0;
      }
      else {
        local_1dc = local_1dc / fVar4;
      }
      if ((fVar12 != _DAT_00619ab0) || (local_1dc != _DAT_00619ab0)) goto LAB_0051b62b;
    }
    else {
      *(float *)(iVar14 + 0x1c) = local_174 - local_1dc;
      *(float *)(iVar14 + 0x4c) = local_1dc + local_174;
      *(float *)(iVar14 + 0x2c) = local_174 - local_1dc;
      *(float *)(iVar14 + 0x3c) = local_1dc + local_174;
      if (fVar3 < _DAT_00619ab0) {
        *pfVar15 = local_178 - fVar1;
        *(float *)(iVar14 + 0x48) = local_178 - fVar1;
        *(float *)(iVar14 + 0x28) = fVar1 + local_178;
        *(float *)(iVar14 + 0x38) = fVar1 + local_178;
      }
    }
  }
  FUN_005a6120(pfVar15,pfVar15,local_168,uStack_164,0);
  local_1dc = 0.0;
LAB_0051c7c6:
  FUN_005b84d0();
  FUN_0050c010();
  if (local_1dc == 0.0) {
    FUN_0050c380();
    FUN_0053eb20(*(undefined4 *)(*param_1 + 0x90));
    DAT_0064767c = DAT_0064767c | 0x800;
    *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x10;
  }
  return (int)local_1dc;
}


