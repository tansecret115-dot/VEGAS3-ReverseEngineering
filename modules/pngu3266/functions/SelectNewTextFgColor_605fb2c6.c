/* Module: pngu3266.dll
   Function: SelectNewTextFgColor
   Address: 605fb2c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SelectNewTextFgColor(class CPNColor *) */

void __thiscall CPNDC::SelectNewTextFgColor(CPNDC *this,CPNColor *param_1)

{
                    /* 0xb2c6  1808  ?SelectNewTextFgColor@CPNDC@@UAEXPAVCPNColor@@@Z */
  SetTextColor(*(HDC *)(this + 0x1cf),*(COLORREF *)(param_1 + 8));
  return;
}


