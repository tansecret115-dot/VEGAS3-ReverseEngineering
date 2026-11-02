/* Module: vegas30.exe
   Function: FUN_0050aba0
   Address: 0050aba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050aba0(HDC param_1,POINT *param_2,int param_3,COLORREF param_4,byte param_5,
                 BLENDFUNCTION param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  POINT *pPVar3;
  HRGN hrgnSrc2;
  HRGN ho;
  int iVar4;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ pvVar5;
  HRGN hrgnSrc1;
  uint uVar6;
  HRGN hrgn;
  uint local_20;
  uint local_1c;
  uint local_14;
  tagRECT local_10;
  
  pPVar3 = param_2;
  ho = CreatePolygonRgn(param_2,param_3,2);
  param_2 = (POINT *)0x0;
  if (ho != (HRGN)0x0) {
    hrgn = ho;
    if ((param_6 != (BLENDFUNCTION)0x0) &&
       (param_2 = (POINT *)CreateRectRgn(0,0,1,1), hrgn = (HRGN)param_2, param_2 != (POINT *)0x0)) {
      hrgnSrc1 = (HRGN)param_6;
      hrgnSrc2 = ho;
      if (-1 < (int)param_7) {
        hrgnSrc1 = ho;
        hrgnSrc2 = (HRGN)param_6;
      }
      CombineRgn((HRGN)param_2,hrgnSrc1,hrgnSrc2,
                 (param_7 ^ (int)param_7 >> 0x1f) - ((int)param_7 >> 0x1f));
    }
    iVar4 = SelectClipRgn(param_1,hrgn);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      if (param_6 == (BLENDFUNCTION)0x0) {
        uVar6 = pPVar3->x;
        local_14 = pPVar3->y;
        local_20 = uVar6;
        local_1c = local_14;
        if (1 < param_3) {
          param_3 = param_3 + -1;
          do {
            uVar1 = pPVar3[1].x;
            if ((int)uVar1 <= (int)uVar6) {
              uVar6 = uVar1;
            }
            uVar2 = pPVar3[1].y;
            if ((int)uVar2 <= (int)local_14) {
              local_14 = uVar2;
            }
            if ((int)local_20 <= (int)uVar1) {
              local_20 = uVar1;
            }
            if ((int)local_1c <= (int)uVar2) {
              local_1c = uVar2;
            }
            param_3 = param_3 + -1;
            pPVar3 = pPVar3 + 1;
          } while (param_3 != 0);
        }
        uVar6 = ((int)uVar6 < 1) - 1 & uVar6;
        local_14 = ((int)local_14 < 1) - 1 & local_14;
      }
      else {
        GetRgnBox((HRGN)param_2,&local_10);
        local_14 = local_10.top;
        local_20 = local_10.right;
        local_1c = local_10.bottom;
        uVar6 = local_10.left;
      }
      hdc = CreateCompatibleDC(param_1);
      h = CreateCompatibleBitmap(param_1,1,1);
      param_6 = (BLENDFUNCTION)((uint)param_5 << 0x10);
      pvVar5 = SelectObject(hdc,h);
      SetBkColor(hdc,param_4);
      local_10.left = 0;
      local_10.top = 0;
      local_10.right = 1;
      local_10.bottom = 1;
      ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      AlphaBlend(param_1,uVar6,local_14,local_20,local_1c,hdc,0,0,1,1,param_6);
      pvVar5 = SelectObject(hdc,pvVar5);
      if (pvVar5 != (HGDIOBJ)0x0) {
        DeleteObject(pvVar5);
      }
      if (hdc != (HDC)0x0) {
        DeleteDC(hdc);
      }
    }
    DeleteObject(ho);
    DeleteObject(param_2);
    SelectClipRgn(param_1,(HRGN)0x0);
  }
  return;
}


