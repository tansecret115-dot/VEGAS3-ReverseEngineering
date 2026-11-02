/* Module: pngu3266.dll
   Function: ~CPNAnimButton
   Address: 60606023
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNAnimButton::~CPNAnimButton(void) */

void __thiscall CPNAnimButton::~CPNAnimButton(CPNAnimButton *this)

{
                    /* 0x16023  304  ??1CPNAnimButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x15e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x15e))(1);
    *(undefined4 *)(this + 0x15e) = 0;
  }
  if (*(undefined4 **)(this + 0x162) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x162))(1);
    *(undefined4 *)(this + 0x162) = 0;
  }
  if (*(undefined4 **)(this + 0x166) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x166))(1);
    *(undefined4 *)(this + 0x166) = 0;
  }
  if (*(undefined4 **)(this + 0x16a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x16a))(1);
    *(undefined4 *)(this + 0x16a) = 0;
  }
  XPNAnimButton::~XPNAnimButton((XPNAnimButton *)this);
  return;
}


