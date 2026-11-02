/* Module: pngu3266.dll
   Function: ColorizeWithMask
   Address: 60610077
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNBitmapImage::ColorizeWithMask(class CPNColor const &,class
   CPNColor *,unsigned long) */

int __thiscall
XPNBitmapImage::ColorizeWithMask
          (XPNBitmapImage *this,CPNColor *param_1,CPNColor *param_2,ulong param_3)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  CPNColor local_28 [32];
  int local_8;
  
                    /* 0x20077  870  ?ColorizeWithMask@XPNBitmapImage@@UAEHABVCPNColor@@PAV2@K@Z */
  iVar2 = ConvertToGrayscaleWithMask(this,param_2,param_3);
  iVar4 = 0;
  if ((iVar2 != 0) && (iVar4 = 0, *(int *)(this + 0x20) == 0)) {
    puVar3 = (uchar *)(**(code **)(*(int *)this + 0x80))();
    iVar4 = (**(code **)(*(int *)this + 0x84))();
    CPNColor::CPNColor(local_28);
    iVar2 = local_8;
    while (local_8 = iVar4, local_8 != 0) {
      CPNColor::Set(local_28,puVar3[2],puVar3[1],*puVar3);
      iVar4 = IsColorInMask(this,local_28,param_2,param_3);
      if (iVar4 == 0) {
        uVar1 = ftol();
        puVar3[2] = uVar1;
        uVar1 = ftol();
        puVar3[1] = uVar1;
        uVar1 = ftol();
        *puVar3 = uVar1;
      }
      puVar3 = puVar3 + 4;
      iVar2 = local_8 + -1;
      iVar4 = iVar2;
    }
    iVar4 = 1;
    local_8 = iVar2;
    CPNColor::~CPNColor(local_28);
  }
  return iVar4;
}


