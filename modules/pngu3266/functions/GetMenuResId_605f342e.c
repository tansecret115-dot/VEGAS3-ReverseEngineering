/* Module: pngu3266.dll
   Function: GetMenuResId
   Address: 605f342e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNMenuButton::GetMenuResId(void)const  */

ulong __thiscall XPNMenuButton::GetMenuResId(XPNMenuButton *this)

{
                    /* 0x342e  1259  ?GetMenuResId@XPNMenuButton@@QBEKXZ
                       0x342e  1275  ?GetMouseOnlyBorder@XPNButton@@QAEHXZ
                       0x342e  1385  ?GetText@XPNCustomText@@QAEPBDXZ
                       0x342e  1522  ?IsSingleInstance@CPNDialog@@QAEHXZ */
  return *(ulong *)(this + 0xc4);
}


