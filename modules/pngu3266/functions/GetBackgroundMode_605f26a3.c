/* Module: pngu3266.dll
   Function: GetBackgroundMode
   Address: 605f26a3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNDC::GetBackgroundMode(void) */

long __thiscall XPNDC::GetBackgroundMode(XPNDC *this)

{
                    /* 0x26a3  1094  ?GetBackgroundMode@XPNDC@@QAEJXZ
                       0x26a3  1318  ?GetResult@CPNEvent@@QBEKXZ */
  return *(long *)(this + 0x28);
}


