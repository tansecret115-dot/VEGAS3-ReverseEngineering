/* Module: pngu3266.dll
   Function: SetJoin
   Address: 6060d9f2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetJoin(long) */

void __thiscall XPNPen::SetJoin(XPNPen *this,long param_1)

{
                    /* 0x1d9f2  1938  ?SetJoin@XPNPen@@UAEXJ@Z */
  *(long *)(this + 0x3b) = param_1;
  return;
}


