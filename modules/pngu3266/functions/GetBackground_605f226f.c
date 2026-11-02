/* Module: pngu3266.dll
   Function: GetBackground
   Address: 605f226f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBrush * __thiscall XPNDC::GetBackground(void) */

CPNBrush * __thiscall XPNDC::GetBackground(XPNDC *this)

{
                    /* 0x226f  1091  ?GetBackground@XPNDC@@QAEPAVCPNBrush@@XZ */
  return *(CPNBrush **)(this + 399);
}


