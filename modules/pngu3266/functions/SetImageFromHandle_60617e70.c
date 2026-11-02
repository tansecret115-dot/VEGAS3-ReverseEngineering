/* Module: pngu3266.dll
   Function: SetImageFromHandle
   Address: 60617e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNImageBorder::SetImageFromHandle(unsigned long) */

int __thiscall CPNImageBorder::SetImageFromHandle(CPNImageBorder *this,ulong param_1)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  
                    /* 0x27e70  1925  ?SetImageFromHandle@CPNImageBorder@@UAEHK@Z */
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
    *(undefined4 *)(this + 0xc) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(int **)(this + 0xc) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x54))(param_1);
    ImageChanged(this);
  }
  return (uint)(piVar1 != (int *)0x0);
}


