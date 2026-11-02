/* Module: pngu3266.dll
   Function: TransparentBlit
   Address: 605fb554
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::TransparentBlit(class CPNImage
   *,long,long,long,long,long,long,class CPNColor *) */

void __thiscall
CPNDC::TransparentBlit
          (CPNDC *this,CPNImage *param_1,long param_2,long param_3,long param_4,long param_5,
          long param_6,long param_7,CPNColor *param_8)

{
  bool bVar1;
  int iVar2;
  HDC hdc;
  HDC hdc_00;
  COLORREF color;
  int local_20;
  int local_1c;
  COLORREF local_18;
  HGDIOBJ local_14;
  HBITMAP local_10;
  COLORREF local_c;
  HGDIOBJ local_8;
  
                    /* 0xb554  2100  ?TransparentBlit@CPNDC@@UAEXPAVCPNImage@@JJJJJJPAVCPNColor@@@Z
                        */
  bVar1 = false;
  local_8 = (HGDIOBJ)0x0;
  if (param_1 != (CPNImage *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x18))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x10))(this);
    }
    else {
      iVar2 = 1;
    }
    local_8 = *(HGDIOBJ *)(param_1 + 0x14);
    if ((iVar2 == 0) || (local_8 == (HGDIOBJ)0x0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if (bVar1) {
    local_c = 0;
    (**(code **)(*(int *)param_1 + 0x40))(&local_20);
    hdc = CreateCompatibleDC(*(HDC *)(this + 0x1cf));
    hdc_00 = CreateCompatibleDC(*(HDC *)(this + 0x1cf));
    local_10 = CreateBitmap(local_20,local_1c,1,1,(void *)0x0);
    local_8 = SelectObject(hdc,local_8);
    local_14 = SelectObject(hdc_00,local_10);
    if (param_8 == (CPNColor *)0x0) {
      color = ::GetPixel(hdc,0,0);
    }
    else {
      color = *(COLORREF *)(param_8 + 8);
    }
    local_18 = SetBkColor(hdc,color);
    BitBlt(hdc_00,0,0,local_20,local_1c,hdc,0,0,0xcc0020);
    if (color != 0) {
      SetBkColor(hdc,0);
      local_c = SetTextColor(hdc,0xffffff);
      BitBlt(hdc,0,0,local_20,local_1c,hdc_00,0,0,0x8800c6);
    }
    BitBlt(*(HDC *)(this + 0x1cf),param_2,param_3,param_4,param_5,hdc_00,param_6,param_7,0x8800c6);
    BitBlt(*(HDC *)(this + 0x1cf),param_2,param_3,param_4,param_5,hdc,param_6,param_7,0xee0086);
    if (color != 0) {
      SetBkColor(hdc,color);
      SetTextColor(hdc,0);
      BitBlt(hdc,0,0,local_20,local_1c,hdc_00,0,0,0xee0086);
      SetTextColor(hdc,local_c);
    }
    SelectObject(hdc,local_8);
    SelectObject(hdc_00,local_14);
    SetBkColor(hdc,local_18);
    DeleteObject(local_10);
    DeleteDC(hdc);
    DeleteDC(hdc_00);
  }
  return;
}


