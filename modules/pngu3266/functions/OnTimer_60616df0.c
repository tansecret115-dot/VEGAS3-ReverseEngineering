/* Module: pngu3266.dll
   Function: OnTimer
   Address: 60616df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimButton::OnTimer(void) */

void __thiscall XPNAnimButton::OnTimer(XPNAnimButton *this)

{
                    /* 0x26df0  1701  ?OnTimer@XPNAnimButton@@MAEXXZ */
  *(uint *)(this + 0x12e) = (*(int *)(this + 0x12e) + 1U) % *(uint *)(this + 0x132);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


