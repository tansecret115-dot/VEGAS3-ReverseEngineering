/* Module: vegas30.exe
   Function: FUN_004d05e0
   Address: 004d05e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d05e0(int param_1,int param_2,HDC param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int xDest;
  int iVar4;
  int yDest;
  int iVar5;
  int iVar6;
  int *piVar7;
  HGDIOBJ pvVar8;
  COLORREF color;
  COLORREF color_00;
  UINT c;
  UINT align;
  BITMAPINFO *pBVar9;
  BYTE *pBVar10;
  int iVar11;
  DWORD DVar12;
  tagSIZE local_38;
  tagRECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CHAR local_10 [16];
  
  piVar7 = param_4;
  if (*param_4 < param_4[2]) {
    xDest = *param_4;
    iVar4 = *(int *)(param_1 + 0x5d0);
    yDest = param_4[1];
    piVar1 = param_4 + 2;
    piVar2 = param_4 + 3;
    param_4 = (int *)(uint)(*(int *)(param_2 + 4) != 3);
    local_1c = piVar7[1];
    local_20 = *piVar7;
    iVar5 = *(int *)(iVar4 + 0x58);
    local_18 = local_20 + iVar5;
    local_30.bottom = *(int *)(iVar4 + 0x5c);
    local_14 = local_1c + local_30.bottom;
    if ((*piVar1 - xDest < iVar5) || (*piVar2 - yDest < local_30.bottom)) {
      local_30.bottom = yDest + 0x12;
      local_38.cx = (int)param_4 * 0x12;
      pBVar9 = *(BITMAPINFO **)(iVar4 + 0x54);
      if (pBVar9 == (BITMAPINFO *)0x0) {
        pBVar10 = (BYTE *)0x0;
      }
      else {
        DVar12 = (pBVar9->bmiHeader).biClrUsed;
        if ((DVar12 == 0) && (uVar3 = (pBVar9->bmiHeader).biBitCount, uVar3 < 9)) {
          DVar12 = 1 << ((byte)uVar3 & 0x1f);
        }
        pBVar10 = &pBVar9->bmiColors[DVar12 - 10].rgbBlue + (pBVar9->bmiHeader).biSize;
      }
      StretchDIBits(param_3,xDest,yDest,*(int *)(iVar4 + 0x4c),local_30.bottom - yDest,
                    (*(uint *)(param_2 + 0x690) % *(uint *)(iVar4 + 0x44)) * iVar5,local_38.cx,
                    *(int *)(iVar4 + 0x58),0x12,pBVar10,pBVar9,0,0xcc0020);
      local_14 = local_1c + 0x12;
    }
    else {
      local_30.bottom = local_30.bottom + yDest;
      iVar6 = *(int *)(iVar4 + 0x54);
      if (iVar6 == 0) {
        pBVar10 = (BYTE *)0x0;
        pBVar9 = (BITMAPINFO *)0x0;
      }
      else {
        iVar11 = *(int *)(iVar6 + 0x20);
        if ((iVar11 == 0) && (*(ushort *)(iVar6 + 0xe) < 9)) {
          iVar11 = 1 << ((byte)*(ushort *)(iVar6 + 0xe) & 0x1f);
        }
        pBVar9 = *(BITMAPINFO **)(iVar4 + 0x54);
        pBVar10 = &pBVar9->bmiColors[iVar11 + -10].rgbBlue + (pBVar9->bmiHeader).biSize;
      }
      StretchDIBits(param_3,xDest,yDest,*(int *)(iVar4 + 0x4c),local_30.bottom - yDest,
                    (*(uint *)(param_2 + 0x690) % *(uint *)(iVar4 + 0x44)) * iVar5,
                    *(int *)(iVar4 + 0x5c) * (int)param_4 + 0x36,*(int *)(iVar4 + 0x58),
                    *(int *)(iVar4 + 0x5c),pBVar10,pBVar9,0,0xcc0020);
    }
    pvVar8 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar8 = SelectObject(param_3,pvVar8);
    color = SetTextColor(param_3,0xffffff);
    color_00 = SetBkColor(param_3,*(COLORREF *)
                                   (&DAT_0063e298 +
                                   (*(uint *)(param_2 + 0x690) % *(uint *)(iVar4 + 0x44)) * 8));
    local_30.left = local_20;
    local_30.right = local_18;
    local_30.top = local_1c;
    local_30.bottom = local_14;
    c = SfPrintF(local_10,&DAT_0061052c,*(undefined4 *)(param_2 + 0x14));
    GetTextExtentPoint32A(param_3,local_10,c,&local_38);
    local_30.bottom = local_38.cy + local_30.top;
    local_30.right = local_38.cx + local_30.left;
    InflateRect(&local_30,0,-1);
    OffsetRect(&local_30,((1 < (int)c) - 1 & 2) + 2,3);
    if (3 < (int)c) {
      OffsetRect(&local_30,-1,0);
    }
    align = SetTextAlign(param_3,0);
    ExtTextOutA(param_3,local_30.left - (uint)(2 < (int)c),local_30.top + -1,6,&local_30,local_10,c,
                (INT *)0x0);
    SetTextAlign(param_3,align);
    SetBkColor(param_3,color_00);
    SetTextColor(param_3,color);
    SelectObject(param_3,pvVar8);
    return 0;
  }
  return 0;
}


