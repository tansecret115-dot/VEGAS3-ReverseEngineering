/* Module: vegas30k.dll
   Function: _MeterInst_Message@16
   Address: 0107b860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _MeterInst_Message_16(uint *param_1,uint param_2,HWND param_3,uint *param_4)

{
  RECT *lprc;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  short sVar1;
  undefined4 uVar3;
  BOOL BVar4;
  HWND hWnd;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UINT Msg;
  tagPOINT local_124;
  uint local_11c;
  HWND local_118;
  undefined4 local_114;
  uint *local_110;
  uint local_10c;
  uint local_108;
  undefined1 *local_104;
  undefined1 local_100 [256];
  short sVar2;
  
                    /* 0x7b860  681  _MeterInst_Message@16 */
  if (0x5ff < param_2) {
    uVar3 = FUN_0107a620(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  if (param_2 < 0x31) {
    if (param_2 != 0x30) {
      switch(param_2) {
      default:
        return 0;
      case 0x14:
        goto switchD_0107b8c1_caseD_14;
      case 0x15:
      case 0x1a:
        uVar6 = FUN_0107a1c0(param_1);
        param_1[1] = (uVar6 & 1) << 4 | param_1[1] & 0xffffffef;
        FUN_0107a230(param_1);
        FUN_0107b610(param_1);
        return 0;
      }
    }
    FUN_0107a020(param_1,param_3,param_4);
    return 0;
  }
  sVar1 = (short)param_4;
  sVar2 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x88) {
    if (param_2 == 0x87) {
      return 0;
    }
    if (param_2 == 0x31) {
      uVar3 = FUN_0107a030(param_1);
      return uVar3;
    }
    if (param_2 != 0x7b) {
      if (param_2 != 0x84) {
        return 0;
      }
      if ((*param_1 & 4) != 0) {
        return 1;
      }
      if ((*param_1 & 0x10) == 0) {
        return 0xffffffff;
      }
      local_124.x = (LONG)sVar1;
      local_124.y = (LONG)sVar2;
      ScreenToClient((HWND)param_1[2],&local_124);
      pt.y = local_124.y;
      pt.x = local_124.x;
      BVar4 = PtInRect((RECT *)(param_1 + 6),pt);
      if (BVar4 == 0) {
        return 0xffffffff;
      }
      if ((param_1[1] & 1) == 0) {
        if (local_124.x < (int)(param_1[8] - param_1[0x10])) {
          return 0xffffffff;
        }
        if ((int)param_1[8] < local_124.x) {
          return 0xffffffff;
        }
        return 1;
      }
      if (local_124.y < (int)param_1[7]) {
        return 0xffffffff;
      }
      if ((int)(param_1[0x11] + param_1[7]) < local_124.y) {
        return 0xffffffff;
      }
      return 1;
    }
    local_124.x = (LONG)sVar1;
    local_124.y = (LONG)sVar2;
    if ((*param_1 & 4) != 0) {
      if ((HWND)param_1[2] != param_3) {
        return 0;
      }
      pt_00.y = local_124.y;
      pt_00.x = local_124.x;
      BVar4 = PtInRect((RECT *)(param_1 + 6),pt_00);
      if (BVar4 == 0) {
        return 0;
      }
      ClientToScreen(param_3,&local_124);
      FUN_0107a570(param_1,local_124.y << 0x10 | local_124.x & 0xffffU);
      return 0;
    }
    hWnd = (HWND)param_1[4];
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[2]);
    }
    Msg = 0x7b;
  }
  else if (param_2 == 0x11f) {
    if ((*param_1 & 4) == 0) {
      return 0;
    }
    local_11c = param_1[2];
    local_118 = (HWND)param_1[3];
    local_114 = 0xffffff99;
    local_10c = (uint)param_3 & 0xffff;
    local_110 = param_4;
    local_108 = (uint)param_3 >> 0x10;
    local_104 = &DAT_011db13c;
    if ((((param_4 != (uint *)0x0) || (local_108 != 0xffff)) && ((local_108 & 0x2012) == 0)) &&
       ((local_10c != 0 &&
        (iVar7 = _SfLoadString_16(DAT_01206124,local_10c,local_100,0x100), iVar7 != 0)))) {
      local_104 = local_100;
    }
    hWnd = (HWND)param_1[4];
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[2]);
    }
    param_4 = &local_11c;
    Msg = 0x4e;
    param_3 = local_118;
  }
  else {
    if (param_2 != 0x121) {
      if (param_2 != 0x201) {
        return 0;
      }
      if ((*param_1 & 0x10) == 0) {
        return 0;
      }
      lprc = (RECT *)(param_1 + 6);
      iVar7 = (int)sVar1;
      iVar8 = (int)sVar2;
      pt_01.y = iVar8;
      pt_01.x = iVar7;
      BVar4 = PtInRect(lprc,pt_01);
      if (BVar4 == 0) {
        return 0;
      }
      uVar6 = param_1[1];
      if ((uVar6 & 1) == 0) {
        if (iVar7 < (int)(param_1[8] - param_1[0x10])) {
          return 0;
        }
        if ((int)param_1[8] < iVar7) {
          return 0;
        }
        if ((uVar6 & 0x100) != 0) {
          uVar6 = 0;
          if (param_1[0x2a] != 0) {
            puVar5 = param_1 + 0x36;
            do {
              uVar6 = uVar6 + 1;
              *puVar5 = puVar5[-3];
              puVar5 = puVar5 + 9;
            } while (uVar6 < param_1[0x2a]);
          }
          InvalidateRect((HWND)param_1[2],lprc,0);
          return 0;
        }
        uVar6 = ((iVar8 - param_1[7]) * param_1[0x2a]) / param_1[0xb];
        if ((int)param_1[0x2a] <= (int)uVar6) {
          return 0;
        }
      }
      else {
        if (iVar8 < (int)param_1[7]) {
          return 0;
        }
        if ((int)(param_1[0x11] + param_1[7]) < iVar8) {
          return 0;
        }
        if ((uVar6 & 0x100) != 0) {
          uVar6 = 0;
          if (param_1[0x2a] != 0) {
            puVar5 = param_1 + 0x36;
            do {
              uVar6 = uVar6 + 1;
              *puVar5 = puVar5[-3];
              puVar5 = puVar5 + 9;
            } while (uVar6 < param_1[0x2a]);
          }
          InvalidateRect((HWND)param_1[2],lprc,0);
          return 0;
        }
        uVar6 = ((iVar7 - lprc->left) * param_1[0x2a]) / param_1[10];
        if ((int)param_1[0x2a] <= (int)uVar6) {
          return 0;
        }
      }
      param_1[uVar6 * 9 + 0x36] = param_1[uVar6 * 9 + 0x33];
      InvalidateRect((HWND)param_1[2],lprc,0);
      return 0;
    }
    hWnd = (HWND)param_1[4];
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[2]);
    }
    Msg = 0x121;
  }
  SendMessageA(hWnd,Msg,(WPARAM)param_3,(LPARAM)param_4);
switchD_0107b8c1_caseD_14:
  return 0;
}


