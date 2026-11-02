/* Module: vfplugs.dll
   Function: FUN_004182a0
   Address: 004182a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004182a0(undefined4 *param_1,HDC param_2)

{
  LPCSTR lpString;
  int iVar1;
  UINT UVar2;
  HFONT pHVar3;
  COLORREF color;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  code *pcVar5;
  int iVar6;
  RECT RStack_1a0;
  HGDIOBJ pvStack_190;
  HGDIOBJ pvStack_18c;
  undefined1 local_16c [8];
  LONG local_164;
  LONG local_160;
  int iStack_15c;
  RECT RStack_158;
  RECT RStack_148;
  CHAR aCStack_138 [312];
  
  local_16c._0_4_ = param_1[6];
  local_16c._4_4_ = param_1[7];
  local_164 = param_1[8];
  local_160 = param_1[9];
  GetClientRect((HWND)*param_1,(LPRECT)local_16c);
  pvStack_18c = (HGDIOBJ)0x4182f4;
  FillRect(param_2,(RECT *)local_16c,(HBRUSH)0x10);
  if ((param_1[3] != 0) && (param_1[5] != 0)) {
    local_16c._4_4_ = param_1[7];
    local_16c._0_4_ = param_1[6];
    local_164 = param_1[8];
    local_160 = param_1[9];
    iVar1 = GetDlgCtrlID((HWND)*param_1);
    if (param_1[1] == iVar1) {
      RStack_1a0.right = param_1[4];
    }
    else {
      RStack_1a0.right = param_1[3];
    }
    if ((int *)RStack_1a0.right == (int *)0x0) {
      RStack_1a0.bottom = 0;
    }
    else {
      if ((*(int *)(RStack_1a0.right + 0x20) == 0) && (*(ushort *)(RStack_1a0.right + 0xe) < 9)) {
        uVar4 = 1 << ((byte)*(ushort *)(RStack_1a0.right + 0xe) & 0x1f);
      }
      else {
        uVar4 = (uint)*(ushort *)(RStack_1a0.right + 0x20);
      }
      RStack_1a0.bottom = *(int *)RStack_1a0.right + (uVar4 & 0xffff) * 4 + RStack_1a0.right;
    }
    pvStack_18c = (HGDIOBJ)0x0;
    pvStack_190 = (HGDIOBJ)0x0;
    RStack_1a0.top = -1;
    RStack_1a0.left = -1;
    DrawDibDraw(param_1[5],param_2,local_16c._0_4_,local_16c._4_4_);
    UVar2 = GetWindowTextA((HWND)*param_1,aCStack_138,0x104);
    if (0 < (int)UVar2) {
      RStack_1a0.left = param_1[0x10];
      RStack_1a0.top = param_1[0x11];
      RStack_1a0.right = param_1[0x12];
      RStack_1a0.bottom = param_1[0x13];
      if (RStack_1a0.left < RStack_1a0.right) {
        pvStack_18c = GetStockObject(6);
        pvStack_190 = GetStockObject(5);
        pcVar5 = SelectObject_exref;
        pvStack_18c = SelectObject(param_2,pvStack_18c);
        pvStack_190 = SelectObject(param_2,pvStack_190);
        Rectangle(param_2,RStack_1a0.left,RStack_1a0.top,RStack_1a0.right,RStack_1a0.bottom);
        SelectObject(param_2,pvStack_18c);
        SelectObject(param_2,pvStack_190);
        RStack_1a0.left = param_1[10];
        RStack_1a0.top = param_1[0xb];
        RStack_1a0.right = param_1[0xc];
        RStack_1a0.bottom = param_1[0xd];
        SetTextColor(param_2,0xdcdcdc);
        SetBkColor(param_2,0x646464);
        pHVar3 = FUN_0044cf70(0x68);
        pvStack_18c = SelectObject(param_2,pHVar3);
        GetTextExtentPointA(param_2,aCStack_138,UVar2,(LPSIZE)&stack0xfffffe8c);
        ExtTextOutA(param_2,RStack_1a0.left + 4,
                    ((RStack_1a0.bottom - unaff_EBX) + 1 + RStack_1a0.top) / 2,6,&RStack_1a0,
                    aCStack_138,UVar2,(INT *)0x0);
        local_16c._0_4_ = param_1[0xf];
        if (((int *)local_16c._0_4_ != (int *)0x0) &&
           (pvStack_190 = *(HGDIOBJ *)local_16c._0_4_, 0 < (int)pvStack_190)) {
          RStack_1a0.left = param_1[0x14];
          RStack_1a0.top = param_1[0x15];
          RStack_1a0.right = param_1[0x16];
          RStack_1a0.bottom = param_1[0x17];
          ExtTextOutA(param_2,0,0,2,(RECT *)&stack0xfffffe7c,(LPCSTR)0x0,0,(INT *)0x0);
          pHVar3 = FUN_0044cf70(0x6e);
          pvStack_18c = SelectObject(param_2,pHVar3);
          while (pvStack_190 = (HGDIOBJ)((int)pvStack_190 + -1), -1 < (int)pvStack_190) {
            iVar1 = (int)pvStack_190 * *(int *)(local_16c._0_4_ + 4) + *(int *)(local_16c._0_4_ + 8)
            ;
            lpString = (LPCSTR)(iVar1 + 0x18);
            UVar2 = lstrlenA(lpString);
            GetTextExtentPointA(param_2,lpString,UVar2,(LPSIZE)&stack0xfffffe8c);
            SetTextColor(param_2,(-(uint)(*(int *)(iVar1 + 4) != 0) & 0x232323) + 0xdcdcdc);
            RStack_1a0.left = *(int *)(iVar1 + 8);
            RStack_1a0.top = *(int *)(iVar1 + 0xc);
            RStack_1a0.right = *(int *)(iVar1 + 0x10);
            RStack_1a0.bottom = *(int *)(iVar1 + 0x14);
            ExtTextOutA(param_2,((RStack_1a0.right - unaff_EBP) + RStack_1a0.left) / 2,
                        ((RStack_1a0.bottom - unaff_EBX) + 1 + RStack_1a0.top) / 2,6,&RStack_1a0,
                        lpString,UVar2,(INT *)0x0);
            pcVar5 = SelectObject_exref;
            if (*(int *)(iVar1 + 4) != 0) {
              iVar6 = RStack_1a0.right - RStack_1a0.left;
              iVar1 = RStack_1a0.bottom - RStack_1a0.top;
              color = SetBkColor(param_2,0xffffff);
              ExtTextOutA(param_2,0,0,2,(RECT *)&stack0xfffffe7c,(LPCSTR)0x0,0,(INT *)0x0);
              local_16c._4_4_ = RStack_1a0.left;
              local_160 = RStack_1a0.left + 1;
              iStack_15c = RStack_1a0.top + -1 + iVar1;
              local_164 = RStack_1a0.top;
              ExtTextOutA(param_2,0,0,2,(RECT *)(local_16c + 4),(LPCSTR)0x0,0,(INT *)0x0);
              SetBkColor(param_2,0);
              RStack_148.top = RStack_1a0.bottom + -1;
              RStack_148.right = iVar6 + RStack_1a0.left;
              RStack_148.left = RStack_1a0.left;
              RStack_148.bottom = RStack_1a0.bottom;
              ExtTextOutA(param_2,0,0,2,&RStack_148,(LPCSTR)0x0,0,(INT *)0x0);
              RStack_158.left = RStack_1a0.right + -1;
              RStack_158.top = RStack_1a0.top;
              RStack_158.bottom = iVar1 + RStack_1a0.top;
              RStack_158.right = RStack_1a0.right;
              ExtTextOutA(param_2,0,0,2,&RStack_158,(LPCSTR)0x0,0,(INT *)0x0);
              SetBkColor(param_2,color);
              pcVar5 = SelectObject_exref;
            }
          }
        }
        (*pcVar5)(param_2,pvStack_18c);
      }
    }
  }
  return;
}


