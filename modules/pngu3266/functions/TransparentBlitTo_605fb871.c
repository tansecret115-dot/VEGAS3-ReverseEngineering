/* Module: pngu3266.dll
   Function: TransparentBlitTo
   Address: 605fb871
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::TransparentBlitTo(class CPNDC
   *,long,long,long,long,long,long,class CPNColor *) */

void __thiscall
CPNDC::TransparentBlitTo
          (CPNDC *this,CPNDC *param_1,long param_2,long param_3,long param_4,long param_5,
          long param_6,long param_7,CPNColor *param_8)

{
  HBITMAP ho;
  undefined4 uVar1;
  CPNBitmapImage local_38 [52];
  
                    /* 0xb871  2101  ?TransparentBlitTo@CPNDC@@UAEXPAV1@JJJJJJPAVCPNColor@@@Z */
  if (param_1 != (CPNDC *)0x0) {
    CPNBitmapImage::CPNBitmapImage(local_38);
    ho = CreateCompatibleBitmap(*(HDC *)(param_1 + 0x1cf),0,0);
    CPNBitmapImage::Attach(local_38,ho);
    uVar1 = (**(code **)(*(int *)param_1 + 0x80))(local_38);
    (**(code **)(*(int *)this + 0x58))
              (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(*(int *)param_1 + 0x80))(uVar1);
    XPNImage::Detach((XPNImage *)local_38);
    DeleteObject(ho);
    CPNBitmapImage::~CPNBitmapImage(local_38);
  }
  return;
}


