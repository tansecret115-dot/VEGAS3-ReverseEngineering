/* Module: pngu3266.dll
   Function: CPNBitmapImage
   Address: 605f4639
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBitmapImage::CPNBitmapImage(struct tagPN_BITMAPINFO &) */

CPNBitmapImage * __thiscall
CPNBitmapImage::CPNBitmapImage(CPNBitmapImage *this,tagPN_BITMAPINFO *param_1)

{
  int iVar1;
  undefined4 uVar2;
  HBITMAP pHVar3;
  CPNBitmapImage *local_8;
  
  local_8 = this;
                    /* 0x4639  9  ??0CPNBitmapImage@@QAE@AAUtagPN_BITMAPINFO@@@Z */
  XPNBitmapImage::XPNBitmapImage((XPNBitmapImage *)this);
  *(undefined4 *)(this + 0x2b) = 0;
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined ***)this = &_vftable_;
  iVar1 = *(int *)(param_1 + 8);
  local_8 = (CPNBitmapImage *)0x0;
  if (iVar1 != 0) {
    *(int *)(param_1 + 8) = -iVar1;
  }
  pHVar3 = CreateDIBSection((HDC)0x0,(BITMAPINFO *)param_1,0,&local_8,(HANDLE)0x0,0);
  *(int *)(param_1 + 8) = iVar1;
  CopyBitmapInfo(this,(tagBITMAPINFO *)param_1);
  *(undefined4 *)(this + 0x1c) = 1;
  *(HBITMAP *)(this + 0x14) = pHVar3;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar2;
  *(CPNBitmapImage **)(this + 0x2f) = local_8;
  return this;
}


