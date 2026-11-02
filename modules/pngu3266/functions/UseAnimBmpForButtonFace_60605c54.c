/* Module: pngu3266.dll
   Function: UseAnimBmpForButtonFace
   Address: 60605c54
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNAnimButton::UseAnimBmpForButtonFace(int) */

void __thiscall XPNAnimButton::UseAnimBmpForButtonFace(XPNAnimButton *this,int param_1)

{
                    /* 0x15c54  2117  ?UseAnimBmpForButtonFace@XPNAnimButton@@QAEXH@Z */
  *(int *)(this + 0x15a) = param_1;
  return;
}


