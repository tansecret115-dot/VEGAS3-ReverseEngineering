/* Module: vidcap30.exe
   Function: FUN_0049b180
   Address: 0049b180
   Source: Ghidra pseudocode (Stage 10 batch) */


HRGN FUN_0049b180(HBITMAP param_1,COLORREF param_2)

{
  bool bVar1;
  HDC hdc;
  HDC hdc_00;
  UINT UVar2;
  HBITMAP hbm;
  HGDIOBJ h;
  HGDIOBJ h_00;
  uint uVar3;
  HGLOBAL pvVar4;
  LPVOID lpvBits;
  LPBITMAPINFO lpbmi;
  HRGN hrgnDst;
  int x1;
  HRGN pHVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint y1;
  uint local_34;
  uint local_28;
  tagSIZE local_10;
  byte local_8 [8];
  
  if ((((param_1 != (HBITMAP)0x0) && (param_2 != 0)) &&
      (GetBitmapDimensionEx(param_1,&local_10), 0 < local_10.cx)) && (0 < local_10.cy)) {
    hdc = CreateCompatibleDC((HDC)0x0);
    hdc_00 = CreateCompatibleDC((HDC)0x0);
    SetBkColor(hdc_00,param_2);
    UVar2 = local_10.cy;
    if (local_10.cy < 0) {
      UVar2 = -local_10.cy;
    }
    hbm = CreateBitmap(local_10.cx,UVar2,1,1,(void *)0x0);
    h = SelectObject(hdc,hbm);
    h_00 = SelectObject(hdc_00,param_1);
    BitBlt(hdc,0,0,local_10.cx,local_10.cy,hdc_00,0,0,0xcc0020);
    SelectObject(hdc,h);
    SelectObject(hdc_00,h_00);
    uVar6 = local_10.cx & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    uVar6 = 0x20 - uVar6 & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    y1 = 0;
    uVar3 = (int)(local_10.cx + (local_10.cx >> 0x1f & 7U)) >> 3;
    uVar9 = uVar6 + local_10.cx >> 3;
    uVar6 = (uVar3 * 0x1fffffff + uVar9) * 8 - uVar6;
    UVar2 = local_10.cy;
    if (local_10.cy < 0) {
      UVar2 = -local_10.cy;
    }
    pvVar4 = GlobalAlloc(0x42,UVar2 * uVar9 * 10);
    lpvBits = GlobalLock(pvVar4);
    pvVar4 = GlobalAlloc(0x42,0x30);
    lpbmi = GlobalLock(pvVar4);
    (lpbmi->bmiHeader).biSize = 0x28;
    (lpbmi->bmiHeader).biWidth = local_10.cx;
    (lpbmi->bmiHeader).biHeight = -local_10.cy;
    (lpbmi->bmiHeader).biPlanes = 1;
    (lpbmi->bmiHeader).biBitCount = 1;
    (lpbmi->bmiHeader).biCompression = 0;
    (lpbmi->bmiHeader).biSizeImage = 0;
    (lpbmi->bmiHeader).biXPelsPerMeter = 0;
    (lpbmi->bmiHeader).biYPelsPerMeter = 0;
    (lpbmi->bmiHeader).biClrUsed = 0;
    (lpbmi->bmiHeader).biClrImportant = 0;
    UVar2 = local_10.cy;
    if (local_10.cy < 0) {
      UVar2 = -local_10.cy;
    }
    GetDIBits(hdc,hbm,0,UVar2,lpvBits,lpbmi,0);
    pvVar4 = GlobalHandle(lpbmi);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(lpbmi);
    GlobalFree(pvVar4);
    hrgnDst = CreateRectRgn(0,0,0,0);
    x1 = -1;
    local_8[0] = 0x80;
    local_8[1] = 0x40;
    local_8[2] = 0x20;
    local_8[3] = 0x10;
    local_8[4] = 8;
    local_8[5] = 4;
    local_8[6] = 2;
    local_8[7] = 1;
    bVar1 = false;
    while( true ) {
      uVar7 = local_10.cy;
      if (local_10.cy < 0) {
        uVar7 = -local_10.cy;
      }
      if (uVar7 <= y1) break;
      local_28 = 0;
      if (uVar9 != 0) {
        iVar8 = y1 * uVar9;
        do {
          if ((local_28 < uVar3) && ((*(char *)(iVar8 + (int)lpvBits) != '\0' || (x1 != -1)))) {
            local_34 = 0;
            do {
              if (x1 == -1) {
                if ((*(byte *)(iVar8 + (int)lpvBits) & local_8[local_34]) != 0) {
                  x1 = local_34 + local_28 * 8;
                }
              }
              else if ((*(byte *)(iVar8 + (int)lpvBits) & local_8[local_34]) == 0) {
                pHVar5 = CreateRectRgn(x1,y1,local_34 + local_28 * 8,y1 + 1);
                CombineRgn(hrgnDst,hrgnDst,pHVar5,2);
                DeleteObject(pHVar5);
                x1 = -1;
                bVar1 = true;
              }
              local_34 = local_34 + 1;
            } while (local_34 < 8);
          }
          else if (local_28 == uVar3) {
            uVar7 = 0;
            if (uVar6 != 0) {
              do {
                if (x1 == -1) {
                  if ((local_8[uVar7] & *(byte *)(iVar8 + (int)lpvBits)) != 0) {
                    x1 = uVar7 + local_28 * 8;
                  }
                }
                else if ((local_8[uVar7] & *(byte *)(iVar8 + (int)lpvBits)) == 0) {
                  pHVar5 = CreateRectRgn(x1,y1,uVar7 + local_28 * 8,y1 + 1);
                  CombineRgn(hrgnDst,hrgnDst,pHVar5,2);
                  DeleteObject(pHVar5);
                  x1 = -1;
                  bVar1 = true;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar6);
            }
            if (x1 != -1) {
              pHVar5 = CreateRectRgn(x1,y1,uVar7 + local_28 * 8,y1 + 1);
              CombineRgn(hrgnDst,hrgnDst,pHVar5,2);
              DeleteObject(pHVar5);
              x1 = -1;
              bVar1 = true;
            }
          }
          local_28 = local_28 + 1;
          iVar8 = iVar8 + 1;
        } while (local_28 < uVar9);
      }
      if ((uVar3 == uVar9) && (x1 != -1)) {
        pHVar5 = CreateRectRgn(x1,y1,local_10.cx,y1 + 1);
        CombineRgn(hrgnDst,hrgnDst,pHVar5,2);
        DeleteObject(pHVar5);
        x1 = -1;
        bVar1 = true;
      }
      y1 = y1 + 1;
    }
    pHVar5 = CreateRectRgn(0,0,local_10.cx,local_10.cy);
    CombineRgn(hrgnDst,hrgnDst,pHVar5,3);
    DeleteObject(pHVar5);
    if (!bVar1) {
      DeleteObject(hrgnDst);
      hrgnDst = (HRGN)0x0;
    }
    pvVar4 = GlobalHandle(lpvBits);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(lpvBits);
    GlobalFree(pvVar4);
    DeleteObject(hbm);
    DeleteDC(hdc);
    DeleteDC(hdc_00);
    return hrgnDst;
  }
  return (HRGN)0x0;
}


