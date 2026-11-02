/* Module: pngu3266.dll
   Function: Create
   Address: 60616ef8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNImageSlider::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,unsigned long,unsigned long) */

int __thiscall
XPNImageSlider::Create
          (XPNImageSlider *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8,ulong param_9,ulong param_10)

{
  int iVar1;
  CPNRegion local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x26ef8  924  ?Create@XPNImageSlider@@QAEHKPAVCPNWindow@@JJJJKKKK@Z */
  if ((((param_9 != 0) && (param_10 != 0)) && (iVar1 = SetTrackImage(this,param_9), iVar1 != 0)) &&
     (iVar1 = SetThumbImage(this,param_10), iVar1 != 0)) {
    CPNRegion::CPNRegion(local_28);
    local_c = *(undefined4 *)(this + 0x193);
    local_8 = *(undefined4 *)(this + 0x197);
    local_14 = 0;
    local_10 = 0;
    CPNRegion::CreateRectRgn(local_28,(CPNxRect *)&local_14);
    XPNSlider::SetThumb((XPNSlider *)this,local_28);
    *(undefined4 *)(this + 0x147) = *(undefined4 *)(this + 0x18b);
    *(undefined4 *)(this + 0x13b) = 0;
    *(undefined4 *)(this + 0x13f) = 0;
    *(undefined4 *)(this + 0x143) = *(undefined4 *)(this + 0x187);
    iVar1 = XPNSlider::Create((XPNSlider *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8);
    CPNRegion::~CPNRegion(local_28);
    return iVar1;
  }
  return 0;
}


