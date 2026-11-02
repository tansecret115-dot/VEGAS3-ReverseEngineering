/* Module: pngu3266.dll
   Function: UseBackgroundColor
   Address: 606007e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::UseBackgroundColor(int) */

void __thiscall CPNImageControl::UseBackgroundColor(CPNImageControl *this,int param_1)

{
                    /* 0x107e5  2118  ?UseBackgroundColor@CPNImageControl@@QAEXH@Z */
  *(int *)(this + 0x102) = param_1;
  UpdateBackgroundColor(this);
  return;
}


