/* Module: vegas30.exe
   Function: FUN_0054fc40
   Address: 0054fc40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054fc40(uint param_1,undefined4 *param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  LPARAM LVar6;
  int iVar7;
  DWORD DVar8;
  undefined4 uVar9;
  HCURSOR hCursor;
  HCURSOR pHVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  int local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar9 = DAT_0064b138;
  local_14 = 0;
  switch(param_2[2]) {
  case 1:
    FUN_0054d650(param_1);
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_0054f260(param_1);
    }
    FUN_0054d0c0(param_1);
    InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
    return 0;
  case 3:
  case 0xf:
    uVar3 = FUN_0054c520(param_1,param_2[5],param_2[6]);
    if (uVar3 < 0xa7e0) {
      if (uVar3 == 0xa7df) {
        puVar4 = (undefined4 *)FUN_0054a530(param_1);
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        FUN_0055bac0(*(undefined4 *)(param_1 + 0x98),*puVar4,1);
        return 0;
      }
      if (uVar3 < 0x6629) {
        if (uVar3 == 0x6628) {
switchD_0054fe87_caseD_a7e5:
          uVar11 = 0;
          puVar5 = &DAT_0061ad10;
          do {
            uVar13 = uVar11;
            if (*puVar5 == uVar3) break;
            puVar5 = puVar5 + 1;
            uVar11 = uVar11 + 1;
            uVar13 = param_1;
          } while (puVar5 < &DAT_0061ad78);
          uVar3 = 0;
          if (*(uint *)(param_1 + 0x550) != 0) {
            puVar12 = (ushort *)(*(int *)(param_1 + 0x54c) + 8);
            do {
              if (*puVar12 == uVar13) {
                FUN_0054c180(param_1,uVar3);
                return 0;
              }
              uVar3 = uVar3 + 1;
              puVar12 = puVar12 + 8;
            } while (uVar3 < *(uint *)(param_1 + 0x550));
          }
          FUN_0054c420(param_1,uVar13);
          return 0;
        }
        if (0x6620 < uVar3) {
          if (uVar3 != 0x6621) {
            return 0;
          }
          puVar4 = (undefined4 *)FUN_0054a530(param_1);
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
          FUN_004339c0(uVar9,*puVar4,0);
          return 0;
        }
        if (0x661e < uVar3) goto switchD_0054fe87_caseD_a7e5;
        if (uVar3 != 0x146b) {
          if (uVar3 != 0x5296) {
            return 0;
          }
          iVar7 = FUN_0054a530(param_1);
          if (iVar7 == 0) {
            return 0;
          }
          FUN_0054d7a0(param_1,iVar7);
          return 0;
        }
        if (DAT_00647e30 != 1) {
          return 0;
        }
        iVar7 = FUN_0054d270(param_1);
        if (iVar7 < 0) {
          return 0;
        }
        FUN_004edbe0(*(undefined4 *)(param_1 + 0xb8),1);
      }
      else {
        if (0xa7d6 < uVar3) {
          if (uVar3 < 0xa7d7) {
            return 0;
          }
          if (0xa7de < uVar3) {
            return 0;
          }
          goto switchD_0054fe87_caseD_a7e5;
        }
        if (uVar3 == 0xa7d6) {
          FUN_005503f0(param_1);
          return 0;
        }
        if (uVar3 < 0x666c) {
          return 0;
        }
        if (uVar3 < 0x6671) goto switchD_0054fe87_caseD_a7e5;
        if (uVar3 != 0xa7bb) {
          return 0;
        }
        iVar7 = FUN_0054d270(param_1);
        if (iVar7 < 0) {
          return 0;
        }
        FUN_0054d210(*(undefined4 *)(param_1 + 0xb8));
      }
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
    }
    else {
      if (uVar3 < 0xa7f1) {
        if (uVar3 == 0xa7f0) {
          FUN_0054d670(param_1,0);
          return 0;
        }
        switch(uVar3) {
        case 0xa7e2:
          goto switchD_0054fe87_caseD_a7e2;
        case 0xa7e3:
          uVar3 = SendMessageA(*(HWND *)(param_1 + 0x98),0x435,0,0);
          if ((uVar3 & 0x7000) == 0) {
            uVar2 = (ushort)uVar3 | 0x7000;
            *(undefined4 *)(param_1 + 0x580) = 1;
          }
          else {
            uVar2 = (ushort)uVar3 & 0x8fff;
            *(undefined4 *)(param_1 + 0x580) = 0;
          }
          SendMessageA(*(HWND *)(param_1 + 0x98),0x436,(uint)uVar2,0);
          return 0;
        default:
          goto switchD_0054fc6c_caseD_2;
        case 0xa7e5:
        case 0xa7e6:
        case 0xa7e7:
        case 0xa7e8:
        case 0xa7e9:
        case 0xa7ea:
        case 0xa7ec:
        case 0xa7ed:
        case 0xa7ee:
        case 0xa7ef:
          goto switchD_0054fe87_caseD_a7e5;
        }
      }
      if (uVar3 < 0xa7ff) {
        if (uVar3 == 0xa7fe) {
          uVar9 = FUN_005bad20(DAT_0064b138);
          FUN_0054cf80(uVar9);
          return 0;
        }
        if (uVar3 != 0xa7fc) {
          if (uVar3 != 0xa7fd) {
            return 0;
          }
          FUN_0054ce60(param_1);
          return 0;
        }
switchD_0054fe87_caseD_a7e2:
        FUN_0054d650(param_1);
        iVar7 = FUN_0054e120(param_1,uVar3 == 0xa7fc);
        if (-1 < iVar7) {
          return 0;
        }
        if (iVar7 != -0x7ff8fff2) {
          uVar9 = _SfGetString_8(DAT_00647204,0x6e4e);
          SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x10,uVar9);
          return 0;
        }
        uVar9 = _SfGetString_8(DAT_00647204,0x6e4d);
        SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x1010,uVar9);
        return 0;
      }
      if (uVar3 != 0xc87e) {
        return 0;
      }
      iVar7 = FUN_0054d270(param_1);
      if (iVar7 < 0) {
        return 0;
      }
      FUN_0043ef90(*(undefined4 *)(param_1 + 0xb8));
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
    }
    FUN_004ec820(uVar9);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return 0;
  case 4:
    if ((uint)param_2[4] < *(uint *)(param_1 + 0x550)) {
      sVar1 = *(short *)(param_2[4] * 0x10 + 8 + *(int *)(param_1 + 0x54c));
      if ((sVar1 == 7) || (sVar1 == 8)) {
        SendMessageA((HWND)*param_2,0x42f,0,0);
        return 0;
      }
      iVar7 = FUN_0054d270(param_1);
      if (-1 < iVar7) {
        if (DAT_00649cec == 0) {
          FUN_004ec630(*(undefined4 *)(param_1 + 0xb8),0,0,0);
        }
        else {
          FUN_0054d210(*(undefined4 *)(param_1 + 0xb8));
        }
        goto LAB_0055023f;
      }
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_0054f260(param_1);
      return 0;
    }
    break;
  case 6:
    FUN_0054d650(param_1);
    break;
  case 0xe:
    uVar3 = param_2[4];
    if (uVar3 != 0xffff) {
      uVar3 = -(uint)(uVar3 < 0x1a) & uVar3;
      local_c = param_2[7];
      if (local_c < uVar3) {
        uVar3 = uVar3 + 1;
      }
      if (*(uint *)(param_1 + 0x550) <= uVar3) {
        uVar3 = *(uint *)(param_1 + 0x550);
      }
      local_10 = 0xffff;
      local_8 = 0xffff;
      local_4 = local_c;
      SendMessageA((HWND)*param_2,0x407,uVar3,(LPARAM)&local_10);
      LVar6 = FUN_0054c2f0(param_1,*(undefined4 *)(param_1 + 0x56c));
      SendMessageA((HWND)*param_2,0x43b,*(WPARAM *)(param_1 + 0x570),LVar6);
      return 0;
    }
    FUN_0054c180(param_1,param_2[7]);
    return 0;
  case 0x11:
    uVar3 = param_2[4];
    if ((uVar3 != 0xffff) && (uVar3 < *(uint *)(param_1 + 0x550))) {
      uVar3 = (uint)*(ushort *)(uVar3 * 0x10 + 8 + *(int *)(param_1 + 0x54c));
      if (uVar3 == *(uint *)(param_1 + 0x56c)) {
        *(uint *)(param_1 + 0x570) = (uint)(*(int *)(param_1 + 0x570) == 0);
        *(uint *)(param_1 + 0x578) = (uint)(*(int *)(param_1 + 0x578) == 0);
      }
      else {
        FUN_0054c340(param_1,uVar3,1);
      }
      _SfList_Sort_12(*(undefined4 *)(param_1 + 0xb4),param_1,FUN_0054c120);
      LVar6 = FUN_0054c2f0(param_1,*(undefined4 *)(param_1 + 0x56c));
      SendMessageA((HWND)*param_2,0x43b,*(WPARAM *)(param_1 + 0x570),LVar6);
      SendMessageA((HWND)*param_2,0x422,0xffffffff,0x1ffff);
      return 0;
    }
    break;
  case 0x16:
  case 0x17:
    FUN_0054d650(param_1);
    iVar7 = FUN_0054d270(param_1);
    if (iVar7 < 0) {
LAB_0055023f:
      FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return 0;
    }
    local_14 = FUN_0040c3e0(DAT_0064762c,*(undefined4 *)(param_1 + 0xb8),5);
    if (local_14 == 0) {
      FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 1;
    if (param_2[2] == 0x16) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    SetCapture(*(HWND *)(param_1 + 0x8c));
    SetFocus(*(HWND *)(param_1 + 0x98));
    DVar8 = GetMessagePos();
    uVar9 = FUN_0040c4b0(DAT_0064762c,*(undefined4 *)(param_1 + 0xb8),(int)(short)DVar8,
                         (int)(short)(DVar8 >> 0x10));
    hCursor = (HCURSOR)_SfGetUICursor_4(uVar9);
    pHVar10 = GetCursor();
    if (pHVar10 != hCursor) {
      SetCursor(hCursor);
      return local_14;
    }
  }
switchD_0054fc6c_caseD_2:
  return local_14;
}


