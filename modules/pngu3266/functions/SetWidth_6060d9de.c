/* Module: pngu3266.dll
   Function: SetWidth
   Address: 6060d9de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetWidth(long) */

void __thiscall XPNPen::SetWidth(XPNPen *this,long param_1)

{
                    /* 0x1d9de  2043  ?SetWidth@XPNPen@@UAEXJ@Z */
  *(long *)(this + 0x33) = param_1;
  return;
}


