/* Module: pngu3266.dll
   Function: StopAnimation
   Address: 60616bc7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimButton::StopAnimation(void) */

void __thiscall XPNAnimButton::StopAnimation(XPNAnimButton *this)

{
                    /* 0x26bc7  2075  ?StopAnimation@XPNAnimButton@@UAEXXZ */
  if (*(XPNTimer **)(this + 0xfb) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0xfb),0);
    *(undefined4 *)(this + 0xfb) = 0;
  }
  *(undefined4 *)(this + 0x156) = 0;
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


