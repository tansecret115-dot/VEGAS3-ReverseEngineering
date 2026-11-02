/* Module: pngu3266.dll
   Function: SetTrackImage
   Address: 60616fca
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNImageSlider::SetTrackImage(unsigned long) */

int __thiscall XPNImageSlider::SetTrackImage(XPNImageSlider *this,ulong param_1)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  
                    /* 0x26fca  2036  ?SetTrackImage@XPNImageSlider@@QAEHK@Z */
  if (*(undefined4 **)(this + 0x183) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x183))(1);
    *(undefined4 *)(this + 0x183) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(int **)(this + 0x183) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(param_1);
    (**(code **)(*(int *)this + 0x154))();
  }
  return (uint)(piVar1 != (int *)0x0);
}


