/* Module: pngu3266.dll
   Function: SetLinkCursor
   Address: 6060759b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTextWithLink::SetLinkCursor(class CPNCursor *) */

void __thiscall XPNTextWithLink::SetLinkCursor(XPNTextWithLink *this,CPNCursor *param_1)

{
                    /* 0x1759b  1943  ?SetLinkCursor@XPNTextWithLink@@QAEXPAVCPNCursor@@@Z */
  *(CPNCursor **)(this + 0x16c) = param_1;
  return;
}


