/* Module: pngu3266.dll
   Function: Saturation
   Address: 605f41da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: float __thiscall CPNColor::Saturation(void) */

float __thiscall CPNColor::Saturation(CPNColor *this)

{
                    /* 0x41da  1791  ?Saturation@CPNColor@@QAEMXZ */
  ConvertRGBtoHSB(this);
  return *(float *)(this + 0x14);
}


