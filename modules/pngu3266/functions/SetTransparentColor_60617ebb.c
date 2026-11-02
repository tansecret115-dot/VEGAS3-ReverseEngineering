/* Module: pngu3266.dll
   Function: SetTransparentColor
   Address: 60617ebb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNImageBorder::SetTransparentColor(class CPNColor const &) */

void __thiscall CPNImageBorder::SetTransparentColor(CPNImageBorder *this,CPNColor *param_1)

{
                    /* 0x27ebb  2037  ?SetTransparentColor@CPNImageBorder@@UAEXABVCPNColor@@@Z */
  if (*(int **)(this + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc) + 0x34))(0,0,param_1);
  }
  return;
}


