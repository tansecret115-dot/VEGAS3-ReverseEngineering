/* Module: pngu3266.dll
   Function: Enable
   Address: 6060de3a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNSlider::Enable(int) */

void __thiscall XPNSlider::Enable(XPNSlider *this,int param_1)

{
                    /* 0x1de3a  1028  ?Enable@XPNSlider@@UAEXH@Z */
  if ((*(int *)(this + 0x14b) == 0) && (*(int *)(this + 0x14f) == 0)) {
    *(uint *)(this + 0x17b) = (-(uint)(param_1 != 0) & 2) + 1;
    CPNWindow::Enable((CPNWindow *)this,param_1);
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return;
}


