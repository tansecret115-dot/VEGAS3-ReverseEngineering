/* Module: pngu3266.dll
   Function: GetStyle
   Address: 6060d999
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNPen::GetStyle(void) */

long __thiscall XPNPen::GetStyle(XPNPen *this)

{
                    /* 0x1d999  1371  ?GetStyle@XPNPen@@UAEJXZ */
  return *(long *)(this + 0x37);
}


