/* Module: pngu3266.dll
   Function: GetActivePage
   Address: 60610b3a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNPropertySheet::GetActivePage(void)const  */

ulong __thiscall XPNPropertySheet::GetActivePage(XPNPropertySheet *this)

{
                    /* 0x20b3a  1081  ?GetActivePage@XPNPropertySheet@@UBEKXZ */
  return *(ulong *)(this + 0xec);
}


