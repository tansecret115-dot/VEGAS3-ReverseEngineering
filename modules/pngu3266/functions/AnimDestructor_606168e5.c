/* Module: pngu3266.dll
   Function: AnimDestructor
   Address: 606168e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimButton::AnimDestructor(void) */

void __thiscall XPNAnimButton::AnimDestructor(XPNAnimButton *this)

{
                    /* 0x268e5  798  ?AnimDestructor@XPNAnimButton@@MAEXXZ */
  if (*(XPNTimer **)(this + 0xfb) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0xfb),0);
    *(undefined4 *)(this + 0xfb) = 0;
  }
  if (*(undefined4 **)(this + 0x126) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x126))(1);
    *(undefined4 *)(this + 0x126) = 0;
  }
  if (*(undefined4 **)(this + 0x122) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x122))(1);
    *(undefined4 *)(this + 0x122) = 0;
  }
  return;
}


