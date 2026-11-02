/* Module: pngu3266.dll
   Function: AdjustButtonFaceRect
   Address: 6060fe34
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNImageButton::AdjustButtonFaceRect(class CPNxRect &,class
   CPNxRect const &,int,int,long) */

void __thiscall
XPNImageButton::AdjustButtonFaceRect
          (XPNImageButton *this,CPNxRect *param_1,CPNxRect *param_2,int param_3,int param_4,
          long param_5)

{
  int iVar1;
  
                    /* 0x1fe34  789
                       ?AdjustButtonFaceRect@XPNImageButton@@MAEXAAVCPNxRect@@ABV2@HHJ@Z */
  iVar1 = (**(code **)(*(int *)this + 0x15c))(3);
  if (iVar1 == 0) {
    XPNButton::AdjustButtonFaceRect((XPNButton *)this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


