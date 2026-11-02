/* Module: pngu3266.dll
   Function: DrawFocusRect
   Address: 6060f51e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::DrawFocusRect(class CPNDC *,class CPNxRect const &)
    */

void __thiscall XPNSlider::DrawFocusRect(XPNSlider *this,CPNDC *param_1,CPNxRect *param_2)

{
                    /* 0x1f51e  996  ?DrawFocusRect@XPNSlider@@MAEXPAVCPNDC@@ABVCPNxRect@@@Z */
  (**(code **)(*(int *)param_1 + 0x40))(param_2);
  return;
}


