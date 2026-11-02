/* Module: pngu3266.dll
   Function: DrawBackground
   Address: 6060f01f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::DrawBackground(class CPNDC *,class CPNxRect const
   &) */

void __thiscall XPNSlider::DrawBackground(XPNSlider *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  CPNBrush *pCVar2;
  
                    /* 0x1f01f  981  ?DrawBackground@XPNSlider@@MAEXPAVCPNDC@@ABVCPNxRect@@@Z */
  iVar1 = *(int *)param_1;
  pCVar2 = CPNDrawHelper::Get3dFaceBrush();
  (**(code **)(iVar1 + 0x48))(param_2,pCVar2);
  return;
}


