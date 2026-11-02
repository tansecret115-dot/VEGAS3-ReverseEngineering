/* Module: pngu3266.dll
   Function: SetBackgroundColor
   Address: 6060713e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNImageSlider::SetBackgroundColor(class CPNColor const &) */

void __thiscall CPNImageSlider::SetBackgroundColor(CPNImageSlider *this,CPNColor *param_1)

{
                    /* 0x1713e  1826  ?SetBackgroundColor@CPNImageSlider@@UAEXABVCPNColor@@@Z */
  if (*(int **)(this + 399) != (int *)0x0) {
    (**(code **)(**(int **)(this + 399) + 0x34))(0,0,param_1);
  }
  if (*(int **)(this + 0x183) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x183) + 0x34))(0,0,param_1);
  }
  return;
}


