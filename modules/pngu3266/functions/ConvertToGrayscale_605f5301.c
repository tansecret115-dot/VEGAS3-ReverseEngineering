/* Module: pngu3266.dll
   Function: ConvertToGrayscale
   Address: 605f5301
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::ConvertToGrayscale(void) */

int __thiscall CPNBitmapImage::ConvertToGrayscale(CPNBitmapImage *this)

{
  int iVar1;
  
                    /* 0x5301  883  ?ConvertToGrayscale@CPNBitmapImage@@UAEHXZ */
  iVar1 = XPNBitmapImage::ConvertToGrayscaleWithMask((XPNBitmapImage *)this,(CPNColor *)0x0,0);
  return iVar1;
}


