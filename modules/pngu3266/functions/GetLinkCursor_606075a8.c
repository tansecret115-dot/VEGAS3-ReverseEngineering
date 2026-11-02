/* Module: pngu3266.dll
   Function: GetLinkCursor
   Address: 606075a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTextWithLink::GetLinkCursor(class CPNCursor * *) */

void __thiscall XPNTextWithLink::GetLinkCursor(XPNTextWithLink *this,CPNCursor **param_1)

{
                    /* 0x175a8  1243  ?GetLinkCursor@XPNTextWithLink@@QAEXPAPAVCPNCursor@@@Z */
  if (param_1 != (CPNCursor **)0x0) {
    *param_1 = *(CPNCursor **)(this + 0x16c);
  }
  return;
}


