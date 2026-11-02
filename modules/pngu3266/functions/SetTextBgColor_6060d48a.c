/* Module: pngu3266.dll
   Function: SetTextBgColor
   Address: 6060d48a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColor * __thiscall XPNDC::SetTextBgColor(class CPNColor *) */

CPNColor * __thiscall XPNDC::SetTextBgColor(XPNDC *this,CPNColor *param_1)

{
  CPNColor *pCVar1;
  
                    /* 0x1d48a  2021  ?SetTextBgColor@XPNDC@@QAEPAVCPNColor@@PAV2@@Z */
  if (param_1 == (CPNColor *)0x0) {
    pCVar1 = (CPNColor *)(this + 0x168);
  }
  else {
    pCVar1 = *(CPNColor **)(this + 0x20);
    *(CPNColor **)(this + 0x20) = param_1;
    (**(code **)(*(int *)this + 0xd4))(param_1);
  }
  return pCVar1;
}


