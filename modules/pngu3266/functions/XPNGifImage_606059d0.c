/* Module: pngu3266.dll
   Function: XPNGifImage
   Address: 606059d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNGifImage::XPNGifImage(class XPNGifImage const &) */

XPNGifImage * __thiscall XPNGifImage::XPNGifImage(XPNGifImage *this,XPNGifImage *param_1)

{
  int iVar1;
  XPNGifImage *pXVar2;
  XPNGifImage *pXVar3;
  
                    /* 0x159d0  222  ??0XPNGifImage@@QAE@ABV0@@Z */
  XPNImage::XPNImage((XPNImage *)this,(XPNImage *)param_1);
  *(undefined ***)this = &CPNImage::_vftable_;
  *(undefined4 *)(this + 0x2a) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined4 *)(this + 0x2e) = *(undefined4 *)(param_1 + 0x2e);
  pXVar2 = param_1 + 0x32;
  pXVar3 = this + 0x32;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pXVar3 = *(undefined4 *)pXVar2;
    pXVar2 = pXVar2 + 4;
    pXVar3 = pXVar3 + 4;
  }
  this[0x432] = param_1[0x432];
  *(undefined4 *)(this + 0x433) = *(undefined4 *)(param_1 + 0x433);
  *(undefined ***)this = &_vftable_;
  return this;
}


