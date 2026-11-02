/* Module: pngu3266.dll
   Function: ShowModeless
   Address: 60610b5f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPropertySheet::ShowModeless(void) */

void __thiscall XPNPropertySheet::ShowModeless(XPNPropertySheet *this)

{
                    /* 0x20b5f  2066  ?ShowModeless@XPNPropertySheet@@UAEXXZ */
  (**(code **)(*(int *)this + 0x98))(1);
  return;
}


