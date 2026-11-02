/* Module: pngu3266.dll
   Function: StopAnimation
   Address: 6060f99d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimateCtl::StopAnimation(void) */

void __thiscall XPNAnimateCtl::StopAnimation(XPNAnimateCtl *this)

{
                    /* 0x1f99d  2076  ?StopAnimation@XPNAnimateCtl@@UAEXXZ */
  if (*(XPNTimer **)(this + 0xc0) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0xc0),0);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


