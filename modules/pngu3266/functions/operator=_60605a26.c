/* Module: pngu3266.dll
   Function: operator=
   Address: 60605a26
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNGifImage & __thiscall XPNGifImage::operator=(class XPNGifImage const &) */

XPNGifImage * __thiscall XPNGifImage::operator=(XPNGifImage *this,XPNGifImage *param_1)

{
  XPNGifImage *pXVar1;
  int iVar2;
  
                    /* 0x15a26  526  ??4XPNGifImage@@QAEAAV0@ABV0@@Z */
  XPNImage::operator=((XPNImage *)this,(XPNImage *)param_1);
  *(undefined4 *)(this + 0x2a) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined4 *)(this + 0x2e) = *(undefined4 *)(param_1 + 0x2e);
  pXVar1 = this + 0x32;
  iVar2 = 0x100;
  do {
    *(undefined4 *)pXVar1 = *(undefined4 *)(pXVar1 + ((int)param_1 - (int)this));
    pXVar1 = pXVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this[0x432] = param_1[0x432];
  *(undefined4 *)(this + 0x433) = *(undefined4 *)(param_1 + 0x433);
  return this;
}


