/* Module: pngu3266.dll
   Function: Brightness
   Address: 605f41e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: float __thiscall CPNColor::Brightness(void) */

float __thiscall CPNColor::Brightness(CPNColor *this)

{
                    /* 0x41e7  836  ?Brightness@CPNColor@@QAEMXZ */
  ConvertRGBtoHSB(this);
  return *(float *)(this + 0x18);
}


