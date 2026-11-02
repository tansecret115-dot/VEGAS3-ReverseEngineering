/* Module: pngu3266.dll
   Function: GetCurrentCell
   Address: 605fc72b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNAnimateCtl::GetCurrentCell(void) */

ulong __thiscall XPNAnimateCtl::GetCurrentCell(XPNAnimateCtl *this)

{
                    /* 0xc72b  1163  ?GetCurrentCell@XPNAnimateCtl@@UAEKXZ */
  return *(ulong *)(this + 0xf3);
}


