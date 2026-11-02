/* Module: vegas30.exe
   Function: FUN_00459d60
   Address: 00459d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0045a356) */

int FUN_00459d60(int param_1,HWND param_2,uint param_3,WPARAM param_4,HDC param_5)

{
  int iVar1;
  int *piVar2;
  POINT pt;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  HCURSOR hCursor;
  HCURSOR pHVar8;
  HDC pHVar9;
  HWND pHVar10;
  BOOL BVar11;
  UINT_PTR UVar12;
  code *pcVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short sVar17;
  int unaff_EBX;
  short sVar18;
  int unaff_EDI;
  longlong lVar19;
  int local_68;
  tagPOINT local_64;
  undefined4 uStack_5c;
  uint uStack_58;
  WPARAM WStack_54;
  undefined1 auStack_50 [68];
  HWND pHStack_c;
  
  local_68 = 0;
  iVar6 = FUN_00548c50(param_2,param_3,param_4,param_5,&local_68);
  if (iVar6 != 0) {
    return local_68;
  }
  bVar4 = false;
  sVar18 = (short)param_5;
  sVar17 = (short)((uint)param_5 >> 0x10);
  if ((param_3 < 0x200) || (0x20a < param_3)) {
    if (param_3 < 0x15) {
      if (param_3 == 0x14) {
        return 1;
      }
      switch(param_3) {
      case 1:
        *(HWND *)(param_1 + 4) = param_2;
        FUN_00455300(param_1);
        FUN_0047c3d0(param_1 + 0xc78,param_2,&LAB_00497c40,*(undefined4 *)(param_1 + 0xbc8),0);
        return local_68;
      case 2:
        FUN_0047c3d0(param_1 + 0xc78,param_2,0,0,1);
        return local_68;
      case 5:
        FUN_00456640(param_1,param_4,(int)sVar18,(int)sVar17);
        return local_68;
      case 7:
        FUN_00452e30(param_1);
        FUN_00452ea0(param_1);
        DAT_0064767c = DAT_0064767c | 4;
        return local_68;
      case 8:
        FUN_00452e00(param_1);
        DestroyCaret();
        DAT_0064767c = DAT_0064767c | 4;
        return local_68;
      case 0xf:
        pHVar9 = BeginPaint(param_2,(LPPAINTSTRUCT)(auStack_50 + 0x10));
        (*DAT_0064b174)(pHVar9,0,&LAB_00459610,param_1);
        EndPaint(param_2,(PAINTSTRUCT *)auStack_50);
        return 1;
      }
      goto switchD_0045a04e_caseD_3;
    }
    if (param_3 < 0x106) {
      if (param_3 < 0x104) {
        switch(param_3) {
        case 0x15:
        case 0x1a:
          iVar6 = GetSystemMetrics(0x44);
          *(int *)(param_1 + 200) = (iVar6 + 1) / 2;
          iVar6 = GetSystemMetrics(0x45);
          *(int *)(param_1 + 0xcc) = (iVar6 + 1) / 2;
          pcVar13 = *(code **)(*(int *)(param_1 + 0xab4) + 0x10);
          if (pcVar13 == (code *)0x0) {
            return local_68;
          }
          (*pcVar13)(param_1,param_3,param_4,param_5);
          return unaff_EDI;
        case 0x1f:
          piVar2 = *(int **)(param_1 + 0x50 + (*(uint *)(param_1 + 0x174) >> 0x10 & 0xf) * 4);
          (**(code **)(*piVar2 + 0xc))(param_1,piVar2,0x1f,param_4,param_5);
          iVar6 = DefWindowProcA(pHStack_c,param_3,param_4,(LPARAM)param_5);
          return iVar6;
        case 0x20:
          local_68 = FUN_004565c0(param_1,param_4,(int)sVar18,(int)sVar17);
          if (local_68 != 0) {
            return local_68;
          }
          iVar6 = DefWindowProcA(param_2,param_3,param_4,(LPARAM)param_5);
          return iVar6;
        case 0x2b:
        case 0x2c:
          pcVar13 = *(code **)(*(int *)(param_1 + 0xab4) + 0x18);
          goto LAB_0045a83a;
        case 0x30:
          *(WPARAM *)(param_1 + 8) = param_4;
          return local_68;
        case 0x31:
          return *(int *)(param_1 + 8);
        case 0x4e:
          pcVar13 = *(code **)(*(int *)(param_1 + 0xab4) + 8);
          if (pcVar13 == (code *)0x0) {
            return local_68;
          }
          iVar6 = (*pcVar13)(param_1,param_4,param_5);
          return iVar6;
        case 0x53:
          if ((code *)**(undefined4 **)(param_1 + 0xab4) == (code *)0x0) {
            return local_68;
          }
          iVar6 = (*(code *)**(undefined4 **)(param_1 + 0xab4))(param_1,param_3,param_4,param_5);
          if (iVar6 != 0) {
            return local_68;
          }
        default:
switchD_0045a04e_caseD_3:
          iVar6 = DefWindowProcA(param_2,param_3,param_4,(LPARAM)param_5);
          return iVar6;
        case 0x7b:
          iVar6 = (int)sVar17;
          uVar15 = *(undefined4 *)(param_1 + 0x174);
          uVar16 = 1;
          uVar7 = (uint)sVar18;
          if ((param_4 == 0) || (param_5 == (HDC)0xffffffff)) {
            if (*(int *)(param_1 + 0xb24) != 0) {
              if (*(int *)(param_1 + 0xbc8) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
              }
              FUN_00455270(param_1,*(int *)(param_1 + 0x38c) + 2,
                           *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 8) +
                                                     *(int *)(param_1 + 0xcbc) * 4) + 0x69c) + 0x1c)
                           + 2,0x10000,0);
              return local_68;
            }
            local_64.x = *(int *)(param_1 + 0xb90);
            local_64.y = *(int *)(param_1 + 0xb94);
            iVar6 = *(int *)(param_1 + 0xac4) + 0x10;
            if (local_64.x == 0 && local_64.y == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              lVar19 = ftol();
              uVar5 = lVar19 + *(int *)(param_1 + 0xac0);
              uVar7 = (uint)uVar5;
              if ((uVar5 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar7)))) {
                if (0x3fff < (longlong)uVar5) {
                  uVar7 = 0x3fff;
                }
              }
              else {
                uVar7 = 0xffffc000;
              }
            }
            iVar1 = *(int *)(param_1 + 0xac0) + 0x10;
            if ((int)uVar7 < iVar1) {
              FUN_00455270(param_1,iVar1,iVar6,0,0);
              return local_68;
            }
            uVar14 = *(int *)(param_1 + 0xac0) + *(int *)(param_1 + 0xad0);
            if ((int)uVar14 < (int)uVar7) {
              uVar7 = uVar14;
            }
            uVar15 = 0;
            uVar16 = 0;
          }
          FUN_00455270(param_1,uVar7,iVar6,uVar15,uVar16);
          return local_68;
        case 0x84:
          local_68 = DefWindowProcA(param_2,param_3,param_4,(LPARAM)param_5);
          pHVar10 = GetCapture();
          if (pHVar10 != (HWND)0x0) {
            return local_68;
          }
          local_64.x = (LONG)sVar18;
          local_64.y = (LONG)sVar17;
          ScreenToClient(param_2,&local_64);
          FUN_004569d0(param_1,local_64.x,local_64.y);
          return local_68;
        case 0x87:
          if (((((*(uint *)(param_1 + 0xabc) & 0x4000000) != 0) && (param_5 != (HDC)0x0)) &&
              (param_5[1].unused == 0x100)) && (param_5[2].unused == 9)) {
            return 0;
          }
          return 4;
        case 0x100:
        case 0x101:
          FUN_00456f60(param_1,param_3,param_4,param_5);
        }
      }
      else {
        switch(param_4) {
        case 0x12:
          if (*(int *)(param_1 + 0xa4) == 0) {
            FUN_004565c0(param_1,*(undefined4 *)(param_1 + 4),1,0);
          }
        default:
          local_68 = DefWindowProcA(param_2,param_3,param_4,(LPARAM)param_5);
          break;
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 100:
        case 0x66:
          FUN_00456f60(param_1,(param_3 != 0x104) + 0x100,param_4,param_5);
        }
      }
    }
    else {
      if (0x20d < param_3) {
        if (param_3 < 0x312) {
          if (0x30e < param_3) {
            pcVar13 = *(code **)(*(int *)(param_1 + 0xab4) + 0x14);
            if (pcVar13 == (code *)0x0) {
              return local_68;
            }
            (*pcVar13)(param_1,param_3,param_4,param_5);
            return unaff_EDI;
          }
          if (param_3 == 0x2a3) {
            FUN_004592f0(param_1,0,0,0,0);
            return local_68;
          }
          if ((param_3 < 0x300) || (0x307 < param_3)) goto switchD_0045a04e_caseD_3;
        }
        else {
          if (param_3 == 0x319) {
            iVar6 = FUN_00459cb0(param_1,param_4,param_5);
            if (iVar6 != 0) {
              return 1;
            }
            iVar6 = DefWindowProcA(*(HWND *)(param_1 + 4),0x319,param_4,(LPARAM)param_5);
            return iVar6;
          }
          if ((param_3 < 0x7f00) || (0x7f09 < param_3)) goto switchD_0045a04e_caseD_3;
        }
        pcVar13 = *(code **)(*(int *)(param_1 + 0xab4) + 0xc);
LAB_0045a83a:
        if (pcVar13 == (code *)0x0) {
          return local_68;
        }
        iVar6 = (*pcVar13)(param_1,param_3,param_4,param_5);
        return iVar6;
      }
      if (param_3 != 0x20d) {
        if (param_3 < 0x120) {
          if (param_3 != 0x11f) {
            if (param_3 == 0x106) {
              if (param_4 == 8) {
                SendMessageA(param_2,0x304,0,0);
              }
              else {
                local_68 = DefWindowProcA(param_2,0x106,param_4,(LPARAM)param_5);
              }
              goto LAB_00459ff0;
            }
            if (param_3 == 0x111) {
              pcVar13 = *(code **)(*(int *)(param_1 + 0xab4) + 4);
              if (pcVar13 == (code *)0x0) {
                return local_68;
              }
              iVar6 = (*pcVar13)(param_1,param_4,param_5);
              return iVar6;
            }
            if (param_3 == 0x113) {
              if (param_4 == 2) {
                if (*(int *)(param_1 + 0x184) != 0) {
                  KillTimer(*(HWND *)(param_1 + 4),*(UINT_PTR *)(param_1 + 0x180));
                  UVar12 = SetTimer(*(HWND *)(param_1 + 4),2,*(UINT *)(param_1 + 0x184),
                                    (TIMERPROC)0x0);
                  *(UINT_PTR *)(param_1 + 0x180) = UVar12;
                  *(undefined4 *)(param_1 + 0x184) = 0;
                }
                if (*(code **)(param_1 + 0x188) == (code *)0x0) {
                  return local_68;
                }
                (**(code **)(param_1 + 0x188))(param_1);
                return unaff_EBX;
              }
              if (param_4 != 3) {
                return local_68;
              }
              GetCursorPos(&local_64);
              ScreenToClient(*(HWND *)(param_1 + 4),&local_64);
              pt.y = local_64.y;
              pt.x = local_64.x;
              BVar11 = PtInRect((RECT *)(param_1 + 0x340),pt);
              if (BVar11 != 0) {
                return local_68;
              }
              FUN_00452d70(param_1);
              return local_68;
            }
            goto switchD_0045a04e_caseD_3;
          }
LAB_0045a72d:
          iVar6 = SendMessageA((HWND)**(undefined4 **)(param_1 + 0xc),param_3,param_4,
                               (LPARAM)param_5);
          return iVar6;
        }
        if (param_3 == 0x121) goto LAB_0045a72d;
        if (param_3 != 0x20b) goto switchD_0045a04e_caseD_3;
      }
      sVar17 = (short)(param_4 >> 0x10);
      if (sVar17 == 1) {
        FUN_00458050(param_1,0xffffff9c,0,1);
        local_68 = 1;
      }
      else {
        if (sVar17 != 2) {
          return local_68;
        }
        FUN_00458050(param_1,100,0,1);
        local_68 = 1;
      }
    }
    goto LAB_00459ff0;
  }
  bVar3 = true;
  if (param_3 == 0x20a) {
    if (*(int *)(param_1 + 0xa4) != 0) {
LAB_00459e70:
      if ((*(uint *)(param_1 + 0x18) & 0x20000000) != 0) goto LAB_00459e79;
      goto LAB_00459e89;
    }
    if ((*(uint *)(param_1 + 0x18) & 0x20000000) != 0) {
      FUN_00459640(param_1);
    }
    iVar6 = _SfWheel_PassToHover_12(param_2,param_4,param_5);
    if ((iVar6 == 0) &&
       (piVar2 = *(int **)(param_1 + 0x50 + (*(uint *)(param_1 + 0x174) >> 0x10 & 0xf) * 4),
       local_68 = (**(code **)(*piVar2 + 0xc))(param_1,piVar2,0x20a,param_4,param_5),
       local_68 != 0x69)) {
      if ((*(uint *)(param_1 + 0x174) & 0xf0000) == 0) {
        FUN_00459960(param_1,param_2,0x20a,param_4,param_5);
        local_68 = 0x69;
        goto LAB_00459e54;
      }
    }
    else {
LAB_00459e54:
      bVar3 = false;
    }
    bVar4 = true;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) goto LAB_00459e70;
LAB_00459e79:
    if ((param_3 == 0x207) || (param_3 == 0x208)) {
      FUN_004596a0(param_1,param_2,param_3,param_4,param_5);
    }
    else {
LAB_00459e89:
      uVar7 = *(uint *)(param_1 + 0x18) & 0x20000000;
      if ((uVar7 != 0) && (param_3 == 0x200)) {
        FUN_004596a0(param_1,param_2,0x200,param_4,param_5);
        goto LAB_00459f5f;
      }
      if ((uVar7 != 0) && ((param_3 == 0x201 || (param_3 == 0x204)))) {
        FUN_00459640(param_1);
      }
    }
    if ((param_3 == 0x201) || (param_3 == 0x204)) {
      if (((*(byte *)(param_1 + 0x1c) & 2) != 0) && (*(int *)(param_1 + 0xa4) == 0)) {
        FUN_004569d0(param_1,(int)sVar18,(int)sVar17);
      }
      if ((*(uint *)(param_1 + 0x18) & 0x800) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffefff;
        FUN_00456a90(param_1);
      }
      piVar2 = *(int **)(param_1 + 0x50 + (*(uint *)(param_1 + 0x174) >> 0x10 & 0xf) * 4);
      if ((piVar2[1] & 0x8000000U) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*piVar2 + 0x1c))(param_1,piVar2,0x403,0,*(uint *)(param_1 + 0x174));
        if (0x10 < uVar7) goto LAB_00459f5f;
      }
      FUN_00459560(param_1,uVar7);
    }
  }
LAB_00459f5f:
  if (((*(uint *)(param_1 + 0x1d8) != 0) &&
      (((*(uint *)(param_1 + 0x174) ^ *(uint *)(param_1 + 0x1d8)) & 0xf0000) != 0)) &&
     (param_3 == 0x200)) {
    FUN_004592f0(param_1,0,0,0,0);
  }
  if ((*(uint *)(param_1 + 0x18) & 0x800) != 0) {
    uStack_5c = *(undefined4 *)(param_1 + 4);
    auStack_50._0_4_ = param_5;
    WStack_54 = param_4;
    uStack_58 = param_3;
    SendMessageA(*(HWND *)(param_1 + 0x210),0x407,0,(LPARAM)&uStack_5c);
  }
  if (bVar3) {
    piVar2 = *(int **)(param_1 + 0x50 + (*(uint *)(param_1 + 0x174) >> 0x10 & 0xf) * 4);
    (**(code **)(*piVar2 + 0xc))(param_1,piVar2,param_3,param_4,param_5);
  }
  if (!bVar4) {
    return local_68;
  }
LAB_00459ff0:
  if (((*(byte *)(param_1 + 0x1c) & 2) != 0) && (*(int *)(param_1 + 0xa4) == 0)) {
    hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    pHVar8 = GetCursor();
    if (pHVar8 != hCursor) {
      SetCursor(hCursor);
    }
  }
  return local_68;
}


