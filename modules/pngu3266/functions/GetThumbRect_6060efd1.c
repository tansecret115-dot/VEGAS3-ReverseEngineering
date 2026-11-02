/* Module: pngu3266.dll
   Function: GetThumbRect
   Address: 6060efd1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::GetThumbRect(class CPNxRect &) */

void __thiscall XPNSlider::GetThumbRect(XPNSlider *this,CPNxRect *param_1)

{
  XPNSlider *pXVar1;
  
                    /* 0x1efd1  1393  ?GetThumbRect@XPNSlider@@QAEXAAVCPNxRect@@@Z */
  if (*(int *)(this + 0x14b) == 0) {
    pXVar1 = this + 0x117;
  }
  else {
    pXVar1 = this + 0x167;
  }
  (**(code **)(*(int *)pXVar1 + 0x18))(param_1);
  return;
}


