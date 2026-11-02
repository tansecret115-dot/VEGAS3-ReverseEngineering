/* Module: pngu3266.dll
   Function: KeyboardAdjustPosition
   Address: 6060ebef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::KeyboardAdjustPosition(long) */

void __thiscall XPNSlider::KeyboardAdjustPosition(XPNSlider *this,long param_1)

{
                    /* 0x1ebef  1532  ?KeyboardAdjustPosition@XPNSlider@@IAEXJ@Z */
  if (*(int *)(this + 0x17f) == 0) {
    SendEventNotification(this,1);
    *(undefined4 *)(this + 0x17f) = 1;
  }
  SetSliderPos(this,*(int *)(this + 0xc0) + param_1);
  SendEventNotification(this,2);
  return;
}


