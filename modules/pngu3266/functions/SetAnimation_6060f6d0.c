/* Module: pngu3266.dll
   Function: SetAnimation
   Address: 6060f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimateCtl::SetAnimation(unsigned long,unsigned long,unsigned
   long,int) */

void __thiscall
XPNAnimateCtl::SetAnimation
          (XPNAnimateCtl *this,ulong param_1,ulong param_2,ulong param_3,int param_4)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0x1f6d0  1818  ?SetAnimation@XPNAnimateCtl@@UAEXKKKH@Z */
  if (*(undefined4 **)(this + 0xe7) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xe7))(1);
    *(undefined4 *)(this + 0xe7) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(int **)(this + 0xe7) = piVar1;
  (**(code **)(*piVar1 + 0x24))(param_1);
  *(ulong *)(this + 0xf7) = param_1;
  *(undefined4 *)(this + 0xf3) = 0;
  *(ulong *)(this + 0xef) = param_2;
  if (*(int **)(this + 0xe7) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(this + 0xe7) + 4))();
    if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0xe7) + 0x40))(this + 0xfb);
      goto LAB_6060f764;
    }
  }
  *(undefined4 *)(this + 0xff) = 0;
  *(undefined4 *)(this + 0xfb) = 0;
LAB_6060f764:
  if (param_3 == 0) {
    uVar3 = *(uint *)(this + 0xfb) / *(uint *)(this + 0xf7);
    *(undefined4 *)(this + 0x107) = *(undefined4 *)(this + 0xff);
    *(undefined4 *)(this + 0x10f) = 0;
    *(uint *)(this + 0x103) = uVar3;
    *(uint *)(this + 0x10b) = uVar3;
  }
  else {
    *(uint *)(this + 0x103) = *(uint *)(this + 0xfb);
    *(undefined4 *)(this + 0x10b) = 0;
    *(uint *)(this + 0x107) = *(uint *)(this + 0xff) / *(uint *)(this + 0xf7);
    *(uint *)(this + 0x10f) = *(uint *)(this + 0xff) / *(uint *)(this + 0xf7);
  }
  UpdateColors(this);
  return;
}


