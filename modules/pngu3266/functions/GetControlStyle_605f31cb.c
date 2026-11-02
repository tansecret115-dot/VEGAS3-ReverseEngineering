/* Module: pngu3266.dll
   Function: GetControlStyle
   Address: 605f31cb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNControl::GetControlStyle(void)const  */

ulong __thiscall XPNControl::GetControlStyle(XPNControl *this)

{
                    /* 0x31cb  1149  ?GetControlStyle@XPNControl@@QBEKXZ */
  return *(ulong *)(this + 0xb8);
}


