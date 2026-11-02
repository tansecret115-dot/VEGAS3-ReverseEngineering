/* Module: pngu3266.dll
   Function: Hue
   Address: 605f41cd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: float __thiscall CPNColor::Hue(void) */

float __thiscall CPNColor::Hue(CPNColor *this)

{
                    /* 0x41cd  1456  ?Hue@CPNColor@@QAEMXZ */
  ConvertRGBtoHSB(this);
  return *(float *)(this + 0x10);
}


