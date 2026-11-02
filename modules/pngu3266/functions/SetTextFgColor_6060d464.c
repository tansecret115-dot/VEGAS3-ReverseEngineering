/* Module: pngu3266.dll
   Function: SetTextFgColor
   Address: 6060d464
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColor * __thiscall XPNDC::SetTextFgColor(class CPNColor *) */

CPNColor * __thiscall XPNDC::SetTextFgColor(XPNDC *this,CPNColor *param_1)

{
  CPNColor *pCVar1;
  
                    /* 0x1d464  2023  ?SetTextFgColor@XPNDC@@QAEPAVCPNColor@@PAV2@@Z */
  if (param_1 == (CPNColor *)0x0) {
    pCVar1 = (CPNColor *)(this + 0x149);
  }
  else {
    pCVar1 = *(CPNColor **)(this + 0x1c);
    *(CPNColor **)(this + 0x1c) = param_1;
    (**(code **)(*(int *)this + 0xd0))(param_1);
  }
  return pCVar1;
}


