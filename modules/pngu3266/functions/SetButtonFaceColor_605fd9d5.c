/* Module: pngu3266.dll
   Function: SetButtonFaceColor
   Address: 605fd9d5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNImageButton::SetButtonFaceColor(class CPNColor const &) */

void __thiscall CPNImageButton::SetButtonFaceColor(CPNImageButton *this,CPNColor *param_1)

{
                    /* 0xd9d5  1842  ?SetButtonFaceColor@CPNImageButton@@UAEXABVCPNColor@@@Z */
  XPNAnimButton::SetButtonFaceColor((XPNAnimButton *)this,param_1);
  if (*(int **)(this + 0x107) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x107) + 0x34))(0,0,this + 0xd8);
  }
  return;
}


