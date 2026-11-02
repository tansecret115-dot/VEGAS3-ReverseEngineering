/* Module: pngu3266.dll
   Function: DrawButtonFace
   Address: 6061383f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNCustomButton::DrawButtonFace(class CPNDC *,class CPNxRect
   &,int,int) */

void __thiscall
XPNCustomButton::DrawButtonFace
          (XPNCustomButton *this,CPNDC *param_1,CPNxRect *param_2,int param_3,int param_4)

{
  CPNFont *pCVar1;
  CPNColor *pCVar2;
  CPNFont *local_18;
  CPNColor *local_10;
  CPNColor *local_8;
  
                    /* 0x2383f  991
                       ?DrawButtonFace@XPNCustomButton@@UAEXPAVCPNDC@@AAVCPNxRect@@HH@Z */
  pCVar1 = CPNDrawHelper::GetControlsFont();
  if (param_1 != (CPNDC *)0x0) {
    local_18 = XPNDC::SetFont((XPNDC *)param_1,pCVar1);
  }
  pCVar2 = CPNDrawHelper::GetBtnFaceColor();
  if (param_1 != (CPNDC *)0x0) {
    local_10 = XPNDC::SetTextBgColor((XPNDC *)param_1,pCVar2);
  }
  pCVar2 = CPNDrawHelper::GetBtnTextColor();
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetTextFgColor((XPNDC *)param_1,pCVar2);
  }
  (**(code **)(*(int *)param_1 + 0x38))
            (*(undefined4 *)(this + 0xfb),param_2,*(undefined4 *)(this + 0x107));
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetTextFgColor((XPNDC *)param_1,local_8);
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetTextBgColor((XPNDC *)param_1,local_10);
      if (param_1 != (CPNDC *)0x0) {
        XPNDC::SetFont((XPNDC *)param_1,local_18);
      }
    }
  }
  return;
}


