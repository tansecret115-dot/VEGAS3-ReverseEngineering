/* Module: pngu3266.dll
   Function: FillSliderTrack
   Address: 6060ee9a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::FillSliderTrack(class CPNDC *,class CPNColor const
   &,class CPNxRect const &) */

void __thiscall
XPNSlider::FillSliderTrack(XPNSlider *this,CPNDC *param_1,CPNColor *param_2,CPNxRect *param_3)

{
  CPNBrush local_3c [56];
  
                    /* 0x1ee9a  1047
                       ?FillSliderTrack@XPNSlider@@MAEXPAVCPNDC@@ABVCPNColor@@ABVCPNxRect@@@Z */
  CPNBrush::CPNBrush(local_3c,param_2,8);
  (**(code **)(*(int *)param_1 + 0x48))(param_3,local_3c);
  CPNBrush::~CPNBrush(local_3c);
  return;
}


