/* Module: pngu3266.dll
   Function: ConvertToGrayscaleWithMask
   Address: 6060ff9f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNBitmapImage::ConvertToGrayscaleWithMask(class CPNColor *,unsigned
   long) */

int __thiscall
XPNBitmapImage::ConvertToGrayscaleWithMask(XPNBitmapImage *this,CPNColor *param_1,ulong param_2)

{
  XPNBitmapImage XVar1;
  XPNBitmapImage *pXVar2;
  int iVar3;
  int iVar4;
  CPNColor local_28 [32];
  uint local_8;
  
                    /* 0x1ff9f  886
                       ?ConvertToGrayscaleWithMask@XPNBitmapImage@@IAEHPAVCPNColor@@K@Z */
  local_8 = 0;
  if (*(int *)(this + 0x20) == 0) {
    pXVar2 = (XPNBitmapImage *)(**(code **)(*(int *)this + 0x80))();
    iVar3 = (**(code **)(*(int *)this + 0x84))();
    CPNColor::CPNColor(local_28);
    if (pXVar2 != (XPNBitmapImage *)0x0) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        CPNColor::Set(local_28,(uchar)pXVar2[2],(uchar)pXVar2[1],(uchar)*pXVar2);
        iVar4 = IsColorInMask(this,local_28,param_1,param_2);
        if (iVar4 == 0) {
          local_8 = (uint)(byte)pXVar2[2];
          XVar1 = (XPNBitmapImage)ftol();
          pXVar2[2] = XVar1;
          pXVar2[1] = XVar1;
          *pXVar2 = XVar1;
          if ((byte)this[0x2a] < (byte)XVar1) {
            this[0x2a] = XVar1;
          }
        }
        pXVar2 = pXVar2 + 4;
      }
      local_8 = 1;
    }
    CPNColor::~CPNColor(local_28);
  }
  return local_8;
}


