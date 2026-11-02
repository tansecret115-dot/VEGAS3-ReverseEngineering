/* Module: pngu3266.dll
   Function: SetButtonImage
   Address: 606063e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNAnimButton::SetButtonImage(class CPNImage *) */

int __thiscall CPNAnimButton::SetButtonImage(CPNAnimButton *this,CPNImage *param_1)

{
  CPNBitmapImage *this_00;
  undefined4 uVar1;
  int iVar2;
  CPNScreenDC local_1e4 [480];
  
                    /* 0x163e0  1847  ?SetButtonImage@CPNAnimButton@@UAEHPAVCPNImage@@@Z */
  if (*(undefined4 **)(this + 0x15e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x15e))(1);
    *(undefined4 *)(this + 0x15e) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(undefined4 *)(this + 0x15e) = uVar1;
  iVar2 = (**(code **)(*(int *)param_1 + 0x18))();
  if (iVar2 == 0) {
    CPNScreenDC::CPNScreenDC(local_1e4);
    (**(code **)(*(int *)param_1 + 0x10))(local_1e4);
    CPNScreenDC::~CPNScreenDC(local_1e4);
  }
  (**(code **)(**(int **)(this + 0x15e) + 0x54))(*(undefined4 *)(param_1 + 0x14));
  UpdateImages(this);
  if (param_1 != (CPNImage *)0x0) {
    (*(code *)**(undefined4 **)param_1)(1);
  }
  return 1;
}


