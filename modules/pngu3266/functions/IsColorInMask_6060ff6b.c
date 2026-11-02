/* Module: pngu3266.dll
   Function: IsColorInMask
   Address: 6060ff6b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNBitmapImage::IsColorInMask(class CPNColor const &,class CPNColor
   *,unsigned long) */

int __thiscall
XPNBitmapImage::IsColorInMask
          (XPNBitmapImage *this,CPNColor *param_1,CPNColor *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1ff6b  1494  ?IsColorInMask@XPNBitmapImage@@IAEHABVCPNColor@@PAV2@K@Z */
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = CPNColor::operator==(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      param_2 = param_2 + 0x1f;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}


