/* Module: pngu3266.dll
   Function: GetActiveTab
   Address: 605f3c04
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTabControl::GetActiveTab(void)const  */

ulong __thiscall XPNTabControl::GetActiveTab(XPNTabControl *this)

{
                    /* 0x3c04  1082  ?GetActiveTab@XPNTabControl@@UBEKXZ
                       0x3c04  1248  ?GetMenu@CPNFrame@@UBEPAVCPNMenu@@XZ */
  return *(ulong *)(this + 0xc0);
}


