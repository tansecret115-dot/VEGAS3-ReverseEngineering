/* Module: pngu3266.dll
   Function: OnWndMsg
   Address: 605f7955
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::OnWndMsg(unsigned long,unsigned int,long,long *) */

int __thiscall
CPNWindow::OnWndMsg(CPNWindow *this,ulong param_1,uint param_2,long param_3,long *param_4)

{
  long lVar1;
  DWORD DVar2;
  int iVar3;
  HWND pHVar4;
  void *pvVar5;
  int *piVar6;
  HCURSOR hCursor;
  CPNWindow *pCVar7;
  int iVar8;
  uint uVar9;
  HMENU__ *pHVar10;
  HMENU pHVar11;
  LRESULT LVar12;
  long lVar13;
  undefined4 *puVar14;
  CPNTimer *pCVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  UINT Msg;
  CPNWindow **ppCVar19;
  ulong uVar20;
  undefined4 uVar21;
  ulong uVar22;
  CHAR local_194 [256];
  int *local_94;
  CPNEvent local_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  CPNWindow *local_80 [3];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  CPNEvent local_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  CPNWindow *local_54;
  uint local_48;
  uint local_44;
  CPNEvent local_38 [8];
  undefined4 local_30;
  uint local_2c;
  int *local_28;
  uint local_20;
  CPNWindow **local_1c;
  uint local_18;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x7955  1711  ?OnWndMsg@CPNWindow@@UAEHKIJPAJ@Z */
  uVar17 = param_2;
  local_8 = 0;
  local_c = 0;
  ppCVar19 = (CPNWindow **)param_2;
  uVar9 = param_2;
  uVar20 = param_3;
  uVar22 = param_1;
  DVar2 = GetTickCount();
  CPNEvent::CPNEvent(local_38,0x10,0,(CPNRouter *)this,DVar2,uVar9,uVar20,uVar22);
  lVar13 = param_3;
  if (0x15 < param_1) {
    if (param_1 < 0x2c) {
      if (param_1 != 0x2b) {
        if (param_1 != 0x1a) {
          if (param_1 != 0x1c) {
            if (param_1 == 0x1f) {
              local_2c = 0xa9;
              local_30 = 2;
            }
            else if (((param_1 == 0x20) &&
                     (pHVar4 = ::GetParent(*(HWND *)(this + 0xc)), pHVar4 == (HWND)0x0)) &&
                    ((short)param_3 != -2)) {
              local_30 = 2;
              local_2c = 0xb3;
              if (((((byte)this[10] & 1) != 0) && (*(int **)(this + 0x28) != (int *)0x0)) &&
                 (iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x24))(local_38), iVar3 != 0)) {
                local_8 = 1;
              }
              if (local_8 == 0) {
                iVar3 = (**(code **)(*(int *)this + 0xdc))(local_38);
                (**(code **)(*(int *)this + 4))(local_38);
                if ((iVar3 == 0) && (local_10 == 0)) {
                  local_8 = 0;
                }
                else {
                  local_8 = 1;
                }
              }
              local_c = 1;
              if (local_8 == 0) {
                if (uVar17 != *(uint *)(this + 0xc)) {
                  pvVar5 = (void *)PNGuiGetMapHandle();
                  piVar6 = (int *)FUN_60619de0(pvVar5,uVar17);
                  if (piVar6 != (int *)0x0) {
                    local_8 = (**(code **)(*piVar6 + 0xdc))(local_38);
                    (**(code **)(*piVar6 + 4))(local_38);
                    if ((local_8 == 0) && (local_10 == 0)) {
                      local_8 = 0;
                    }
                    else {
                      local_8 = 1;
                    }
                  }
                }
                if (((local_8 == 0) && ((short)param_3 == 1)) &&
                   (DVar2 = GetClassLongA((HWND)uVar17,-0xc), DVar2 == 0)) {
                  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
                  SetCursor(hCursor);
                  local_8 = 1;
                }
              }
              local_10 = local_8;
            }
            goto switchD_605f79a5_caseD_4;
          }
          CPNEvent::CPNEvent(local_64,local_38);
          local_5c = 2;
          local_58 = 0xc0;
          local_48 = uVar17;
          iVar3 = *(int *)this;
          pCVar7 = this;
          while( true ) {
            iVar3 = (**(code **)(iVar3 + 0x14))();
            if (iVar3 == 0) break;
            pCVar7 = (CPNWindow *)(**(code **)(*(int *)pCVar7 + 0x14))();
            iVar3 = *(int *)pCVar7;
          }
          (**(code **)(*(int *)pCVar7 + 0xdc))(local_64);
          (**(code **)(*(int *)pCVar7 + 4))(local_64);
          goto LAB_605f88a6;
        }
        CPNSystemInfo::Cleanup();
        if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0))
        goto switchD_605f79a5_caseD_4;
        iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x28))(local_38);
        iVar8 = (**(code **)(*(int *)this + 0xdc))(local_38);
        if ((iVar8 == 0) && (iVar3 == 0)) {
          local_8 = 0;
        }
        else {
          local_8 = 1;
        }
        (**(code **)(*(int *)this + 4))(local_38);
        goto LAB_605f7ae8;
      }
LAB_605f83ab:
      local_c = ReflectControlEvent(this,local_38);
      local_8 = local_c;
      goto switchD_605f79a5_caseD_4;
    }
    if (param_1 < 0x3a) {
      if (param_1 != 0x39) {
        if (param_1 == 0x2c) {
          if ((((byte)this[10] & 1) != 0) && (*(int **)(this + 0x28) != (int *)0x0)) {
            iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x10))(local_38);
            goto LAB_605f8578;
          }
        }
        else if ((param_1 < 0x2d) || (0x2f < param_1)) goto switchD_605f79a5_caseD_4;
      }
      goto LAB_605f83ab;
    }
    if (param_1 < 0x83) {
      if (param_1 == 0x82) {
        pvVar5 = (void *)PNGuiGetMapHandle();
        FUN_60619e20(pvVar5,*(uint *)(this + 0xc));
        goto switchD_605f79a5_caseD_4;
      }
      if (param_1 != 0x4e) goto switchD_605f79a5_caseD_4;
      GetClassNameA(*(HWND *)param_3,local_194,0x100);
      uVar17 = 0;
      iVar3 = _stricmp(s_SysTreeView32_606491e4,local_194);
      lVar1 = param_3;
      if (iVar3 == 0) {
        iVar3 = *(int *)(lVar13 + 8);
        if (iVar3 == -0x196) {
          uVar17 = 8;
        }
        else if (iVar3 == -0x192) {
          uVar17 = 0x20;
        }
        else if (iVar3 == -7) {
          uVar17 = 2;
        }
        else if (iVar3 == -4) {
          uVar17 = 0x10;
        }
        else if (iVar3 == -3) {
          uVar17 = 1;
        }
        else if (iVar3 == -2) {
          uVar17 = 4;
        }
      }
      if (uVar17 == 0) goto switchD_605f79a5_caseD_4;
      local_30 = 0x80000000;
      local_20 = *(uint *)(param_3 + 4);
      local_2c = uVar17;
      pvVar5 = (void *)PNGuiGetMapHandle();
      local_28 = (int *)FUN_60619de0(pvVar5,*(uint *)lVar1);
      local_18 = lVar1;
      (**(code **)(*local_28 + 4))(local_38);
LAB_605f815b:
      local_c = 1;
      local_8 = local_10;
      goto switchD_605f79a5_caseD_4;
    }
    if (param_1 < 0xa2) {
      if (param_1 == 0xa1) {
        if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0))
        goto switchD_605f79a5_caseD_4;
        iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x14))(local_38);
      }
      else if (param_1 == 0x85) {
        if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0))
        goto switchD_605f79a5_caseD_4;
        iVar3 = (**(code **)(**(int **)(this + 0x28) + 8))(local_38);
      }
      else {
        if (((param_1 != 0x86) || (((byte)this[10] & 1) == 0)) ||
           (*(int **)(this + 0x28) == (int *)0x0)) goto switchD_605f79a5_caseD_4;
        iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x20))(local_38);
      }
LAB_605f8578:
      if (iVar3 != 0) {
        local_c = 1;
        local_8 = local_c;
      }
      goto switchD_605f79a5_caseD_4;
    }
    if (param_1 < 0x101) {
      if (param_1 == 0x100) {
        local_30 = 4;
        local_2c = 0x82;
        local_1c = ppCVar19;
        goto switchD_605f79a5_caseD_4;
      }
      if (param_1 == 0xa2) {
        if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0))
        goto switchD_605f79a5_caseD_4;
        iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x34))(local_38);
      }
      else {
        if (((param_1 != 0xa3) || (((byte)this[10] & 1) == 0)) ||
           (*(int **)(this + 0x28) == (int *)0x0)) goto switchD_605f79a5_caseD_4;
        iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x18))(local_38);
      }
      goto LAB_605f8578;
    }
    if (param_1 < 0x112) {
      if (param_1 != 0x111) {
        if (param_1 == 0x101) {
          local_30 = 4;
          local_1c = (CPNWindow **)uVar17;
          local_2c = 0x83;
        }
        else if (param_1 == 0x102) {
          local_30 = 4;
          local_1c = (CPNWindow **)uVar17;
          local_2c = 0x84;
        }
        goto switchD_605f79a5_caseD_4;
      }
      uVar9 = uVar17 & 0xffff;
      uVar17 = uVar17 >> 0x10;
      param_2 = uVar9;
      if (param_3 == 0) {
        local_30 = 8;
        local_2c = 200;
        local_18 = uVar9;
        pHVar10 = CPNMenu::PopActiveMenu();
        if (pHVar10 != (HMENU__ *)0x0) {
          PostMessageA(*(HWND *)(this + 0xc),0x537,(WPARAM)pHVar10,0);
        }
        uVar17 = GetWindowLongA(*(HWND *)(this + 0xc),-0x10);
        if (((uVar9 == 2) && ((uVar17 & 0x40000000) == 0)) &&
           (pHVar11 = ::GetMenu(*(HWND *)(this + 0xc)), pHVar11 == (HMENU)0x0)) {
          PostMessageA(*(HWND *)(this + 0xc),0x10,0,0);
        }
        goto switchD_605f79a5_caseD_4;
      }
      LVar12 = ::SendMessageA((HWND)param_3,600,0,0);
      if (LVar12 == 0) goto switchD_605f79a5_caseD_4;
      pvVar5 = (void *)PNGuiGetMapHandle();
      local_94 = (int *)FUN_60619de0(pvVar5,param_3);
      GetClassNameA((HWND)param_3,local_194,0x100);
      iVar3 = _stricmp(&DAT_606491dc,local_194);
      if (iVar3 == 0) {
        if (uVar17 == 0x100) goto LAB_605f8129;
        if (uVar17 == 0x200) {
LAB_605f8125:
          uVar17 = 4;
        }
        else {
          bVar18 = uVar17 == 0x300;
LAB_605f8b1b:
          if (bVar18) goto LAB_605f8b21;
        }
      }
      else {
        iVar3 = _stricmp(s_BUTTON_60649180,local_194);
        if (iVar3 == 0) {
          if (uVar17 == 0) {
LAB_605f8b21:
            uVar17 = 1;
          }
          else {
            if (uVar17 == 5) goto LAB_605f8129;
            if (uVar17 == 6) goto LAB_605f8125;
          }
        }
        else {
          iVar3 = _stricmp(s_LISTBOX_606491d4,local_194);
          if (iVar3 == 0) {
            if (uVar17 == 1) {
LAB_605f8129:
              uVar17 = 2;
            }
            else if (uVar17 == 2) {
              uVar17 = 0x20;
            }
          }
          else {
            iVar3 = _stricmp(s_COMBOBOX_606491c8,local_194);
            if (iVar3 == 0) {
              if (uVar17 != 1) {
                if (uVar17 == 4) goto LAB_605f8125;
                bVar18 = uVar17 == 6;
                goto LAB_605f8b1b;
              }
              goto LAB_605f8129;
            }
          }
        }
      }
      if (uVar17 == 0) goto switchD_605f79a5_caseD_4;
      local_30 = 0x80000000;
      local_20 = param_2;
      local_28 = local_94;
      local_2c = uVar17;
      (**(code **)(*local_94 + 4))(local_38);
      goto LAB_605f815b;
    }
    if (param_1 < 0x120) {
      if (param_1 != 0x11f) {
        if (param_1 != 0x112) {
          if (param_1 == 0x114) {
            local_2c = 0xb7;
          }
          else {
            if (param_1 != 0x115) {
              if (param_1 != 0x117) goto switchD_605f79a5_caseD_4;
              pHVar10 = CPNMenu::PopActiveMenu();
              uVar9 = param_3 & 0xffff;
              while (pHVar10 != (HMENU)0x0) {
                pHVar11 = GetSubMenu(pHVar10,uVar9);
                if ((HMENU)uVar17 == pHVar11) {
                  CPNMenu::PushActiveMenu(pHVar10);
                  break;
                }
                PostMessageA(*(HWND *)(this + 0xc),0x537,(WPARAM)pHVar10,0);
                pHVar10 = CPNMenu::PopActiveMenu();
              }
              CPNMenu::CPNMenu((CPNMenu *)local_80);
              CPNMenu::Attach((CPNMenu *)local_80,(HMENU__ *)uVar17);
              local_1c = local_80;
              local_18 = param_3;
              local_30 = 8;
              local_2c = 0xc9;
              local_8 = (**(code **)(*(int *)this + 0xdc))(local_38);
              (**(code **)(*(int *)this + 4))(local_38);
              local_c = 1;
              CPNMenu::PushActiveMenu((HMENU__ *)uVar17);
              if ((((byte)this[10] & 1) != 0) && (*(int **)(this + 0x28) != (int *)0x0)) {
                (**(code **)(**(int **)(this + 0x28) + 0x3c))(local_38);
              }
              CPNMenu::Detach((CPNMenu *)local_80);
LAB_605f895d:
              CPNMenu::~CPNMenu((CPNMenu *)local_80);
              goto switchD_605f79a5_caseD_4;
            }
            local_2c = 0xb6;
          }
          local_30 = 2;
          local_1c = (CPNWindow **)(uVar17 & 0xffff);
          local_18 = uVar17 >> 0x10;
          goto switchD_605f79a5_caseD_4;
        }
        uVar16 = uVar17 & 0xfff0;
        uVar9 = GetWindowLongA(*(HWND *)(this + 0xc),-0x10);
        if (((uVar16 != 0xf060) || ((uVar9 & 0x80000000) == 0)) || ((uVar9 & 0x80000) != 0)) {
          if ((uVar16 == 0xf100) || (uVar16 == 0xf090)) {
            local_8 = (**(code **)(*(int *)this + 0xdc))(local_38);
            (**(code **)(*(int *)this + 4))(local_38);
            local_c = 1;
            if (local_8 == 0) {
              lVar13 = DefWindowProcA(this,0x112,uVar17,param_3);
              local_8 = 1;
              *param_4 = lVar13;
            }
            while (pHVar10 = CPNMenu::PopActiveMenu(), pHVar10 != (HMENU__ *)0x0) {
              PostMessageA(*(HWND *)(this + 0xc),0x537,(WPARAM)pHVar10,0);
            }
          }
          goto switchD_605f79a5_caseD_4;
        }
        pHVar4 = *(HWND *)(this + 0xc);
        do {
          pHVar4 = GetWindow(pHVar4,4);
          if (pHVar4 == (HWND)0x0) goto switchD_605f79a5_caseD_4;
          uVar9 = GetWindowLongA(pHVar4,-0x10);
        } while ((uVar9 & 0x80000) == 0);
        Msg = 0x112;
LAB_605f8a3f:
        PostMessageA(pHVar4,Msg,uVar17,param_3);
        goto switchD_605f79a5_caseD_4;
      }
      if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0))
      goto switchD_605f79a5_caseD_4;
      iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x30))(local_38);
      goto LAB_605f8578;
    }
    if (param_1 < 0x139) {
      if ((param_1 < 0x137) && ((param_1 < 0x132 || (0x135 < param_1))))
      goto switchD_605f79a5_caseD_4;
      goto LAB_605f83ab;
    }
    if (0x231 < param_1) {
      if (param_1 != 0x232) {
        if (param_1 == 0x52c) {
          if ((CPNWindow *)param_3 != this) {
            HandleMouseExit((CPNWindow *)param_3);
            local_30 = 1;
            local_2c = 0x69;
            local_18 = lVar13;
            goto switchD_605f79a5_caseD_4;
          }
          if ((*(uint *)(this + 0x4c) & 4) == 0) {
            local_30 = 1;
            *(undefined4 *)(this + 0x18) = 0;
            *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffffd | 4;
            local_2c = 0x69;
            goto switchD_605f79a5_caseD_4;
          }
          goto LAB_605f7ae8;
        }
        if (param_1 == 0x52d) {
          if ((*(uint *)(this + 0x4c) & 0x40) == 0) {
            *(undefined4 *)(this + 0x1c) = 0;
            *(undefined4 *)(this + 0x74) = 0xffffffff;
            *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xffffffdf | 0x40;
            local_30 = 1;
            local_2c = 0x6b;
            local_1c = (CPNWindow **)uVar17;
          }
          goto switchD_605f79a5_caseD_4;
        }
        if (param_1 != 0x52e) {
          if (param_1 == 0x530) {
            if ((*(uint *)(this + 0x4c) & 0x400) == 0) {
              *(undefined4 *)(this + 0x20) = 0;
              *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffdff | 0x400;
            }
            goto switchD_605f79a5_caseD_4;
          }
          if ((param_1 != 0x537) || (uVar17 == 0)) goto switchD_605f79a5_caseD_4;
          CPNMenu::CPNMenu((CPNMenu *)local_80);
          CPNMenu::Attach((CPNMenu *)local_80,(HMENU__ *)uVar17);
          uVar22 = 0;
          ppCVar19 = local_80;
          uVar20 = 0;
          DVar2 = GetTickCount();
          CPNEvent::CPNEvent(local_64,8,0xca,(CPNRouter *)this,DVar2,(ulong)ppCVar19,uVar20,uVar22);
          local_8 = (**(code **)(*(int *)this + 0xdc))(local_64);
          (**(code **)(*(int *)this + 4))(local_64);
          local_c = 1;
          CPNMenu::Detach((CPNMenu *)local_80);
          CPNEvent::~CPNEvent(local_64);
          goto LAB_605f895d;
        }
        if ((((byte)this[9] & 0x80) != 0) && ((*(uint *)(this + 0x4c) & 0x200) == 0)) {
          (**(code **)(*(int *)this + 0x3c))(&local_74);
          (**(code **)(*(int *)this + 0x5c))(&local_74);
          if ((local_74 <= (int)(param_3 & 0xffffU)) &&
             ((((int)(param_3 & 0xffffU) <= local_6c && (local_70 <= (int)((uint)param_3 >> 0x10)))
              && ((int)((uint)param_3 >> 0x10) <= local_68)))) {
            *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffbff | 0x200;
            pvVar5 = operator_new(0x2c);
            if (pvVar5 == (void *)0x0) {
              pCVar15 = (CPNTimer *)0x0;
            }
            else {
              pCVar15 = FUN_6060230d(pvVar5,this,(CPNTimer **)(this + 0x20));
            }
            *(CPNTimer **)(this + 0x20) = pCVar15;
          }
          goto switchD_605f79a5_caseD_4;
        }
        pHVar4 = ::GetParent(*(HWND *)(this + 0xc));
        if ((pHVar4 == (HWND)0x0) || (LVar12 = ::SendMessageA(pHVar4,600,0,0), LVar12 == 0))
        goto switchD_605f79a5_caseD_4;
        Msg = 0x52e;
        goto LAB_605f8a3f;
      }
      uVar21 = 0;
      if (*(int *)(this + 0x2c) == 0) {
        local_30 = 2;
        local_2c = 0xbb;
      }
      if (*(int *)(this + 0x30) == 0) {
        local_30 = 2;
        local_2c = 0xbd;
      }
LAB_605f7b14:
      *(undefined4 *)(this + 0x2c) = uVar21;
      *(undefined4 *)(this + 0x30) = uVar21;
      goto switchD_605f79a5_caseD_4;
    }
    if (param_1 == 0x231) {
      uVar21 = 1;
      goto LAB_605f7b14;
    }
    switch(param_1) {
    case 0x200:
      if ((((byte)this[9] & 0x40) != 0) && (((byte)this[0x4c] & 2) == 0)) {
        (**(code **)(*(int *)this + 0x3c))(&local_74);
        uVar9 = param_3 & 0xffff;
        uVar16 = (uint)param_3 >> 0x10;
        if ((local_74 <= (int)uVar9) &&
           ((((int)uVar9 <= local_6c && (local_70 <= (int)uVar16)) && ((int)uVar16 <= local_68)))) {
          *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffffb | 2;
          CPNEvent::CPNEvent(local_64,0,0,(CPNRouter *)0x0,0,0,0,0);
          local_44 = uVar16 << 0x10 | uVar9;
          local_5c = 1;
          local_58 = 0x68;
          local_54 = this;
          (**(code **)(*(int *)this + 0xdc))(local_64);
          (**(code **)(*(int *)this + 4))(local_64);
          pvVar5 = operator_new(0x2c);
          if (pvVar5 == (void *)0x0) {
            pCVar15 = (CPNTimer *)0x0;
          }
          else {
            pCVar15 = FUN_60602131(pvVar5,this,(CPNTimer **)(this + 0x18));
          }
          *(CPNTimer **)(this + 0x18) = pCVar15;
          CPNEvent::~CPNEvent(local_64);
        }
      }
      if ((((byte)this[10] & 4) != 0) && (*(int *)(this + 0x70) != 0)) {
        param_2 = *(uint *)(*(int *)(this + 0x70) + 4);
        do {
          do {
            if (param_2 == 0) goto LAB_605f8788;
            puVar14 = (undefined4 *)FUN_6061a2c0((int *)&param_2);
            piVar6 = (int *)*puVar14;
          } while (piVar6[4] == *(int *)(this + 0x74));
        } while ((((int)(param_3 & 0xffffU) < *piVar6) || (piVar6[2] < (int)(param_3 & 0xffffU))) ||
                (((int)((uint)param_3 >> 0x10) < piVar6[1] ||
                 (piVar6[3] < (int)((uint)param_3 >> 0x10)))));
        if (*(XPNTimer **)(this + 0x1c) != (XPNTimer *)0x0) {
          XPNTimer::SetPending(*(XPNTimer **)(this + 0x1c),0);
          *(undefined4 *)(this + 0x1c) = 0;
          CPNEvent::CPNEvent(local_64,0,0,(CPNRouter *)0x0,0,0,0,0);
          local_48 = *(uint *)(this + 0x74);
          local_5c = 1;
          local_58 = 0x6b;
          local_54 = this;
          (**(code **)(*(int *)this + 0xdc))(local_64);
          (**(code **)(*(int *)this + 4))(local_64);
          CPNEvent::~CPNEvent(local_64);
        }
        *(int *)(this + 0x74) = piVar6[4];
        *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xffffffbf | 0x20;
        CPNEvent::CPNEvent(local_90,0,0,(CPNRouter *)0x0,0,0,0,0);
        local_74 = piVar6[4];
        local_88 = 1;
        local_84 = 0x6a;
        local_80[0] = this;
        (**(code **)(*(int *)this + 0xdc))(local_90);
        (**(code **)(*(int *)this + 4))(local_90);
        pvVar5 = operator_new(0x30);
        if (pvVar5 == (void *)0x0) {
          pCVar15 = (CPNTimer *)0x0;
        }
        else {
          pCVar15 = FUN_6060221f(pvVar5,this,piVar6,(CPNTimer **)0x0);
        }
        *(CPNTimer **)(this + 0x1c) = pCVar15;
        CPNEvent::~CPNEvent(local_90);
      }
LAB_605f8788:
      local_2c = 100;
      local_1c = (CPNWindow **)((uVar17 & 4 | uVar17 >> 2 & 2) >> 1);
      goto LAB_605f87a5;
    case 0x201:
    case 0x204:
    case 0x207:
      local_2c = 0x65;
      local_1c = (CPNWindow **)
                 ((((-(uint)(param_1 != 0x201) & (param_1 != 0x204) + 1) << 0xb | uVar17 & 3) << 2 |
                  uVar17 & 0x10) << 3 | (uVar17 & 4 | uVar17 >> 2 & 2) >> 1);
LAB_605f87a5:
      local_30 = 1;
      goto LAB_605f87a8;
    case 0x202:
    case 0x205:
    case 0x208:
      local_30 = 1;
      local_2c = 0x66;
      local_1c = (CPNWindow **)
                 ((((-(uint)(param_1 != 0x202) & (param_1 != 0x205) + 1) << 0xb | uVar17 & 3) << 2 |
                  uVar17 & 0x10) << 3 | (uVar17 & 4 | uVar17 >> 2 & 2) >> 1);
      local_18 = param_3;
      if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0))
      goto switchD_605f79a5_caseD_4;
      iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x38))(local_38);
      goto LAB_605f8578;
    case 0x203:
    case 0x206:
    case 0x209:
      local_30 = 1;
      local_1c = (CPNWindow **)
                 ((((-(uint)(param_1 != 0x203) & (param_1 != 0x206) + 1) << 0xb | uVar17 & 3) << 2 |
                  uVar17 & 0x10) << 3 | (uVar17 & 4 | uVar17 >> 2 & 2) >> 1);
      local_18 = param_3;
      local_2c = (*(uint *)(this + 8) & 0x800 | 0x19400) >> 10;
    default:
      goto switchD_605f79a5_caseD_4;
    case 0x211:
      iVar3 = CPNTipManager::ToolTipsEnabled();
      *(int *)(this + 0x34) = iVar3;
      CPNTipManager::EnableToolTips(0);
      CPNEvent::CPNEvent(local_64,local_38);
      local_5c = 2;
      local_58 = 0xbf;
      iVar3 = *(int *)this;
      pCVar7 = this;
      while( true ) {
        iVar3 = (**(code **)(iVar3 + 0x14))();
        if (iVar3 == 0) break;
        pCVar7 = (CPNWindow *)(**(code **)(*(int *)pCVar7 + 0x14))();
        iVar3 = *(int *)pCVar7;
      }
      (**(code **)(*(int *)pCVar7 + 0xdc))(local_64);
      (**(code **)(*(int *)pCVar7 + 4))(local_64);
      break;
    case 0x212:
      CPNTipManager::EnableToolTips(*(int *)(this + 0x34));
      CPNEvent::CPNEvent(local_64,local_38);
      local_5c = 2;
      local_58 = 0xbe;
      iVar3 = *(int *)this;
      pCVar7 = this;
      while( true ) {
        iVar3 = (**(code **)(iVar3 + 0x14))();
        if (iVar3 == 0) break;
        pCVar7 = (CPNWindow *)(**(code **)(*(int *)pCVar7 + 0x14))();
        iVar3 = *(int *)pCVar7;
      }
      (**(code **)(*(int *)pCVar7 + 0xdc))(local_64);
      (**(code **)(*(int *)pCVar7 + 4))(local_64);
      break;
    case 0x214:
      if (*(int *)(this + 0x2c) == 0) goto switchD_605f79a5_caseD_4;
      CPNEvent::CPNEvent(local_64,local_38);
      local_5c = 2;
      local_58 = 0xba;
      (**(code **)(*(int *)this + 0xdc))(local_64);
      (**(code **)(*(int *)this + 4))(local_64);
      *(undefined4 *)(this + 0x2c) = 0;
      break;
    case 0x216:
      if (*(int *)(this + 0x30) == 0) goto switchD_605f79a5_caseD_4;
      CPNEvent::CPNEvent(local_64,local_38);
      local_5c = 2;
      local_58 = 0xbc;
      (**(code **)(*(int *)this + 0xdc))(local_64);
      (**(code **)(*(int *)this + 4))(local_64);
      *(undefined4 *)(this + 0x30) = 0;
    }
LAB_605f88a6:
    CPNEvent::~CPNEvent(local_64);
    goto switchD_605f79a5_caseD_4;
  }
  if (param_1 == 0x15) {
    CPNDrawHelper::Update();
    local_30 = 2;
    local_2c = 0xb5;
    local_8 = (**(code **)(*(int *)this + 0xdc))(local_38);
    (**(code **)(*(int *)this + 4))(local_38);
    if (((((byte)this[10] & 1) != 0) && (*(int **)(this + 0x28) != (int *)0x0)) &&
       (iVar3 = (**(code **)(**(int **)(this + 0x28) + 0xc))(local_38), iVar3 != 0)) {
      local_8 = 1;
    }
LAB_605f7ae8:
    local_c = 1;
    goto switchD_605f79a5_caseD_4;
  }
  switch(param_1) {
  case 1:
    local_2c = 0xaa;
    goto LAB_605f7a00;
  case 2:
    local_30 = 2;
    local_2c = 0xb2;
    break;
  case 3:
    local_30 = 2;
    local_2c = 0xac;
    goto LAB_605f87a8;
  case 5:
    local_2c = 0xab;
LAB_605f7a00:
    local_30 = 2;
    local_1c = (CPNWindow **)uVar17;
LAB_605f87a8:
    local_18 = param_3;
    break;
  case 6:
    local_30 = 2;
    local_1c = (CPNWindow **)(uint)((short)uVar17 != 0);
    local_2c = 0xae;
    break;
  case 7:
    local_30 = 2;
    local_2c = 0xb8;
    break;
  case 8:
    local_30 = 2;
    local_2c = 0xb9;
    break;
  case 10:
    local_30 = 2;
    local_2c = 0xb4;
    break;
  case 0xc:
    if ((((byte)this[10] & 1) == 0) || (*(int **)(this + 0x28) == (int *)0x0)) break;
    iVar3 = (**(code **)(**(int **)(this + 0x28) + 0x2c))(local_38);
    goto LAB_605f8578;
  case 0xf:
    local_30 = 2;
    local_2c = 0xb0;
    break;
  case 0x10:
    local_30 = 2;
    local_2c = 0xb1;
  }
switchD_605f79a5_caseD_4:
  if (local_c == 0) {
    iVar3 = (**(code **)(*(int *)this + 0xdc))(local_38);
    (**(code **)(*(int *)this + 4))(local_38);
    if ((iVar3 == 0) && (local_10 == 0)) {
      local_8 = 0;
    }
    else {
      local_8 = 1;
    }
  }
  NotifyWindowlessChildren(this,local_38);
  if (param_4 != (long *)0x0) {
    *param_4 = local_10;
  }
  if (*(int *)(this + 0xb4) == 0) {
    CPNEvent::~CPNEvent(local_38);
  }
  else {
    if (this != (CPNWindow *)0x0) {
      (*(code *)**(undefined4 **)this)(1);
    }
    CPNEvent::~CPNEvent(local_38);
    local_8 = 1;
  }
  return local_8;
}


