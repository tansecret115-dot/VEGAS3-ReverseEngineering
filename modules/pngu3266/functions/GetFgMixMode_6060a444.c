/* Module: pngu3266.dll
   Function: GetFgMixMode
   Address: 6060a444
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNDC::GetFgMixMode(void) */

long __thiscall XPNDC::GetFgMixMode(XPNDC *this)

{
                    /* 0x1a444  1189  ?GetFgMixMode@XPNDC@@QAEJXZ
                       0x1a444  1273  ?GetMorePressed@CPNScrollHelper@@QAEHXZ
                       0x1a444  1297  ?GetPlatformEvent@CPNEvent@@QAEKXZ
                       0x1a444  1405  ?GetUnderlined@XPNFont@@QAEHXZ */
  return *(long *)(this + 0x24);
}


