/* Module: sftrans1.dll
   Function: FUN_00552e70
   Address: 00552e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00552e70(int *param_1,HWND param_2,uint param_3,uint param_4,uint param_5,undefined4 *param_6)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  HWND pHVar2;
  LONG LVar3;
  LONG LVar4;
  short sVar5;
  BOOL BVar7;
  HCURSOR hCursor;
  HCURSOR pHVar8;
  HWND pHVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_2c;
  LONG local_28;
  undefined4 local_24;
  tagPOINT local_20;
  tagPOINT local_18;
  tagRECT local_10;
  short sVar6;
  
  uVar14 = param_5;
  uVar13 = param_4;
  uVar10 = param_3;
  pHVar2 = param_2;
  local_2c = 1;
  local_24 = 0;
  sVar5 = (short)param_5;
  sVar6 = (short)(param_5 >> 0x10);
  if (param_3 < 0xaa) {
    if (param_3 != 0xa9) {
      switch(param_3) {
      case 7:
        (**(code **)(*param_1 + 0x28))(param_2,1);
        break;
      case 8:
        FUN_00552a80(param_2);
        (**(code **)(*param_1 + 0x28))(pHVar2,0);
        break;
      default:
switchD_00552eb4_caseD_9:
        return 0;
      case 0x1f:
        FUN_00552a80(param_2);
        break;
      case 0x20:
        hCursor = (HCURSOR)(**(code **)(*param_1 + 0x20))(param_2,param_1[4]);
        pHVar8 = GetCursor();
        if (hCursor != pHVar8) {
          SetCursor(hCursor);
        }
        break;
      case 0x7b:
        (**(code **)(*param_1 + 0x2c))(param_2,(int)sVar5,(int)sVar6);
        break;
      case 0x84:
        local_20.x = (LONG)sVar5;
        local_20.y = (LONG)sVar6;
        ScreenToClient(param_2,&local_20);
        if ((param_1[3] & 0x100U) != 0) {
          GetClientRect(pHVar2,&local_10);
          pt.y = local_20.y;
          pt.x = local_20.x;
          BVar7 = PtInRect(&local_10,pt);
          if (BVar7 == 0) {
            local_28 = local_20.y;
            local_24 = 2;
            local_2c = local_20.x;
            FUN_00552ac0(pHVar2,&local_2c);
            local_2c = (**(code **)(*param_1 + 0x3c))
                                 (pHVar2,local_2c,local_28,&local_24,param_1 + 4);
            if (local_2c != 0) break;
            local_2c = 0;
          }
        }
        iVar11 = param_1[2];
        if ((((iVar11 != 2) && (iVar11 != 6)) && (iVar11 != 4)) ||
           ((*(byte *)(param_1 + 3) & 0x80) == 0)) {
          iVar11 = (**(code **)(*param_1 + 0x1c))(pHVar2,local_20.x,local_20.y);
          param_1[4] = iVar11;
        }
        return 0;
      case 0xa1:
      case 0xa4:
      case 0xa7:
        if ((param_1[3] & 0x100U) == 0) {
          return 0;
        }
        if (param_1[2] != 0) break;
        local_20.x = (LONG)sVar5;
        local_20.y = (LONG)sVar6;
        MapWindowPoints((HWND)0x0,param_2,&local_20,1);
        local_10.left = local_20.x;
        local_10.top = local_20.y;
        FUN_00552ac0(pHVar2,&local_20);
        param_1[5] = local_20.x;
        param_1[7] = local_20.x;
        param_1[6] = local_20.y;
        param_1[8] = local_20.y;
        if ((param_1[3] & 0x200U) != 0) {
          piVar1 = param_1 + 0x16;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          *piVar1 = 0;
          param_1[0x18] = 0;
          param_1[0x20] = 0;
          param_1[0x17] = 0;
          param_1[0x19] = 0;
          param_1[0x21] = 0;
          FUN_00552530(pHVar2,param_1 + 0x1e,piVar1,0);
          param_1[0x1a] = *piVar1;
          param_1[0x1b] = param_1[0x17];
          param_1[0x1c] = param_1[0x18];
          param_1[0x1d] = param_1[0x19];
        }
        if ((*(byte *)(param_1 + 3) & 0x20) != 0) {
          SetFocus(pHVar2);
        }
        param_2 = (HWND)(param_1[3] & 1);
        iVar11 = (**(code **)(*param_1 + 0x30))
                           (pHVar2,uVar10,local_20.x,local_20.y,param_4,&param_2);
        if (iVar11 == 0) {
          return 0;
        }
        if ((param_1[3] & 0x400U) == 0) {
          if (param_2 == (HWND)0x0) {
            if (uVar10 == 0xa1) {
              param_1[2] = 0x12;
            }
            else if (uVar10 == 0xa4) {
              param_1[2] = 0x16;
            }
            else if (uVar10 == 0xa7) {
              param_1[2] = 0x14;
            }
          }
          else if (uVar10 == 0xa1) {
            param_1[2] = 0x11;
          }
          else if (uVar10 == 0xa4) {
            param_1[2] = 0x15;
          }
          else if (uVar10 == 0xa7) {
            param_1[2] = 0x13;
          }
        }
        if ((param_1[3] & 2U) != 0) {
          SetCapture(pHVar2);
        }
        if (((*(byte *)(param_1 + 3) & 0x80) != 0) || (pHVar9 = GetCapture(), pHVar2 != pHVar9))
        break;
        local_18.x = local_10.left;
        local_18.y = local_10.top;
        MapWindowPoints(pHVar2,(HWND)0x0,&local_18,1);
        uVar10 = local_18.y << 0x10 | local_18.x & 0xffffU;
        goto LAB_00553933;
      case 0xa2:
      case 0xa5:
      case 0xa8:
        if ((param_1[3] & 0x100U) == 0) {
          return 0;
        }
        local_20.x = (LONG)sVar5;
        local_20.y = (LONG)sVar6;
        local_10.left = local_20.x;
        MapWindowPoints((HWND)0x0,param_2,&local_20,1);
        FUN_00552ac0(pHVar2,&local_20);
        param_1[7] = local_20.x;
        param_1[8] = local_20.y;
        if (uVar10 == 0xa2) {
          iVar11 = param_1[2];
          if (((iVar11 != 0x11) && (iVar11 != 0x12)) && (iVar11 != 0x17)) break;
        }
        else if (uVar10 == 0x208) {
          iVar11 = param_1[2];
          if (((iVar11 != 0x13) && (iVar11 != 0x14)) && (iVar11 != 0x18)) break;
        }
        else if (((uVar10 == 0x205) && (iVar11 = param_1[2], iVar11 != 0x15)) &&
                ((iVar11 != 0x16 && (iVar11 != 0x19)))) break;
        pHVar9 = GetCapture();
        if (pHVar2 == pHVar9) {
          ReleaseCapture();
        }
        iVar11 = param_1[2];
        param_1[2] = 0;
        (**(code **)(*param_1 + 0x34))(pHVar2,uVar10,local_20.x,local_20.y,param_4,iVar11);
        if (param_1[9] != 0) {
          SendMessageA(pHVar2,0x7b,(WPARAM)pHVar2,uVar14 & 0xffff0000 | local_10.left & 0xffffU);
          param_1[9] = 0;
        }
        break;
      case 0xa3:
        if ((*(byte *)(param_1 + 3) & 0x40) != 0) {
          return 0;
        }
        local_20.x = (LONG)sVar5;
        local_20.y = (LONG)sVar6;
        MapWindowPoints((HWND)0x0,param_2,&local_20,1);
        FUN_00552ac0(pHVar2,&local_20);
        param_1[7] = local_20.x;
        param_1[8] = local_20.y;
        param_1[2] = 0x17;
        (**(code **)(*param_1 + 0x38))(pHVar2,uVar10,local_20.x,local_20.y,param_4);
        param_1[2] = 0;
        break;
      case 0xa6:
        goto switchD_00552eb4_caseD_a6;
      }
      goto LAB_00553421;
    }
    if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
      local_20.x = (LONG)sVar5;
      local_20.y = (LONG)sVar6;
      MapWindowPoints((HWND)0x0,param_2,&local_20,1);
      FUN_00552ac0(pHVar2,&local_20);
      param_1[7] = local_20.x;
      param_1[8] = local_20.y;
      param_1[2] = 0x18;
      (**(code **)(*param_1 + 0x38))(pHVar2,0xa9,local_20.x,local_20.y,param_4);
      param_1[2] = 0;
      goto LAB_00553421;
    }
    local_2c = 0;
switchD_00552eb4_caseD_a6:
    if ((*(byte *)(param_1 + 3) & 0x40) != 0) {
      return 0;
    }
    local_20.x = (LONG)sVar5;
    local_20.y = (LONG)sVar6;
    MapWindowPoints((HWND)0x0,param_2,&local_20,1);
    FUN_00552ac0(pHVar2,&local_20);
    param_1[7] = local_20.x;
    param_1[8] = local_20.y;
    param_1[2] = 0x19;
    (**(code **)(*param_1 + 0x38))(pHVar2,uVar10,local_20.x,local_20.y,param_4);
    param_1[2] = 0;
LAB_00553419:
    if (local_2c == 0) {
      return 0;
    }
  }
  else {
    if (param_3 < 0x205) {
      if (param_3 != 0x204) {
        if (0x201 < param_3) {
          if (param_3 != 0x202) {
            if (param_3 != 0x203) {
              return 0;
            }
            if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
              param_1[7] = (int)sVar5;
              param_1[8] = (int)sVar6;
              param_1[2] = 7;
              (**(code **)(*param_1 + 0x18))(param_2,0x203,(int)sVar5,(int)sVar6,param_4);
              param_1[2] = 0;
            }
            else {
              FUN_00552e70(param_2,0x201,param_4,param_5,param_6);
            }
            goto LAB_00553421;
          }
          goto switchD_005537c4_caseD_205;
        }
        if (param_3 != 0x201) {
          if (param_3 == 0x100) {
            local_2c = 0;
            if ((*(byte *)(param_1 + 3) & 4) == 0) {
              return 0;
            }
            if (param_4 != 0x1b) {
              return 0;
            }
            if (param_1[2] == 0) {
              return 0;
            }
            FUN_00552a80(param_2);
            local_2c = 1;
          }
          else if (param_3 == 0x111) {
            local_2c = 0;
            if ((*(byte *)(param_1 + 3) & 8) == 0) {
              return 0;
            }
            if (param_1[2] == 0) {
              return 0;
            }
            if ((short)param_4 != 2) {
              return 0;
            }
            FUN_00552a80(param_2);
            local_2c = 1;
          }
          else {
            if (param_3 != 0x200) {
              return 0;
            }
            param_3 = 0;
            local_20.x = (LONG)sVar5;
            local_20.y = (LONG)sVar6;
            bVar15 = (*(byte *)(param_1 + 2) & 0x10) != 0;
            if (bVar15) {
              FUN_00552ac0(param_2,&local_20);
            }
            LVar4 = local_20.y;
            LVar3 = local_20.x;
            param_3 = (uint)bVar15;
            param_1[7] = local_20.x;
            param_1[8] = local_20.y;
            if (((*(byte *)(param_1 + 3) & 0x80) == 0) && (pHVar9 = GetCapture(), pHVar2 == pHVar9))
            {
              local_18.x = LVar3;
              local_18.y = LVar4;
              MapWindowPoints(pHVar2,(HWND)0x0,&local_18,1);
              uVar10 = SendMessageA(pHVar2,0x84,0,local_18.y << 0x10 | local_18.x & 0xffffU);
              SendMessageA(pHVar2,0x20,(WPARAM)pHVar2,uVar10 & 0xffff | 0x2000000);
            }
            uVar10 = param_4;
            switch(param_1[2]) {
            case 1:
            case 3:
            case 5:
            case 0x11:
            case 0x13:
            case 0x15:
              local_10.left = param_1[5] - 2;
              local_10.right = param_1[5] + 2;
              local_10.top = param_1[6] + -2;
              local_10.bottom = param_1[6] + 2;
              pt_00.y = local_20.y;
              pt_00.x = local_20.x;
              BVar7 = PtInRect(&local_10,pt_00);
              uVar10 = param_4;
              if (BVar7 != 0) goto LAB_00553421;
              if ((param_1[3] & 0x400U) == 0) {
                switch(param_1[2]) {
                case 1:
                  param_1[2] = 2;
                  break;
                case 3:
                  param_1[2] = 4;
                  break;
                case 5:
                  param_1[2] = 6;
                  break;
                case 0x11:
                  param_1[2] = 0x12;
                  break;
                case 0x13:
                  param_1[2] = 0x14;
                  break;
                case 0x15:
                  param_1[2] = 0x16;
                }
              }
              (**(code **)(*param_1 + 0x48))(pHVar2,local_20.x,local_20.y,param_4,param_1[2]);
            }
            if (((param_1[3] & 0x200U) == 0) ||
               ((uVar13 = param_1[2] & 0xf, uVar13 != 2 &&
                (((uVar13 != 4 && (uVar13 != 6)) || (uVar13 != 2)))))) {
              if (param_3 == 0) {
                (**(code **)(*param_1 + 0x14))(pHVar2,local_20.x,local_20.y,uVar10,param_1[2]);
              }
              else {
                (**(code **)(*param_1 + 0x40))();
              }
            }
            else {
              FUN_00552b20(pHVar2,param_3,local_20.x,local_20.y,uVar10);
            }
          }
          goto LAB_00553421;
        }
      }
switchD_005537c4_caseD_207:
      if (param_1[2] != 0) goto LAB_00553421;
      uVar13 = (uint)sVar5;
      local_10.top = (LONG)sVar6;
      param_1[5] = uVar13;
      param_1[7] = uVar13;
      param_1[6] = local_10.top;
      param_1[8] = local_10.top;
      if ((*(byte *)(param_1 + 3) & 0x20) != 0) {
        SetFocus(param_2);
      }
      param_2 = (HWND)(param_1[3] & 1);
      iVar11 = (**(code **)(*param_1 + 0xc))(pHVar2,uVar10,uVar13,local_10.top,param_4,&param_2);
      if (iVar11 == 0) goto LAB_00553421;
      if ((param_1[3] & 0x400U) == 0) {
        if (param_2 == (HWND)0x0) {
          if (uVar10 == 0x201) {
            param_1[2] = 2;
          }
          else if (uVar10 == 0x204) {
            param_1[2] = 6;
          }
          else if (uVar10 == 0x207) {
            param_1[2] = 4;
          }
        }
        else if (uVar10 == 0x201) {
          param_1[2] = 1;
        }
        else if (uVar10 == 0x204) {
          param_1[2] = 5;
        }
        else if (uVar10 == 0x207) {
          param_1[2] = 3;
        }
      }
      if ((param_1[3] & 2U) != 0) {
        SetCapture(pHVar2);
      }
      if (((*(byte *)(param_1 + 3) & 0x80) != 0) || (pHVar9 = GetCapture(), pHVar2 != pHVar9))
      goto LAB_00553421;
      local_18.y = local_10.top;
      local_18.x = uVar13;
      MapWindowPoints(pHVar2,(HWND)0x0,&local_18,1);
      uVar10 = local_18.y << 0x10 | local_18.x & 0xffffU;
LAB_00553933:
      uVar10 = SendMessageA(pHVar2,0x84,0,uVar10);
      SendMessageA(pHVar2,0x20,(WPARAM)pHVar2,uVar10 & 0xffff | 0x2000000);
      goto LAB_00553421;
    }
    switch(param_3) {
    case 0x205:
    case 0x208:
switchD_005537c4_caseD_205:
      uVar14 = (uint)sVar5;
      local_10.top = (LONG)sVar6;
      param_1[7] = uVar14;
      param_1[8] = local_10.top;
      (**(code **)(*DAT_00622478 + 0x10))();
      param_5 = param_1[2] & 0x10;
      uVar13 = param_1[2] & 0xffffffef;
      if (uVar10 == 0x202) {
        if (((uVar13 != 1) && (uVar13 != 2)) && (uVar13 != 7)) goto LAB_00553421;
      }
      else if (uVar10 == 0x208) {
        if (((uVar13 != 3) && (uVar13 != 4)) && (uVar13 != 8)) goto LAB_00553421;
      }
      else if ((((uVar10 == 0x205) && (uVar13 != 5)) && (uVar13 != 6)) && (uVar13 != 9))
      goto LAB_00553421;
      pHVar9 = GetCapture();
      pHVar2 = param_2;
      if (param_2 == pHVar9) {
        ReleaseCapture();
      }
      param_2 = (HWND)param_1[2];
      param_1[2] = 0;
      if (param_5 == 0) {
        (**(code **)(*param_1 + 0x10))(pHVar2,uVar10,uVar14,local_10.top,param_4,param_2);
      }
      else {
        local_18.y = local_10.top;
        local_18.x = uVar14;
        FUN_00552ac0(pHVar2,&local_18);
        uVar12 = 0;
        if (uVar10 == 0x202) {
          uVar12 = 0xa2;
        }
        else if (uVar10 == 0x205) {
          uVar12 = 0xa5;
        }
        else if (uVar10 == 0x208) {
          uVar12 = 0xa8;
        }
        (**(code **)(*param_1 + 0x34))(pHVar2,uVar12,local_18.x,local_18.y,param_4,param_2);
      }
      if (param_1[9] != 0) {
        local_18.y = local_10.top;
        local_18.x = uVar14;
        MapWindowPoints(pHVar2,(HWND)0x0,&local_18,1);
        SendMessageA(pHVar2,0x7b,(WPARAM)pHVar2,local_18.y << 0x10 | local_18.x & 0xffffU);
        param_1[9] = 0;
      }
      goto LAB_00553421;
    case 0x206:
switchD_005537c4_caseD_206:
      if ((*(byte *)(param_1 + 3) & 0x40) != 0) {
        uVar12 = 0;
        if (uVar10 < 0x204) {
          if (uVar10 == 0x203) {
            uVar12 = 0x201;
          }
          else if (uVar10 == 0xa3) {
            uVar12 = 0xa1;
          }
          else if (uVar10 == 0xa6) {
            uVar12 = 0xa4;
          }
          else if (uVar10 == 0xa9) {
            uVar12 = 0xa7;
          }
        }
        else if (uVar10 == 0x206) {
          uVar12 = 0x204;
        }
        else if (uVar10 == 0x209) {
          uVar12 = 0x207;
        }
        FUN_00552e70(param_2,uVar12,uVar13,uVar14,param_6);
        goto LAB_00553421;
      }
      iVar11 = *param_1;
      param_1[7] = (int)sVar5;
      param_1[8] = (int)sVar6;
      param_1[2] = 9;
      break;
    case 0x207:
      goto switchD_005537c4_caseD_207;
    case 0x209:
      if ((*(byte *)(param_1 + 3) & 0x40) != 0) {
        uVar12 = 0;
        if (param_3 < 0x204) {
          if (param_3 == 0x203) {
            uVar12 = 0x201;
          }
          else if (param_3 == 0xa3) {
            uVar12 = 0xa1;
          }
          else if (param_3 == 0xa6) {
            uVar12 = 0xa4;
          }
          else if (param_3 == 0xa9) {
            uVar12 = 0xa7;
          }
        }
        else if (param_3 == 0x206) {
          uVar12 = 0x204;
        }
        else if (param_3 == 0x209) {
          uVar12 = 0x207;
        }
        FUN_00552e70(param_2,uVar12,param_4,param_5,param_6);
        goto switchD_005537c4_caseD_206;
      }
      iVar11 = *param_1;
      param_1[7] = (int)sVar5;
      param_1[8] = (int)sVar6;
      param_1[2] = 8;
      break;
    case 0x20a:
      if (param_1[2] != 0) goto LAB_00553421;
      local_2c = (**(code **)(*param_1 + 0x44))
                           (param_2,(int)sVar5,(int)sVar6,param_4 & 0xffff,
                            (int)(short)(param_4 >> 0x10));
      goto LAB_00553419;
    default:
      goto switchD_00552eb4_caseD_9;
    }
    (**(code **)(iVar11 + 0x18))(param_2,uVar10,(int)sVar5,(int)sVar6,uVar13);
    param_1[2] = 0;
  }
LAB_00553421:
  *param_6 = local_24;
  return local_2c;
}


