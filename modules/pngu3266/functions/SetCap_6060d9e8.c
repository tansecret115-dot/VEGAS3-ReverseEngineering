/* Module: pngu3266.dll
   Function: SetCap
   Address: 6060d9e8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetCap(long) */

void __thiscall XPNPen::SetCap(XPNPen *this,long param_1)

{
                    /* 0x1d9e8  1855  ?SetCap@XPNPen@@UAEXJ@Z */
  *(long *)(this + 0x3f) = param_1;
  return;
}


