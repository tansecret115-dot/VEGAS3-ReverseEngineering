/* Module: pngu3266.dll
   Function: OnPrimaryBtnDown
   Address: 606138ce
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNCustomButton::OnPrimaryBtnDown(class CPNxPoint const &) */

void __thiscall XPNCustomButton::OnPrimaryBtnDown(XPNCustomButton *this,CPNxPoint *param_1)

{
                    /* 0x238ce  1681  ?OnPrimaryBtnDown@XPNCustomButton@@MAEXABVCPNxPoint@@@Z */
  *(undefined4 *)(this + 0x10b) = 1;
  (**(code **)(*(int *)this + 0x130))(1);
  (**(code **)(*(int *)this + 0x84))();
  return;
}


