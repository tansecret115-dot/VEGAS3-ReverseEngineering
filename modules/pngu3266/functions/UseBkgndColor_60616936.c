/* Module: pngu3266.dll
   Function: UseBkgndColor
   Address: 60616936
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNAnimButton::UseBkgndColor(int) */

void __thiscall XPNAnimButton::UseBkgndColor(XPNAnimButton *this,int param_1)

{
                    /* 0x26936  2119  ?UseBkgndColor@XPNAnimButton@@QAEXH@Z */
  *(int *)(this + 0x11e) = param_1;
  if (param_1 != 0) {
    UpdateColors(this);
  }
  return;
}


