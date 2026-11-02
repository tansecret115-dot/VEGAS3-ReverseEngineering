/* Module: pngu3266.dll
   Function: SelectNewTextBgColor
   Address: 605fb2dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SelectNewTextBgColor(class CPNColor *) */

void __thiscall CPNDC::SelectNewTextBgColor(CPNDC *this,CPNColor *param_1)

{
                    /* 0xb2dc  1807  ?SelectNewTextBgColor@CPNDC@@UAEXPAVCPNColor@@@Z */
  SetBkColor(*(HDC *)(this + 0x1cf),*(COLORREF *)(param_1 + 8));
  return;
}


