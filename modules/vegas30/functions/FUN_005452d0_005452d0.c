/* Module: vegas30.exe
   Function: FUN_005452d0
   Address: 005452d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005452d0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  HDC hdc;
  HGDIOBJ pvVar4;
  int iVar5;
  UINT c;
  int iVar6;
  int *piVar7;
  int iVar8;
  tagRECT local_6c4;
  int local_6b4;
  HPEN local_6b0;
  double local_6ac;
  undefined8 local_6a4;
  LONG local_69c;
  LONG local_698;
  int local_694;
  int local_690;
  short local_68c;
  short local_68a;
  short local_688;
  undefined2 local_686;
  int local_684;
  HPEN local_680;
  int local_67c;
  double local_678;
  int local_670;
  int local_66c;
  HPEN local_668;
  double local_664;
  COLORREF local_65c;
  HGDIOBJ local_658;
  HGDIOBJ local_654;
  UINT local_650;
  tagSIZE local_64c;
  tagSIZE local_644;
  CHAR local_63c [260];
  CHAR local_538 [260];
  undefined1 local_434 [1064];
  HGDIOBJ local_c;
  HDC local_8;
  undefined4 local_4;
  
  local_670 = FUN_00548ec0(local_434,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x1c)
  ;
  if (-1 < local_670) {
    local_6b4 = *(int *)(param_1 + 4) * *(int *)(param_1 + 8);
    if (local_6b4 < 2) {
      local_6b4 = 1;
    }
    if ((DAT_006575f8 & 1) == 0) {
      DAT_006575f8 = DAT_006575f8 | 1;
      DAT_006575f4 = GetSysColor(0x12);
    }
    if ((DAT_006575f8 & 2) == 0) {
      DAT_006575f8 = DAT_006575f8 | 2;
      DAT_006575f0 = GetSysColor(0xf);
    }
    hdc = local_8;
    local_658 = SelectObject(local_8,local_c);
    local_6c4.right = *(int *)(param_1 + 4);
    local_6c4.bottom = *(int *)(param_1 + 8);
    local_6c4.left = 0;
    local_6c4.top = 0;
    local_65c = SetBkColor(hdc,DAT_006575f0);
    local_6a4._4_4_ = local_6c4.top;
    local_6a4._0_4_ = local_6c4.left;
    local_69c = local_6c4.right;
    local_698 = local_6c4.bottom;
    ExtTextOutA(hdc,0,0,2,(RECT *)&local_6a4,(LPCSTR)0x0,0,(INT *)0x0);
    pvVar4 = (HGDIOBJ)_SfGetUIFont_4();
    local_654 = SelectObject(hdc,pvVar4);
    iVar6 = local_6b4;
    iVar5 = 0;
    piVar7 = param_4;
    local_664 = _DAT_00610fd8;
    do {
      iVar1 = *piVar7;
      piVar7 = piVar7 + 1;
      local_6b0 = (HPEN)(iVar1 * iVar5);
      iVar5 = iVar5 + 1;
      local_664 = (double)(int)local_6b0 + local_664;
    } while (iVar5 < 0x100);
    dVar3 = (double)local_6b4;
    local_6b4 = 0;
    local_6ac = (double)iVar6;
    local_664 = local_664 / dVar3;
    piVar7 = param_4;
    local_678 = _DAT_00610fd8;
    do {
      dVar3 = (double)local_6b4;
      local_6b4 = local_6b4 + 1;
      local_678 = (double)*piVar7 * (local_664 - dVar3) * (local_664 - dVar3) + local_678;
      piVar7 = piVar7 + 1;
    } while (local_6b4 < 0x100);
    c = SfPrintF(local_63c,"Mean: %.2f%%",local_664 * _DAT_0061ac20);
    local_650 = c;
    iVar6 = SfPrintF(local_538,"Standard Deviation: %.2f%%",
                     SQRT(local_678 / local_6ac) * _DAT_0061ac20);
    local_664 = (double)CONCAT44(local_664._4_4_,iVar6);
    GetTextExtentPoint32A(hdc,local_63c,c,&local_64c);
    GetTextExtentPoint32A(hdc,local_538,iVar6,&local_644);
    local_6b4 = local_64c.cy;
    if (local_64c.cy <= local_644.cy) {
      local_6b4 = local_644.cy;
    }
    local_6c4.bottom = local_6c4.bottom + (-0x10 - local_6b4);
    DrawEdge(hdc,&local_6c4,2,0xf);
    InflateRect(&local_6c4,-1,-1);
    iVar6 = local_6c4.right - local_6c4.left;
    fVar2 = (float10)log2((float10)local_6ac);
    local_6a4 = (double)((float10)0.6931471805599453 * fVar2);
    local_66c = iVar6;
    local_680 = CreatePen(0,1,DAT_006575f4);
    local_668 = CreatePen(0,1,0xc2a33);
    local_6b0 = CreatePen(0,1,0xacd1dd);
    pvVar4 = SelectObject(hdc,local_680);
    iVar5 = 0;
    local_6ac = (double)CONCAT44(local_6ac._4_4_,pvVar4);
    if (0 < iVar6) {
      local_67c = 0;
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        iVar8 = 0;
        iVar6 = local_67c / iVar6;
        local_678 = (double)CONCAT44(local_678._4_4_,iVar6);
        iVar1 = param_4[iVar6];
        local_684 = iVar1;
        if (iVar1 != 0) {
          local_684 = local_6c4.bottom - local_6c4.top;
          log2((float10)iVar1);
          iVar8 = ftol();
          iVar6 = local_678._0_4_;
        }
        if (local_6c4.bottom - local_6c4.top <= iVar8) {
          iVar8 = local_6c4.bottom - local_6c4.top;
        }
        if ((param_5 == 5) && ((iVar6 < 0x10 || (0xeb < iVar6)))) {
          SelectObject(hdc,local_668);
          MoveToEx(hdc,iVar5 + local_6c4.left,local_6c4.bottom,(LPPOINT)0x0);
          LineTo(hdc,iVar5 + local_6c4.left,local_6c4.bottom - iVar8);
          SelectObject(hdc,local_6b0);
          MoveToEx(hdc,iVar5 + local_6c4.left,local_6c4.top,(LPPOINT)0x0);
          iVar8 = local_6c4.bottom - iVar8;
        }
        else {
          SelectObject(hdc,local_680);
          MoveToEx(hdc,iVar5 + local_6c4.left,local_6c4.bottom,(LPPOINT)0x0);
          iVar8 = local_6c4.bottom - iVar8;
        }
        LineTo(hdc,iVar5 + local_6c4.left,iVar8);
        iVar5 = iVar5 + 1;
        local_67c = local_67c + 0xff;
        iVar6 = local_66c;
      } while (iVar5 < local_66c);
    }
    SelectObject(hdc,SUB84(local_6ac,0));
    DeleteObject(local_680);
    DeleteObject(local_668);
    DeleteObject(local_6b0);
    InflateRect(&local_6c4,1,1);
    local_6c4.top = local_6c4.bottom + 2;
    local_6c4.bottom = local_6c4.bottom + 0xc;
    DrawEdge(hdc,&local_6c4,2,0xf);
    InflateRect(&local_6c4,-1,-1);
    iVar6 = local_670;
    switch(param_5) {
    case 1:
      iVar6 = 0xff0000;
      break;
    case 2:
      iVar6 = 0xff00;
      break;
    case 3:
      iVar6 = 0xff;
      break;
    case 4:
    case 5:
      iVar6 = 0xffffff;
    }
    local_6a4._4_4_ = local_6c4.top;
    local_6a4._0_4_ = local_6c4.left;
    local_69c = 0;
    local_698 = 0;
    local_694 = local_6c4.right;
    local_690 = local_6c4.bottom;
    local_68c = (ushort)(byte)iVar6 << 8;
    local_68a = (ushort)(byte)((uint)iVar6 >> 8) << 8;
    local_688 = (ushort)(byte)((uint)iVar6 >> 0x10) << 8;
    local_686 = 0;
    local_6ac = 2.12199579096527e-314;
    GradientFill(hdc,(PTRIVERTEX)&local_6a4,2,&local_6ac,1,0);
    InflateRect(&local_6c4,1,1);
    local_678 = (double)((ulonglong)local_678 & 0xffffffff00000000);
    local_6c4.top = local_6c4.bottom + 2;
    local_6c4.bottom = local_6c4.bottom + 2 + local_6b4;
    SetTextAlign(hdc,0);
    SetTextColor(hdc,DAT_006575f4);
    local_698 = local_6c4.bottom;
    local_6a4._4_4_ = local_6c4.top;
    local_6a4._0_4_ = local_6c4.left;
    local_69c = (local_6c4.right - local_6c4.left) / 2 + local_6c4.left;
    if (local_69c - local_6c4.left < local_64c.cx) {
      local_69c = local_6c4.right;
      iVar6 = 1;
    }
    else {
      iVar6 = local_678._0_4_;
    }
    if (local_64c.cx < local_69c - local_6c4.left) {
      ExtTextOutA(hdc,local_6c4.left,local_6c4.top,4,(RECT *)&local_6a4,local_63c,local_650,
                  (INT *)0x0);
    }
    if (iVar6 == 0) {
      local_698 = local_6c4.bottom;
      iVar6 = local_6c4.right - (local_6c4.right - local_6c4.left) / 2;
      local_69c = local_6c4.right;
      local_6a4._4_4_ = local_6c4.top;
      local_6a4._0_4_ = iVar6;
      if (local_644.cx < local_6c4.right - iVar6) {
        ExtTextOutA(hdc,iVar6,local_6c4.top,4,(RECT *)&local_6a4,local_538,local_664._0_4_,
                    (INT *)0x0);
      }
    }
    GdiFlush();
    _SfDibCopy_36(param_1,param_2,0,param_3,local_434,local_4,0,0,3);
    SetBkColor(hdc,local_65c);
    SelectObject(hdc,local_654);
    SelectObject(local_8,local_658);
    FUN_00548f50();
  }
  return local_670;
}


