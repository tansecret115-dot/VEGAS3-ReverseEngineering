/* Module: pngu3266.dll
   Function: OnTimer
   Address: 6060fbdc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimateCtl::OnTimer(void) */

void __thiscall XPNAnimateCtl::OnTimer(XPNAnimateCtl *this)

{
                    /* 0x1fbdc  1702  ?OnTimer@XPNAnimateCtl@@MAEXXZ */
  *(uint *)(this + 0xf3) = (*(int *)(this + 0xf3) + 1U) % *(uint *)(this + 0xf7);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


