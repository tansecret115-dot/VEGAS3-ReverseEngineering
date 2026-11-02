/* Module: pngu3266.dll
   Function: OnPrimaryBtnDown
   Address: 6060c3a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomText::OnPrimaryBtnDown(class CPNxPoint const &) */

void __thiscall XPNCustomText::OnPrimaryBtnDown(XPNCustomText *this,CPNxPoint *param_1)

{
                    /* 0x1c3a5  1682  ?OnPrimaryBtnDown@XPNCustomText@@IAEXABVCPNxPoint@@@Z */
  *(undefined4 *)(this + 0x145) = 1;
  (**(code **)(*(int *)this + 0x84))();
  return;
}


