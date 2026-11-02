/* Module: vegas30.exe
   Function: FUN_004fba10
   Address: 004fba10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fba10(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  POINT Point;
  POINT pt;
  HWND pHVar2;
  HWND pHVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tagRECT local_2c;
  tagSCROLLINFO local_1c;
  
  iVar8 = (int)(short)param_4;
  iVar7 = (int)(short)((uint)param_4 >> 0x10);
  if (0x203 < param_2) {
    switch(param_2) {
    case 0x204:
    case 0x206:
      goto switchD_004fbdff_caseD_204;
    case 0x205:
      if ((param_3 & 1) != 0) {
        return 0;
      }
      pHVar2 = GetCapture();
      if (pHVar2 != (HWND)*param_1) {
        return 0;
      }
      ReleaseCapture();
      if (param_1[0xd] == 2) {
        FUN_004fac80(param_1,iVar8,iVar7,param_1[0x1b],1);
      }
      else if (param_1[0xd] == 5) {
        FUN_004fb860(param_1,iVar8,iVar7,(uint)param_1[3] >> 9 & 1,0);
        param_1[0xd] = 0;
        return 0;
      }
      param_1[0xd] = 0;
      return 0;
    default:
      return 0;
    case 0x20a:
      GetWindowRect((HWND)*param_1,&local_2c);
      pt.y = iVar7;
      pt.x = iVar8;
      BVar5 = PtInRect(&local_2c,pt);
      if (BVar5 == 0) {
        return 0;
      }
      pHVar2 = (HWND)param_1[10];
      local_1c.cbSize = 0x1c;
      local_1c.nMin = 0;
      local_1c.fMask = 4;
      local_1c.nMax = 0;
      local_1c.nPage = 0;
      local_1c.nPos = 0;
      local_1c.nTrackPos = 0;
      if (pHVar2 == (HWND)0x0) {
        pHVar2 = (HWND)*param_1;
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
      GetScrollInfo(pHVar2,iVar7,&local_1c);
      iVar7 = param_1[0x5b];
      iVar7 = ((iVar7 / 2 + local_1c.nPos + ((int)(short)-(short)(param_3 >> 0x10) / 0x78) * iVar7)
              / iVar7) * iVar7;
      if (iVar7 - local_1c.nPos != 0) {
        pHVar2 = (HWND)param_1[10];
        local_1c.fMask = 4;
        if (pHVar2 == (HWND)0x0) {
          pHVar2 = (HWND)*param_1;
          iVar8 = 1;
        }
        else {
          iVar8 = 2;
        }
        local_1c.nPos = iVar7;
        SetScrollInfo(pHVar2,iVar8,&local_1c,1);
      }
      FUN_004fa690(param_1);
      InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
      return 0;
    }
  }
  if (param_2 != 0x203) {
    if (param_2 < 0x201) {
      if (param_2 != 0x200) {
        if (param_2 != 0x1f) {
          return 0;
        }
        if (param_1[0xd] == 5) {
          FUN_004fb860(param_1,iVar8,iVar7,(uint)param_1[3] >> 9 & 1,1);
        }
        else if (param_1[0xd] == 9) {
          FUN_004fb8c0(param_1,1);
        }
        param_1[0x21] = 0;
        param_1[0xd] = 0;
        pHVar2 = GetCapture();
        if (pHVar2 == (HWND)*param_1) {
          ReleaseCapture();
        }
        UpdateWindow((HWND)*param_1);
        return 0;
      }
      pHVar2 = (HWND)*param_1;
      pHVar3 = GetCapture();
      if (pHVar3 == pHVar2) {
        switch(param_1[0xd]) {
        case 1:
          iVar6 = param_1[0x12];
          if ((param_3 & 2) != 0) {
            iVar6 = iVar6 << 1;
          }
          if (((-iVar6 <= iVar8 - param_1[0xb]) && (iVar8 - param_1[0xb] <= iVar6)) &&
             ((-iVar6 <= iVar7 - param_1[0xc] && (iVar7 - param_1[0xc] <= iVar6)))) {
            return 0;
          }
          piVar1 = (int *)param_1[0x5e];
          iVar7 = param_1[0x60];
          param_1[3] = param_1[3] & 0xfffffdff;
          param_1[0xd] = 5;
          if (piVar1 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *piVar1;
          }
          if ((-1 < iVar7) && (iVar7 <= iVar8 + -1)) {
            FUN_004fb660(param_1,*(undefined4 *)(piVar1[2] + iVar7 * 4));
            return 0;
          }
          break;
        case 2:
          iVar6 = param_1[0x12];
          if ((param_3 & 2) != 0) {
            iVar6 = iVar6 << 1;
          }
          if ((((-iVar6 <= iVar8 - param_1[0xb]) && (iVar8 - param_1[0xb] <= iVar6)) &&
              (-iVar6 <= iVar7 - param_1[0xc])) && (iVar7 - param_1[0xc] <= iVar6)) {
            return 0;
          }
          piVar1 = (int *)param_1[0x5e];
          iVar7 = param_1[0x60];
          param_1[3] = param_1[3] | 0x200;
          param_1[0xd] = 5;
          if (piVar1 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *piVar1;
          }
          if ((-1 < iVar7) && (iVar7 <= iVar8 + -1)) {
            FUN_004fb660(param_1,*(undefined4 *)(piVar1[2] + iVar7 * 4));
            return 0;
          }
          break;
        default:
          return 0;
        case 5:
          FUN_004fb800(param_1,iVar8,iVar7);
          return 0;
        case 9:
          GetClientRect(pHVar2,(LPRECT)&local_1c);
          FUN_004fc490(param_1,iVar8,iVar7);
          local_2c.left = iVar8;
          local_2c.top = iVar7;
          MapWindowPoints((HWND)*param_1,(HWND)0x0,(LPPOINT)&local_2c,1);
          Point.y = local_2c.top;
          Point.x = local_2c.left;
          pHVar2 = WindowFromPoint(Point);
          if (pHVar2 != (HWND)*param_1) {
            param_1[0x1f] = -1;
            FUN_004fb8c0(param_1,1);
            return 0;
          }
          goto LAB_004fbc3b;
        }
        FUN_004fb660(param_1,0);
        return 0;
      }
LAB_004fbc3b:
      FUN_004fb8c0(param_1,0);
      return 0;
    }
    if (param_2 != 0x201) {
      if (param_2 != 0x202) {
        return 0;
      }
      iVar6 = param_1[0xd];
      param_1[0xd] = 0;
      pHVar2 = GetCapture();
      if (pHVar2 == (HWND)*param_1) {
        ReleaseCapture();
      }
      if (iVar6 == 1) {
        return 0;
      }
      if (iVar6 != 5) {
        return 0;
      }
      uVar4 = (uint)param_1[3] >> 9 & 1;
      FUN_004fb860(param_1,iVar8,iVar7,uVar4,uVar4);
      return 0;
    }
  }
  if (param_1[0xd] == 7) {
    return 0;
  }
  if (param_1[0xd] == 9) {
    FUN_004fb8c0(param_1,1);
  }
  if (param_1[0xd] != 0) {
    return 0;
  }
  param_1[0xb] = iVar8;
  param_1[0xe] = iVar8;
  param_1[3] = (uint)(param_2 == 0x203) << 3 | param_1[3] & 0xfffffff7U;
  uVar4 = param_1[0x1b];
  param_1[0xc] = iVar7;
  param_1[0xf] = iVar7;
  if ((uVar4 < 0x118) || (0x119 < uVar4)) {
    if (((param_3 & 8) == 0) || (param_1[0x20] == 0)) {
      iVar8 = param_1[0x60];
      uVar4 = (-(uint)((param_3 & 4) != 0) & 0xfffffffd) + 4;
      iVar7 = param_1[0x1f];
    }
    else {
      iVar7 = param_1[0x1f];
      iVar8 = param_1[0x60];
      uVar4 = (uint)(byte)(((byte)param_3 & 4 | 8) >> 2);
    }
    FUN_004fb050(param_1,iVar8,iVar7,uVar4,0,0);
    uVar4 = param_1[0x1b];
    if (uVar4 == 0x10f) {
      param_1[0xd] = 0;
      return 0;
    }
    if ((uVar4 < 0x110) || (0x11f < uVar4)) {
      param_1[0xd] = 1;
      goto LAB_004fbdd1;
    }
  }
  param_1[0x21] = uVar4;
  param_1[0xd] = 7;
  InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 0x27),0);
LAB_004fbdd1:
  FUN_004fa5f0(param_1,0,0);
  SetCapture((HWND)*param_1);
  return 0;
switchD_004fbdff_caseD_204:
  if (param_1[0xd] == 9) {
    FUN_004fb8c0(param_1,1);
  }
  if (param_1[0xd] != 0) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    return 0;
  }
  param_1[0xb] = iVar8;
  param_1[0xe] = iVar8;
  param_1[3] = param_1[3] & 0xfffffff7;
  param_1[0xc] = iVar7;
  param_1[0xf] = iVar7;
  param_1[0xd] = 2;
  SetCapture((HWND)*param_1);
  if (param_1[0x20] == 0) {
    return 0;
  }
  if ((*(byte *)(param_1[0x20] + 0x11c) & 1) != 0) {
    return 0;
  }
  FUN_004fb050(param_1,param_1[0x60],param_1[0x1f],4,0,0);
  return 0;
}


