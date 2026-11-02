/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNBitmapImage & __thiscall XPNBitmapImage::operator=(class XPNBitmapImage const &)
    */

XPNBitmapImage * __thiscall XPNBitmapImage::operator=(XPNBitmapImage *this,XPNBitmapImage *param_1)

{
                    /* 0x1cb0  510  ??4XPNBitmapImage@@QAEAAV0@ABV0@@Z */
  XPNImage::operator=((XPNImage *)this,(XPNImage *)param_1);
  this[0x2a] = param_1[0x2a];
  return this;
}


