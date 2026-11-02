/* Module: vegas30k.dll
   Function: FUN_01116ad0
   Address: 01116ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


HIMAGELIST FUN_01116ad0(int param_1,undefined4 param_2,int *param_3)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar1;
  HGDIOBJ h;
  HBITMAP hbmImage;
  int iVar2;
  int cx;
  uint uVar3;
  int cy;
  HIMAGELIST local_18;
  undefined1 local_8 [4];
  int local_4;
  
  local_18 = (HIMAGELIST)0x0;
  if (param_3 != (int *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
  }
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC((HDC)0x0);
  if (hdc_00 != (HDC)0x0) {
    pvVar1 = (HGDIOBJ)_SfGetUIFont_4(0x68);
    h = SelectObject(hdc_00,pvVar1);
    _SfGetTextExtent_16(pvVar1,&DAT_011da99c,1,local_8);
    SelectObject(hdc_00,h);
    if (param_1 == 0) {
      uVar3 = local_4 + 4;
    }
    else {
      uVar3 = local_4 + 6;
    }
    cy = uVar3 + (uVar3 & 1);
    cx = cy / 2 + 3;
    hbmImage = CreateCompatibleBitmap(hdc,cx * 0xb,cy);
    if (hbmImage != (HBITMAP)0x0) {
      pvVar1 = SelectObject(hdc_00,hbmImage);
      PatBlt(hdc_00,0,0,cx * 0xb,cy,0x42);
      iVar2 = 0;
      local_18 = (HIMAGELIST)0x0;
      do {
        if (param_1 == 0) {
          FUN_01116c60(0,hdc_00,local_18,0,cx,cy,iVar2,1,param_2,0xff00ff);
        }
        else {
          FUN_01117680(hdc_00,local_18,0,cx,cy,iVar2,1,0xff00ff);
        }
        GdiFlush();
        iVar2 = iVar2 + 1;
        local_18 = (HIMAGELIST)((int)local_18 + cx);
      } while (iVar2 < 0xb);
      local_18 = ImageList_Create(cx,cy,0xff,0xb,1);
      SelectObject(hdc_00,pvVar1);
      ImageList_AddMasked(local_18,hbmImage,0xff00ff);
      DeleteObject(hbmImage);
      if (param_3 != (int *)0x0) {
        *param_3 = cx;
        param_3[1] = cy;
      }
    }
    DeleteDC(hdc_00);
  }
  ReleaseDC((HWND)0x0,hdc);
  return local_18;
}


