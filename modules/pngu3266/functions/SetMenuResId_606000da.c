/* Module: pngu3266.dll
   Function: SetMenuResId
   Address: 606000da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNMenuButton::SetMenuResId(unsigned long) */

void __thiscall XPNMenuButton::SetMenuResId(XPNMenuButton *this,ulong param_1)

{
                    /* 0x100da  1950  ?SetMenuResId@XPNMenuButton@@IAEXK@Z
                       0x100da  1954  ?SetMouseOnlyBorder@XPNButton@@QAEXH@Z */
  *(ulong *)(this + 0xc4) = param_1;
  return;
}


