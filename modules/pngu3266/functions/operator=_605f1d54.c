/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1d54
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBitmapImage & __thiscall CPNBitmapImage::operator=(class CPNBitmapImage const &)
    */

CPNBitmapImage * __thiscall CPNBitmapImage::operator=(CPNBitmapImage *this,CPNBitmapImage *param_1)

{
                    /* 0x1d54  434  ??4CPNBitmapImage@@QAEAAV0@ABV0@@Z */
  XPNImage::operator=((XPNImage *)this,(XPNImage *)param_1);
  this[0x2a] = param_1[0x2a];
  *(undefined4 *)(this + 0x2b) = *(undefined4 *)(param_1 + 0x2b);
  *(undefined4 *)(this + 0x2f) = *(undefined4 *)(param_1 + 0x2f);
  return this;
}


