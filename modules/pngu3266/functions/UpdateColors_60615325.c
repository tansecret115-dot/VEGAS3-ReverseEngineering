/* Module: pngu3266.dll
   Function: UpdateColors
   Address: 60615325
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::UpdateColors(void) */

void __thiscall CPNImageControl::UpdateColors(CPNImageControl *this)

{
                    /* 0x25325  2107  ?UpdateColors@CPNImageControl@@QAEXXZ */
  UpdateBackgroundColor(this);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


