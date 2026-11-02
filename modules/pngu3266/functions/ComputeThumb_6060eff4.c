/* Module: pngu3266.dll
   Function: ComputeThumb
   Address: 6060eff4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::ComputeThumb(class CPNDC *) */

void __thiscall XPNSlider::ComputeThumb(XPNSlider *this,CPNDC *param_1)

{
  XPNSlider *pXVar1;
  
                    /* 0x1eff4  876  ?ComputeThumb@XPNSlider@@IAEXPAVCPNDC@@@Z */
  pXVar1 = this + 0x167;
  if (*(int *)(this + 0x14b) == 0) {
    pXVar1 = this + 0x117;
  }
  (**(code **)(*(int *)this + 0x130))(param_1,pXVar1,*(undefined4 *)(this + 0x17b));
  return;
}


