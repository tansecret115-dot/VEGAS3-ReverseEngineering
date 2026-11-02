/* Module: vegas30.exe
   Function: FUN_004c2670
   Address: 004c2670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2670(undefined4 param_1,HDC param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HDC hdc;
  int *piVar5;
  HBITMAP h;
  HGDIOBJ pvVar6;
  undefined4 uVar7;
  uint color;
  HPEN h_00;
  HGDIOBJ h_01;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_50;
  int local_4c;
  int local_40;
  RECT local_20;
  RECT local_10;
  
  hdc = CreateCompatibleDC(param_2);
  if (hdc != (HDC)0x0) {
    piVar5 = (int *)_SfGetUIFontSize_4(0x6e);
    iVar2 = *piVar5;
    iVar12 = iVar2 + 3;
    iVar3 = *(int *)(param_3 + 4);
    iVar9 = iVar3 + -2;
    iVar14 = iVar9 * 6;
    h = CreateCompatibleBitmap(param_2,iVar12 * 5,iVar14);
    if (h == (HBITMAP)0x0) {
      DeleteDC(hdc);
      return;
    }
    pvVar6 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
    SelectObject(hdc,pvVar6);
    *param_4 = iVar12;
    param_4[1] = iVar9;
    param_4[2] = (int)h;
    param_4[4] = iVar12 * 5;
    param_4[5] = iVar14;
    param_4[3] = 0;
    pvVar6 = SelectObject(hdc,h);
    SetBkColor(hdc,0xff00ff);
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = iVar12 * 5;
    local_20.bottom = iVar14;
    ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    puVar10 = &DAT_0063e8b0;
    param_3 = 0;
    do {
      uVar7 = _SfGetUIColor_4(*puVar10);
      local_20.top = param_3;
      param_3 = param_3 + iVar9;
      local_20.left = 0;
      local_20.right = iVar12;
      local_20.bottom = param_3;
      _SfMarker_Create_24(hdc,&local_20,1,uVar7,0xffffffff,0xffffffff);
      OffsetRect(&local_20,iVar12,0);
      _SfMarker_Create_24(hdc,&local_20,0,uVar7,0xffffffff,0xffffffff);
      OffsetRect(&local_20,iVar12,0);
      _SfMarker_Create_24(hdc,&local_20,1,uVar7,0xffffffff,0xffffffff);
      OffsetRect(&local_20,iVar12,0);
      _SfMarker_Create_24(hdc,&local_20,0,uVar7,0xffffffff,0xffffffff);
      puVar10 = puVar10 + 1;
    } while (puVar10 < &DAT_0063e8c8);
    color = _SfGetUIColor_4(0x98);
    uVar8 = (color & 0xff) - 0x5c;
    iVar14 = (color >> 8 & 0xff) - 0x5c;
    iVar1 = (color >> 0x10 & 0xff) - 0x5c;
    h_00 = CreatePen(0,1,(uint)CONCAT11((iVar1 < 0) - 1U & (byte)iVar1,
                                        (iVar14 < 0) - 1U & (byte)iVar14) << 8 |
                         ((int)uVar8 < 0) - 1 & uVar8 & 0xff);
    iVar14 = iVar2 + 2;
    h_01 = SelectObject(hdc,h_00);
    iVar2 = iVar2 + 2 + iVar12 * 4;
    iVar12 = iVar12 * 4;
    local_50 = 0;
    local_40 = 2;
    do {
      SetBkColor(hdc,color);
      iVar13 = 0;
      iVar1 = iVar3 + -1 + local_50;
      if (0 < iVar14) {
        local_4c = iVar12 + 1 + iVar14;
        iVar4 = iVar1;
        do {
          iVar11 = iVar4 + 1;
          local_20.top = local_50 + 1 + iVar13;
          local_20.bottom = ((local_50 + 1) - iVar1) + iVar11;
          local_20.right = local_4c;
          local_20.left = iVar12 + 1;
          ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
          local_10.left = (iVar13 - iVar14) + iVar2;
          local_10.right = (local_10.left - iVar13) + iVar14;
          local_10.top = iVar4;
          local_10.bottom = iVar11;
          ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
          iVar13 = iVar13 + 1;
          local_4c = local_4c + -1;
          iVar4 = iVar11;
        } while (iVar13 < iVar14);
      }
      SelectObject(hdc,h_00);
      MoveToEx(hdc,iVar12 + iVar14,local_50 + 1,(LPPOINT)0x0);
      LineTo(hdc,iVar12,local_50 + 1 + iVar14);
      MoveToEx(hdc,iVar2 - iVar14,iVar1,(LPPOINT)0x0);
      LineTo(hdc,iVar2,iVar1 + iVar14);
      local_50 = local_50 + iVar9 * 2;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
    SelectObject(hdc,h_01);
    DeleteObject(h_00);
    SelectObject(hdc,pvVar6);
    DeleteDC(hdc);
    iVar12 = _SfCreateBitmapMask_12(param_2,param_4[2],0xff00ff);
    param_4[3] = iVar12;
  }
  return;
}


