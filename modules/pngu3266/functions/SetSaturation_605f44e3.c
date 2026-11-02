/* Module: pngu3266.dll
   Function: SetSaturation
   Address: 605f44e3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNColor::SetSaturation(float) */

void __thiscall CPNColor::SetSaturation(CPNColor *this,float param_1)

{
                    /* 0x44e3  1981  ?SetSaturation@CPNColor@@QAEXM@Z */
  *(float *)(this + 0x14) = param_1;
  return;
}


