/* Module: pngu3266.dll
   Function: SetButtonImage
   Address: 6060638c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNAnimButton::SetButtonImage(unsigned long) */

int __thiscall CPNAnimButton::SetButtonImage(CPNAnimButton *this,ulong param_1)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  
                    /* 0x1638c  1846  ?SetButtonImage@CPNAnimButton@@UAEHK@Z */
  if (*(undefined4 **)(this + 0x15e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x15e))(1);
    *(undefined4 *)(this + 0x15e) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(int **)(this + 0x15e) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(param_1);
    UpdateImages(this);
  }
  return (uint)(piVar1 != (int *)0x0);
}


