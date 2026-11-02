/* Module: pngu3266.dll
   Function: GetStyle
   Address: 605fe75a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNPropertySheet::GetStyle(void) */

ulong __thiscall XPNPropertySheet::GetStyle(XPNPropertySheet *this)

{
                    /* 0xe75a  1372  ?GetStyle@XPNPropertySheet@@QAEKXZ */
  return *(ulong *)(this + 0x104);
}


