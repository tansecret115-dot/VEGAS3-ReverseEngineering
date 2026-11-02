/* Module: pngu3266.dll
   Function: GetCellCount
   Address: 605f3449
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNAnimateCtl::GetCellCount(void) */

ulong __thiscall XPNAnimateCtl::GetCellCount(XPNAnimateCtl *this)

{
                    /* 0x3449  1126  ?GetCellCount@XPNAnimateCtl@@UAEKXZ
                       0x3449  1253  ?GetMenuDelay@XPNButton@@QAEKXZ */
  return *(ulong *)(this + 0xf7);
}


