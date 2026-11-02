/* Module: pngu3266.dll
   Function: OnKeyUp
   Address: 60610dda
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNMenuButton::OnKeyUp(unsigned long) */

void __thiscall XPNMenuButton::OnKeyUp(XPNMenuButton *this,ulong param_1)

{
                    /* 0x20dda  1640  ?OnKeyUp@XPNMenuButton@@IAEXK@Z */
  if (param_1 == 0x20) {
    SendClickAndShowEvents(this);
    (**(code **)(*(int *)this + 0x90))();
    (**(code **)(*(int *)this + 0x130))();
  }
  return;
}


