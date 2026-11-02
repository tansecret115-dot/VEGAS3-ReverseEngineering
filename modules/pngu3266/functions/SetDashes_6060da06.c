/* Module: pngu3266.dll
   Function: SetDashes
   Address: 6060da06
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetDashes(long,unsigned long *) */

void __thiscall XPNPen::SetDashes(XPNPen *this,long param_1,ulong *param_2)

{
                    /* 0x1da06  1887  ?SetDashes@XPNPen@@UAEXJPAK@Z */
  *(long *)(this + 0xc) = param_1;
  *(ulong **)(this + 0x10) = param_2;
  return;
}


