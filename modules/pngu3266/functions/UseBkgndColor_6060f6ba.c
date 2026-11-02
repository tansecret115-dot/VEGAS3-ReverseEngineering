/* Module: pngu3266.dll
   Function: UseBkgndColor
   Address: 6060f6ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNAnimateCtl::UseBkgndColor(int) */

void __thiscall XPNAnimateCtl::UseBkgndColor(XPNAnimateCtl *this,int param_1)

{
                    /* 0x1f6ba  2120  ?UseBkgndColor@XPNAnimateCtl@@QAEXH@Z */
  *(int *)(this + 0xe3) = param_1;
  if (param_1 != 0) {
    UpdateColors(this);
  }
  return;
}


