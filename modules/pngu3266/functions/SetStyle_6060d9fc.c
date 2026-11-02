/* Module: pngu3266.dll
   Function: SetStyle
   Address: 6060d9fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetStyle(long) */

void __thiscall XPNPen::SetStyle(XPNPen *this,long param_1)

{
                    /* 0x1d9fc  2012  ?SetStyle@XPNPen@@UAEXJ@Z */
  *(long *)(this + 0x37) = param_1;
  return;
}


