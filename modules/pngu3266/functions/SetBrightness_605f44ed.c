/* Module: pngu3266.dll
   Function: SetBrightness
   Address: 605f44ed
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNColor::SetBrightness(float) */

void __thiscall CPNColor::SetBrightness(CPNColor *this,float param_1)

{
                    /* 0x44ed  1838  ?SetBrightness@CPNColor@@QAEXM@Z */
  *(float *)(this + 0x18) = param_1;
  return;
}


