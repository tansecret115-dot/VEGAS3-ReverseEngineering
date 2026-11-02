/* Module: sftrkfx1.dll
   Function: FUN_5cbc9900
   Address: 5cbc9900
   Source: Ghidra pseudocode (Stage 10 batch) */


float * FUN_5cbc9900(HDC param_1,uint param_2,HWND param_3,float *param_4)

{
  RECT *lprc;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  bool bVar1;
  short sVar2;
  float *pfVar4;
  BOOL BVar5;
  HWND hWnd;
  HDC pHVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  UINT Msg;
  tagPOINT local_124;
  float local_11c;
  HWND local_118;
  undefined4 local_114;
  float *local_110;
  uint local_10c;
  uint local_108;
  CHAR *local_104;
  CHAR local_100 [256];
  short sVar3;
  
  if (0x5ff < param_2) {
    pfVar4 = FUN_5cbc86c0(param_1,param_2,(float *)param_3,param_4);
    return pfVar4;
  }
  if (param_2 < 0x31) {
    if (param_2 != 0x30) {
      switch(param_2) {
      default:
        return (float *)0x0;
      case 0x14:
        goto switchD_5cbc9961_caseD_14;
      case 0x15:
      case 0x1a:
        bVar1 = FUN_5cbc8260();
        param_1[1].unused = (uint)bVar1 << 4 | param_1[1].unused & 0xffffffefU;
        FUN_5cbc82d0((int)param_1);
        FUN_5cbc96b0(param_1);
        return (float *)0x0;
      }
    }
    FUN_5cbc80c0((int)param_1,param_3);
    return (float *)0x0;
  }
  sVar2 = (short)param_4;
  sVar3 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x88) {
    if (param_2 == 0x87) {
      return (float *)0x0;
    }
    if (param_2 == 0x31) {
      pfVar4 = (float *)FUN_5cbc80d0((int)param_1);
      return pfVar4;
    }
    if (param_2 != 0x7b) {
      if (param_2 != 0x84) {
        return (float *)0x0;
      }
      if ((param_1->unused & 4U) != 0) {
        return (float *)0x1;
      }
      if ((param_1->unused & 0x10U) == 0) {
        return (float *)0xffffffff;
      }
      local_124.x = (LONG)sVar2;
      local_124.y = (LONG)sVar3;
      ScreenToClient((HWND)param_1[2].unused,&local_124);
      pt.y = local_124.y;
      pt.x = local_124.x;
      BVar5 = PtInRect((RECT *)(param_1 + 6),pt);
      if (BVar5 == 0) {
        return (float *)0xffffffff;
      }
      if ((param_1[1].unused & 1) == 0) {
        if (local_124.x < param_1[8].unused - param_1[0x10].unused) {
          return (float *)0xffffffff;
        }
        if (param_1[8].unused < local_124.x) {
          return (float *)0xffffffff;
        }
        return (float *)0x1;
      }
      if (local_124.y < param_1[7].unused) {
        return (float *)0xffffffff;
      }
      if (param_1[0x11].unused + param_1[7].unused < local_124.y) {
        return (float *)0xffffffff;
      }
      return (float *)0x1;
    }
    local_124.x = (LONG)sVar2;
    local_124.y = (LONG)sVar3;
    if ((param_1->unused & 4) != 0) {
      if ((HWND)param_1[2].unused != param_3) {
        return (float *)0x0;
      }
      pt_00.y = local_124.y;
      pt_00.x = local_124.x;
      BVar5 = PtInRect((RECT *)(param_1 + 6),pt_00);
      if (BVar5 == 0) {
        return (float *)0x0;
      }
      ClientToScreen(param_3,&local_124);
      FUN_5cbc8610((uint *)param_1,local_124.y << 0x10 | local_124.x & 0xffffU);
      return (float *)0x0;
    }
    hWnd = (HWND)param_1[4].unused;
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[2].unused);
    }
    Msg = 0x7b;
  }
  else if (param_2 == 0x11f) {
    if ((param_1->unused & 4) == 0) {
      return (float *)0x0;
    }
    local_11c = (float)param_1[2].unused;
    local_118 = (HWND)param_1[3].unused;
    local_114 = 0xffffff99;
    local_10c = (uint)param_3 & 0xffff;
    local_110 = param_4;
    local_108 = (uint)param_3 >> 0x10;
    local_104 = "";
    if ((((param_4 != (float *)0x0) || (local_108 != 0xffff)) && ((local_108 & 0x2012) == 0)) &&
       ((local_10c != 0 &&
        (iVar8 = FUN_5cbd56a0(DAT_5cc10b4c,local_10c,local_100,0x100), iVar8 != 0)))) {
      local_104 = local_100;
    }
    hWnd = (HWND)param_1[4].unused;
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[2].unused);
    }
    param_4 = &local_11c;
    Msg = 0x4e;
    param_3 = local_118;
  }
  else {
    if (param_2 != 0x121) {
      if (param_2 != 0x201) {
        return (float *)0x0;
      }
      if ((param_1->unused & 0x10) == 0) {
        return (float *)0x0;
      }
      lprc = (RECT *)(param_1 + 6);
      iVar8 = (int)sVar2;
      iVar9 = (int)sVar3;
      pt_01.y = iVar9;
      pt_01.x = iVar8;
      BVar5 = PtInRect(lprc,pt_01);
      if (BVar5 == 0) {
        return (float *)0x0;
      }
      uVar7 = param_1[1].unused;
      if ((uVar7 & 1) == 0) {
        if (iVar8 < param_1[8].unused - param_1[0x10].unused) {
          return (float *)0x0;
        }
        if (param_1[8].unused < iVar8) {
          return (float *)0x0;
        }
        if ((uVar7 & 0x100) != 0) {
          uVar7 = 0;
          if (param_1[0x2a].unused != 0) {
            pHVar6 = param_1 + 0x36;
            do {
              uVar7 = uVar7 + 1;
              pHVar6->unused = pHVar6[-3].unused;
              pHVar6 = pHVar6 + 9;
            } while (uVar7 < (uint)param_1[0x2a].unused);
          }
          InvalidateRect((HWND)param_1[2].unused,lprc,0);
          return (float *)0x0;
        }
        uVar7 = (uint)((iVar9 - param_1[7].unused) * param_1[0x2a].unused) /
                (uint)param_1[0xb].unused;
        if (param_1[0x2a].unused <= (int)uVar7) {
          return (float *)0x0;
        }
      }
      else {
        if (iVar9 < param_1[7].unused) {
          return (float *)0x0;
        }
        if (param_1[0x11].unused + param_1[7].unused < iVar9) {
          return (float *)0x0;
        }
        if ((uVar7 & 0x100) != 0) {
          uVar7 = 0;
          if (param_1[0x2a].unused != 0) {
            pHVar6 = param_1 + 0x36;
            do {
              uVar7 = uVar7 + 1;
              pHVar6->unused = pHVar6[-3].unused;
              pHVar6 = pHVar6 + 9;
            } while (uVar7 < (uint)param_1[0x2a].unused);
          }
          InvalidateRect((HWND)param_1[2].unused,lprc,0);
          return (float *)0x0;
        }
        uVar7 = (uint)((iVar8 - lprc->left) * param_1[0x2a].unused) / (uint)param_1[10].unused;
        if (param_1[0x2a].unused <= (int)uVar7) {
          return (float *)0x0;
        }
      }
      param_1[uVar7 * 9 + 0x36].unused = param_1[uVar7 * 9 + 0x33].unused;
      InvalidateRect((HWND)param_1[2].unused,lprc,0);
      return (float *)0x0;
    }
    hWnd = (HWND)param_1[4].unused;
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[2].unused);
    }
    Msg = 0x121;
  }
  SendMessageA(hWnd,Msg,(WPARAM)param_3,(LPARAM)param_4);
switchD_5cbc9961_caseD_14:
  return (float *)0x0;
}


