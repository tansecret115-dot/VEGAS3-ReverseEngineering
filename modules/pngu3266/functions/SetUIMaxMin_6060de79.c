/* Module: pngu3266.dll
   Function: SetUIMaxMin
   Address: 6060de79
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::SetUIMaxMin(void) */

void __thiscall XPNSlider::SetUIMaxMin(XPNSlider *this)

{
  undefined4 uVar1;
  
                    /* 0x1de79  2039  ?SetUIMaxMin@XPNSlider@@IAEXXZ */
  if (*(int *)(this + 0xf4) == 0) {
    *(int *)(this + 0xdc) = *(int *)(this + 0x13b) + -1;
    uVar1 = *(undefined4 *)(this + 0x143);
  }
  else {
    *(int *)(this + 0xdc) = *(int *)(this + 0x13f) + -1;
    uVar1 = *(undefined4 *)(this + 0x147);
  }
  *(undefined4 *)(this + 0xd8) = uVar1;
  return;
}


