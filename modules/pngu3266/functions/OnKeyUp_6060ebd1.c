/* Module: pngu3266.dll
   Function: OnKeyUp
   Address: 6060ebd1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::OnKeyUp(unsigned long) */

void __thiscall XPNSlider::OnKeyUp(XPNSlider *this,ulong param_1)

{
                    /* 0x1ebd1  1641  ?OnKeyUp@XPNSlider@@IAEXK@Z */
  if (*(int *)(this + 0x17f) != 0) {
    SendEventNotification(this,4);
    *(undefined4 *)(this + 0x17f) = 0;
  }
  return;
}


