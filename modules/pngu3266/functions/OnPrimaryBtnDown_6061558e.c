/* Module: pngu3266.dll
   Function: OnPrimaryBtnDown
   Address: 6061558e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall CPNImageControl::OnPrimaryBtnDown(class CPNxPoint const &) */

void __thiscall CPNImageControl::OnPrimaryBtnDown(CPNImageControl *this,CPNxPoint *param_1)

{
                    /* 0x2558e  1680  ?OnPrimaryBtnDown@CPNImageControl@@MAEXABVCPNxPoint@@@Z */
  *(undefined4 *)(this + 0x106) = 1;
  (**(code **)(*(int *)this + 0x84))();
  return;
}


