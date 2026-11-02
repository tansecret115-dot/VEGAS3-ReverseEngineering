/* Module: pngu3266.dll
   Function: SetHue
   Address: 605f44d9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNColor::SetHue(float) */

void __thiscall CPNColor::SetHue(CPNColor *this,float param_1)

{
                    /* 0x44d9  1916  ?SetHue@CPNColor@@QAEXM@Z */
  *(float *)(this + 0x10) = param_1;
  return;
}


