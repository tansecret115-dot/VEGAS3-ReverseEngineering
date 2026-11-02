/* Module: pngu3266.dll
   Function: DrawBackground
   Address: 6060b433
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: virtual void __thiscall XPNTabControl::DrawBackground(class CPNDC *,class CPNxRect &) */

void __thiscall XPNTabControl::DrawBackground(XPNTabControl *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  CPNBrush *pCVar2;
  
                    /* 0x1b433  982  ?DrawBackground@XPNTabControl@@EAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  iVar1 = *(int *)param_1;
  pCVar2 = CPNDrawHelper::GetBtnFaceBrush();
  (**(code **)(iVar1 + 0x48))(param_2,pCVar2);
  return;
}


