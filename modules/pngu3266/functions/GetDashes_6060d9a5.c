/* Module: pngu3266.dll
   Function: GetDashes
   Address: 6060d9a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNPen::GetDashes(unsigned long * *) */

long __thiscall XPNPen::GetDashes(XPNPen *this,ulong **param_1)

{
                    /* 0x1d9a5  1175  ?GetDashes@XPNPen@@UAEJPAPAK@Z */
  *param_1 = *(ulong **)(this + 0x10);
  return *(long *)(this + 0xc);
}


