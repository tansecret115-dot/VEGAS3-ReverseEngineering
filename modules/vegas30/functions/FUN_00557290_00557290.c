/* Module: vegas30.exe
   Function: FUN_00557290
   Address: 00557290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00557290(HWND param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HWND hWnd;
  int iVar4;
  HDC hdc;
  HGDIOBJ h;
  LPCSTR lpString2;
  int iVar5;
  uint uVar6;
  LPARAM LVar7;
  WPARAM WVar8;
  LRESULT LVar9;
  LONG LVar10;
  int iVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  double *pdVar15;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  BOOL BVar19;
  undefined1 *dwNewLong;
  int *local_260;
  int *local_258;
  undefined4 local_254;
  HWND local_250;
  int local_24c;
  uint local_248;
  undefined8 local_244;
  int local_23c;
  tagRECT local_238;
  tagRECT local_228;
  double local_218;
  uint local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  int local_190 [10];
  undefined1 local_168 [100];
  CHAR local_104 [259];
  undefined1 local_1;
  
  local_254 = 0;
  SetWindowLongA(param_1,8,(LONG)param_2);
  uVar17 = DAT_0064b138;
  iVar5 = param_2[0x60];
  piVar1 = param_2 + 0x60;
  local_23c = iVar5;
  if (((*(uint *)(iVar5 + 0x134) & 0x800) != 0) && ((*(uint *)(iVar5 + 0x134) & 0x1000) == 0)) {
    if (*(undefined4 **)(iVar5 + 0x130) == (undefined4 *)0x0) {
      local_258 = (int *)0x0;
    }
    else {
      local_258 = (int *)**(undefined4 **)(iVar5 + 0x130);
    }
    uVar2 = FUN_005ba4b0(DAT_0064b138,0);
    fVar16 = (float10)FUN_005ba670(uVar17,uVar2,0,0,0,0);
    iVar11 = 0;
    local_244 = (double)fVar16;
    if (0 < (int)local_258) {
      do {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0x130) + 8) + iVar11 * 4);
        if (*(int *)(iVar4 + 4) == 3) {
          FUN_005f7b90(iVar4,(WPARAM)local_244,local_244._4_4_);
          FUN_005f0120(0);
          FUN_005effc0(0);
          *(uint *)(iVar5 + 0x134) = *(uint *)(iVar5 + 0x134) | 0x1000;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_258);
    }
  }
  param_2[0x65] = ~*(uint *)(iVar5 + 0x134) >> 9 & 1;
  param_2[0x66] = *(int *)(iVar5 + 0x110);
  param_2[0x67] = *(int *)(iVar5 + 0x114);
  param_2[0x69] = *(int *)(iVar5 + 0x108);
  if (*param_2 != 0) {
    uVar18 = 0x8001;
    uVar2 = 0;
    uVar17 = 0;
    pHVar3 = GetParent(param_1);
    _SfWndCenter_16(pHVar3,uVar17,uVar2,uVar18);
    *param_2 = 0;
  }
  iVar11 = DAT_0064b324;
  iVar5 = DAT_0064b320;
  pHVar3 = (HWND)FUN_0043bc10(param_1,0x4d3,&DAT_0061aec8,1,0);
  hWnd = GetDlgItem(param_1,0x4cf);
  GetWindowRect(hWnd,&local_238);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_238,2);
  LVar10 = local_238.right;
  iVar5 = local_238.right + 8 + iVar5;
  iVar4 = iVar5 - local_238.right;
  local_238.bottom = iVar11 + 8 + local_238.top;
  local_238.left = local_238.right;
  local_238.right = iVar5;
  SetWindowPos(pHVar3,(HWND)0x0,LVar10,local_238.top,iVar4,local_238.bottom - local_238.top,0x14);
  local_104[0] = '\0';
  param_2[0x62] = 0;
  pHVar3 = GetDlgItem(param_1,0x4d0);
  GetClientRect(pHVar3,&local_228);
  hdc = GetDC(pHVar3);
  h = (HGDIOBJ)SendMessageA(pHVar3,0x31,0,0);
  SelectObject(hdc,h);
  lpString2 = (LPCSTR)FUN_005f2d10();
  lstrcpynA(local_104,lpString2,0x104);
  local_1 = 0;
  SfCalcPathEllipsis(hdc,local_104,local_228.right - local_228.left);
  ReleaseDC(pHVar3,hdc);
  SetDlgItemTextA(param_1,0x4d0,local_104);
  if (*(LPCSTR *)(*piVar1 + 0x154) != (LPCSTR)0x0) {
    SetDlgItemTextA(param_1,0x50d,*(LPCSTR *)(*piVar1 + 0x154));
  }
  FUN_00557f00(param_1,piVar1);
  iVar5 = FUN_005f13f0(3);
  if (iVar5 != 0) {
    uVar6 = *(uint *)(*(int *)(iVar5 + 8) + 0x134) >> 5;
    local_244 = (double)(CONCAT44(local_244._4_4_,uVar6) & 0xffffffff00000001);
    if ((uVar6 & 1) == 0) {
      local_244 = (double)(CONCAT44(local_244._4_4_,*(uint *)(iVar5 + 0x8c)) & 0xffffffff00000001);
      if (((*(uint *)(iVar5 + 0x8c) & 1) == 0) && (*(double *)(iVar5 + 0x48) != _DAT_00610fd8)) {
        local_250 = GetDlgItem(param_1,0x4d2);
        EnableWindow(local_250,1);
        SendMessageA(local_250,0xf1,(uint)(param_2[0x65] != 0),0);
        local_250 = GetDlgItem(param_1,0x4c7);
        EnableWindow(local_250,1);
        SendMessageA(local_250,0xf1,(uint)(param_2[0x65] == 0),0);
        uVar6 = (uint)(param_2[0x65] == 0);
        pHVar3 = GetDlgItem(param_1,0x4c6);
        EnableWindow(pHVar3,uVar6);
        uVar6 = (uint)(param_2[0x65] == 0);
        pHVar3 = GetDlgItem(param_1,0x50b);
        EnableWindow(pHVar3,uVar6);
        local_104[0] = '\0';
        local_190[2] = *(undefined4 *)(iVar5 + 0x48);
        piVar12 = local_190;
        for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + 1;
        }
        local_190[0] = param_2[0x69];
        local_190[3] = *(undefined4 *)(iVar5 + 0x4c);
        _SfNanoTimeToTextEx_20
                  (local_104,local_190,*(undefined4 *)(*piVar1 + 0x110),
                   *(undefined4 *)(*piVar1 + 0x114),0);
        SetDlgItemTextA(param_1,0x4c6,local_104);
        goto LAB_005576cd;
      }
    }
  }
  BVar19 = 0;
  pHVar3 = GetDlgItem(param_1,0x6624);
  EnableWindow(pHVar3,BVar19);
  BVar19 = 0;
  pHVar3 = GetDlgItem(param_1,0x4d2);
  EnableWindow(pHVar3,BVar19);
  BVar19 = 0;
  pHVar3 = GetDlgItem(param_1,0x4c7);
  EnableWindow(pHVar3,BVar19);
  BVar19 = 0;
  pHVar3 = GetDlgItem(param_1,0x4c6);
  EnableWindow(pHVar3,BVar19);
  BVar19 = 0;
  pHVar3 = GetDlgItem(param_1,0x50b);
  EnableWindow(pHVar3,BVar19);
LAB_005576cd:
  pHVar3 = GetDlgItem(param_1,0x4c3);
  LVar7 = _SfGetString_8(DAT_00647204,0x5091);
  WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
  if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,0), LVar9 != -1)) {
    LVar7 = _SfGetString_8(DAT_00647204,0x5092);
    WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
    if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,1), LVar9 != -1)) {
      LVar7 = _SfGetString_8(DAT_00647204,0x5093);
      WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
      if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,2), LVar9 != -1)) {
        local_254 = 0;
        pHVar3 = GetDlgItem(param_1,0x4c4);
        LVar7 = _SfGetString_8(DAT_00647204,0x6602);
        WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
        if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,-1), LVar9 != -1)) {
          LVar7 = _SfGetString_8(DAT_00647204,0x6603);
          WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
          if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,0), LVar9 != -1)) {
            LVar7 = _SfGetString_8(DAT_00647204,0x6604);
            WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
            if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,1), LVar9 != -1))
            {
              LVar7 = _SfGetString_8(DAT_00647204,0x6605);
              WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
              if ((WVar8 != 0xffffffff) && (LVar9 = SendMessageA(pHVar3,0x151,WVar8,2), LVar9 != -1)
                 ) {
                LVar7 = _SfGetString_8(DAT_00647204,0x6606);
                WVar8 = SendMessageA(pHVar3,0x143,0,LVar7);
                if ((WVar8 != 0xffffffff) &&
                   (LVar9 = SendMessageA(pHVar3,0x151,WVar8,3), LVar9 != -1)) {
                  local_254 = 1;
                  pHVar3 = GetDlgItem(param_1,0x4d5);
                  local_260 = (int *)0x0;
                  if (0 < DAT_0062a1a8) {
                    puVar13 = &DAT_00646990;
                    do {
                      uVar17 = _SfGetString_8(DAT_00647204,*(undefined4 *)(puVar13 + 2));
                      SfPrintF(local_104,"%.4f (%s)",*(undefined4 *)puVar13,
                               *(undefined4 *)((int)puVar13 + 4),uVar17);
                      LVar9 = SendMessageA(pHVar3,0x143,0,(LPARAM)local_104);
                      if (LVar9 == -1) {
                        return 0;
                      }
                      local_260 = (int *)((int)local_260 + 1);
                      puVar13 = puVar13 + 5;
                    } while ((int)local_260 < DAT_0062a1a8);
                  }
                  pHVar3 = GetDlgItem(param_1,0x633);
                  local_260 = (int *)0x0;
                  if (0 < DAT_0062a1ac) {
                    puVar14 = &DAT_00646b60;
                    do {
                      uVar17 = puVar14[3];
                      uVar2 = puVar14[2];
                      uVar18 = _SfGetString_8(DAT_00647204,*puVar14);
                      SfPrintF(local_104,uVar18,uVar2,uVar17);
                      LVar9 = SendMessageA(pHVar3,0x143,0,(LPARAM)local_104);
                      if (LVar9 == -1) {
                        return 0;
                      }
                      local_260 = (int *)((int)local_260 + 1);
                      puVar14 = puVar14 + 4;
                    } while ((int)local_260 < DAT_0062a1ac);
                  }
                  local_250 = GetDlgItem(param_1,0x4cf);
                  if (*(int **)(local_23c + 0x130) == (int *)0x0) {
                    local_24c = 0;
                  }
                  else {
                    local_24c = **(int **)(local_23c + 0x130);
                  }
                  local_244 = (double)((ulonglong)local_244 & 0xffffffff00000000);
                  if (local_24c == 0) {
                    EnableWindow(local_250,0);
                    pHVar3 = GetDlgItem(param_1,0x4df);
                    EnableWindow(pHVar3,0);
                    local_250 = GetDlgItem(param_1,0x4e0);
                    EnableWindow(local_250,0);
                    FUN_00557120(param_1,0,1);
                  }
                  else {
                    local_260 = (int *)0x0;
                    if (param_2[1] != 0) {
                      iVar5 = *(int *)(param_2[3] + 0x50);
                      if (iVar5 != 0) {
                        local_260 = (int *)FUN_005f1460(*(undefined4 *)(param_2[3] + 4),
                                                        *(undefined4 *)(iVar5 + 0x1c));
                      }
                    }
                    iVar5 = 0;
                    if (0 < local_24c) {
                      do {
                        iVar11 = *(int *)(*(int *)(*(int *)(local_23c + 0x130) + 8) + iVar5 * 4);
                        if (*(int *)(iVar11 + 4) == 2) {
                          uVar17 = 1;
LAB_00557cc7:
                          FUN_00557e20(uVar17,local_168,100);
                        }
                        else {
                          if (*(int *)(iVar11 + 4) != 3) {
                            uVar17 = 0;
                            goto LAB_00557cc7;
                          }
                          local_258 = (int *)(*(uint *)(*(int *)(iVar11 + 8) + 0x134) >> 5 & 1);
                          if (((local_258 != (int *)0x0) ||
                              (local_258 = (int *)(*(uint *)(iVar11 + 0x8c) & 1),
                              local_258 != (int *)0x0)) ||
                             (*(double *)(iVar11 + 0x48) != _DAT_00610fd8)) {
                            uVar17 = 2;
                            goto LAB_00557cc7;
                          }
                          _SfLoadString_16(DAT_00647204,0x6622,local_168,100);
                        }
                        if ((int *)iVar11 == local_260) {
                          local_244 = (double)CONCAT44(local_244._4_4_,iVar5);
                        }
                        iVar5 = iVar5 + 1;
                        SfPrintF(&local_218,"%s %d",local_168,iVar5);
                        LVar9 = SendMessageA(local_250,0x143,0,(LPARAM)&local_218);
                        if (LVar9 == -1) {
                          local_254 = 0;
                          goto LAB_00557dc5;
                        }
                      } while (iVar5 < local_24c);
                    }
                  }
                  iVar5 = _SfList_CreateExZ_32(param_2 + 0x62,4,0xffffffff,0xffffffff,2,0,0,0);
                  if (iVar5 < 0) {
LAB_00557e0d:
                    local_254 = 0;
                  }
                  else {
                    local_260 = (int *)0x0;
                    if (0 < local_24c) {
                      do {
                        pdVar15 = &local_218;
                        for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
                          *(undefined4 *)pdVar15 = 0;
                          pdVar15 = (double *)((int)pdVar15 + 4);
                        }
                        iVar5 = *(int *)(*(int *)(*(int *)(local_23c + 0x130) + 8) +
                                        (int)local_260 * 4);
                        local_248 = *(uint *)(*(int *)(iVar5 + 8) + 0x134) >> 5 & 1;
                        if ((local_248 == 0) &&
                           (local_248 = *(uint *)(iVar5 + 0x8c) & 1, local_248 == 0)) {
                          if (*(int *)(iVar5 + 4) == 3) {
                            local_208 = *(undefined4 *)(iVar5 + 0x44);
                            local_204 = *(undefined4 *)(iVar5 + 0x60);
                            local_200 = *(undefined4 *)(iVar5 + 0x68);
                            local_1fc = *(undefined4 *)(iVar5 + 0x6c);
                            local_1f8 = *(undefined4 *)(iVar5 + 0x70);
                            local_1f4 = *(undefined4 *)(iVar5 + 0x74);
                            local_1f0 = 0xffffffff;
                            local_1e8 = *(undefined4 *)(iVar5 + 0x50);
                            local_1e4 = *(undefined4 *)(iVar5 + 0x54);
                            local_1e0 = 0;
                            local_1a0 = 0;
                            local_198 = *(undefined4 *)(iVar5 + 0x20);
                            local_194 = *(undefined4 *)(iVar5 + 0x24);
                            local_1b4 = *(undefined4 *)(*(int *)(iVar5 + 0x30) + 4);
                            local_1b0 = *(undefined4 *)(*(int *)(iVar5 + 0x30) + 8);
                            local_1ac = 0;
                            local_1a8 = 0;
                            local_1c0 = *(undefined4 *)(iVar5 + 0x48);
                            local_1bc = *(undefined4 *)(iVar5 + 0x4c);
                            local_1c8 = 0xffffffff;
                            local_1b8 = 0;
                            local_1dc = (uint)*(ushort *)(*(int *)(iVar5 + 0x30) + 0xe);
                            local_258 = (int *)0x0;
                            iVar5 = FUN_005f6990(&local_258);
                            if (-1 < iVar5) {
                              local_248 = 0;
                              iVar5 = (**(code **)(*local_258 + 0xc))(local_258,&local_248);
                              if (-1 < iVar5) {
                                (**(code **)(local_250->unused + 0x18))(local_250,&local_1e0);
                                (**(code **)(*local_258 + 8))(local_258);
                                local_250 = (HWND)0x0;
                              }
                              (**(code **)(*local_260 + 8))(local_260);
                              local_258 = (int *)0x0;
                            }
                          }
                          else if (*(int *)(iVar5 + 4) == 2) {
                            local_228.top = 0;
                            local_228.left = *(uint *)(*(int *)(iVar5 + 0x2c) + 4);
                            local_218 = (double)(uint)local_228.left;
                            local_210 = (uint)*(ushort *)(*(int *)(iVar5 + 0x2c) + 0xe);
                            local_198 = *(undefined4 *)(iVar5 + 0x20);
                            local_194 = *(undefined4 *)(iVar5 + 0x24);
                          }
                        }
                        piVar12 = param_2 + 0x62;
                        iVar5 = _SfList_AllocAndInsertItem_20
                                          (param_2[0x62],&local_218,0x88,0xffffffff,0);
                        if (iVar5 < 0) {
                          _SfList_DeleteList_16(*piVar12,0,0xffffffff,0);
                          _SfList_Destroy_4(*piVar12);
                          *piVar12 = 0;
                          goto LAB_00557e0d;
                        }
                        local_260 = (int *)((int)local_260 + 1);
                      } while ((int)local_260 < local_24c);
                      if (0 < local_24c) {
                        WVar8 = (WPARAM)local_244;
                        SendMessageA(local_250,0x14e,(WPARAM)local_244,0);
                        FUN_005569f0(param_1,piVar1,WVar8);
                      }
                    }
                  }
LAB_00557dc5:
                  dwNewLong = &LAB_00557e90;
                  iVar5 = -4;
                  pHVar3 = GetDlgItem(param_1,0x4d1);
                  LVar10 = SetWindowLongA(pHVar3,iVar5,(LONG)dwNewLong);
                  param_2[99] = LVar10;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_254;
}


