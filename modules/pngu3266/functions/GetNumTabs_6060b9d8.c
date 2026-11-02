/* Module: pngu3266.dll
   Function: GetNumTabs
   Address: 6060b9d8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTabControl::GetNumTabs(void)const  */

ulong __thiscall XPNTabControl::GetNumTabs(XPNTabControl *this)

{
                    /* 0x1b9d8  1281  ?GetNumTabs@XPNTabControl@@UBEKXZ */
  return *(ulong *)(this + 0xcc);
}


