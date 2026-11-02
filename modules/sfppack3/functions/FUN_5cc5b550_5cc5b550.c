/* Module: sfppack3.dll
   Function: FUN_5cc5b550
   Address: 5cc5b550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc5b550(uint *param_1,HDC param_2,int *param_3)

{
  uint uVar1;
  HDC hdc;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  LONG LVar5;
  HBRUSH pHVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  COLORREF CVar10;
  HGDIOBJ h;
  int x;
  uint uVar11;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  RECT local_10;
  
  hdc = param_2;
  if ((param_1[3] & 0x40) == 0) {
    uVar11 = (uint)((*param_1 & 0xf00) == 0x100);
    iVar13 = param_3[3] - param_3[1];
    iVar12 = param_3[2] - *param_3;
    local_20.left = *param_3;
    local_20.top = param_3[1];
    local_20.right = param_3[2];
    local_20.bottom = param_3[3];
    InflateRect(&local_20,-param_1[0x1e],-param_1[0x1f]);
    uVar1 = param_1[3];
    if ((uVar1 & 0x800) == 0) {
      if ((uVar1 & 0x400) == 0) {
        pHVar6 = FUN_5cc69630(0);
        FillRect(param_2,&local_20,pHVar6);
      }
      else if ((uVar1 & 8) == 0) {
        GetSysColor(0xf);
        GetSysColor(0x10);
        FUN_5cc5bee0(param_2,&local_20.left);
      }
      else {
        GetSysColor(0x10);
        GetSysColor(0xf);
        FUN_5cc5bcd0(param_2,&local_20.left);
      }
      pHVar6 = FUN_5cc69630(6);
      h = SelectObject(param_2,pHVar6);
      if (uVar11 == 0) {
        PatBlt(param_2,*param_3,param_3[1],iVar12 + -1,1,0xf00021);
        PatBlt(param_2,*param_3,param_3[3] + -2,iVar12 + -1,1,0xf00021);
        PatBlt(param_2,*param_3,param_3[1],1,iVar13 + -1,0xf00021);
        x = param_3[2] + -2;
        iVar8 = iVar13 + -1;
        iVar13 = param_3[1];
        iVar7 = 1;
      }
      else if ((param_1[3] & 8) == 0) {
        iVar7 = iVar12 + -4;
        iVar8 = 2;
        iVar13 = iVar13 / 2 + -1 + param_3[1];
        x = *param_3 + 2;
      }
      else {
        iVar8 = iVar13 + -4;
        iVar13 = param_3[1] + 2;
        iVar7 = 2;
        x = iVar12 / 2 + -1 + *param_3;
      }
      PatBlt(param_2,x,iVar13,iVar7,iVar8,0xf00021);
      pHVar6 = FUN_5cc69630(0x14);
      SelectObject(param_2,pHVar6);
      if (iVar8 == 0) {
        local_10.left = local_10.top + -1;
        PatBlt(param_2,param_3[2] + -1,param_3[1],1,local_10.left,0xf00021);
        iVar7 = param_3[3];
        iVar13 = *param_3;
      }
      else {
        local_10.left = local_10.top + -1;
        PatBlt(param_2,param_3[2] + -1,param_3[1],1,local_10.left,0xf00021);
        iVar7 = param_3[3];
        iVar13 = *param_3;
      }
      iVar8 = 1;
      PatBlt(param_2,iVar13,iVar7 + -1,iVar12,1,0xf00021);
      pHVar6 = FUN_5cc69630(0x10);
      SelectObject(param_2,pHVar6);
      if (iVar8 == 0) {
        PatBlt(param_2,*param_3 + 1,param_3[1] + 1,1,uVar11 - 3,0xf00021);
        iVar12 = iVar12 + -3;
        iVar13 = param_3[1] + 1;
        iVar7 = *param_3 + 1;
      }
      else {
        PatBlt(param_2,*param_3,param_3[1],1,unaff_EDI,0xf00021);
        iVar13 = param_3[1];
        iVar7 = *param_3;
        iVar12 = iVar12 + -1;
      }
      PatBlt(param_2,iVar7,iVar13,iVar12,1,0xf00021);
    }
    else {
      uVar11 = (uint)((uVar1 & 0x10) != 0);
      if ((uVar1 & 1) == 0) {
        pHVar6 = FUN_5cc69630(0xf);
        FillRect(param_2,&local_20,pHVar6);
        param_2 = (HDC)0x0;
        if (uVar11 != 0xffffffff) {
          do {
            LVar5 = local_20.bottom;
            LVar4 = local_20.right;
            LVar3 = local_20.top;
            LVar2 = local_20.left;
            local_2c = local_20.top;
            local_30 = local_20.left;
            local_28 = local_20.right;
            local_24 = local_20.bottom;
            iVar7 = FUN_5cc5bb50((byte *)param_1,param_1[(int)((int)&param_2[1].unused + 3)]);
            uVar1 = param_1[3];
            if ((uVar1 & 8) == 0) {
              if ((uVar1 & 0x10) != 0) {
                iVar8 = (LVar5 - LVar3) / 2;
                if (param_2 == (HDC)0x0) {
                  local_24 = LVar3 + iVar8;
                }
                else {
                  local_2c = LVar3 + iVar8;
                }
              }
              if (iVar7 < LVar2) {
                local_28 = LVar2;
              }
              else if (iVar7 <= LVar4) {
                local_28 = iVar7;
              }
            }
            else {
              if ((uVar1 & 0x10) != 0) {
                iVar8 = (LVar4 - LVar2) / 2;
                if (param_2 == (HDC)0x0) {
                  local_28 = LVar2 + iVar8;
                }
                else {
                  local_30 = LVar2 + iVar8;
                }
              }
              if ((LVar3 <= iVar7) && (local_2c = iVar7, LVar5 < iVar7)) {
                local_2c = LVar5;
              }
            }
            DVar9 = GetSysColor(0xf);
            CVar10 = SetBkColor(hdc,(uint)CONCAT11((char)((((int)DVar9 >> 0x10 & 0xffU) << 2) / 5),
                                                   (char)(((DVar9 >> 8 & 0xff) << 2) / 5)) << 8 |
                                    ((DVar9 & 0xff) << 2) / 5);
            local_10.top = local_2c;
            local_10.left = local_30;
            local_10.right = local_28;
            local_10.bottom = local_24;
            ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(hdc,CVar10);
            param_2 = (HDC)((int)&param_2->unused + 1);
          } while ((int)param_2 < (int)(uVar11 + 1));
        }
      }
      else {
        DVar9 = GetSysColor(0xf);
        CVar10 = SetBkColor(param_2,(uint)CONCAT11((char)((((int)DVar9 >> 0x10 & 0xffU) << 2) / 5),
                                                   (char)(((DVar9 >> 8 & 0xff) << 2) / 5)) << 8 |
                                    ((DVar9 & 0xff) << 2) / 5);
        local_10.top = local_20.top;
        local_10.left = local_20.left;
        local_10.right = local_20.right;
        local_10.bottom = local_20.bottom;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(param_2,CVar10);
      }
      pHVar6 = FUN_5cc69630(0x14);
      h = SelectObject(hdc,pHVar6);
      PatBlt(hdc,param_3[2] + -1,param_3[1],1,iVar13 + -1,0xf00021);
      PatBlt(hdc,*param_3,param_3[3] + -1,iVar12,1,0xf00021);
      pHVar6 = FUN_5cc69630(0x10);
      SelectObject(hdc,pHVar6);
      PatBlt(hdc,*param_3,param_3[1],1,iVar13 + -1,0xf00021);
      PatBlt(hdc,*param_3,param_3[1],iVar12 + -1,1,0xf00021);
    }
    SelectObject(hdc,h);
    return 1;
  }
  return 0;
}


