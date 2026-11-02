/* Module: pngu3266.dll
   Function: SetAnimation
   Address: 6061694c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimButton::SetAnimation(unsigned long,unsigned long,unsigned
   long) */

void __thiscall
XPNAnimButton::SetAnimation(XPNAnimButton *this,ulong param_1,ulong param_2,ulong param_3)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  int iVar2;
  
                    /* 0x2694c  1816  ?SetAnimation@XPNAnimButton@@UAEXKKK@Z */
  if (*(undefined4 **)(this + 0x122) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x122))(1);
    *(undefined4 *)(this + 0x122) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(int **)(this + 0x122) = piVar1;
  (**(code **)(*piVar1 + 0x24))(param_1);
  *(ulong *)(this + 0x132) = param_1;
  *(undefined4 *)(this + 0x12e) = 0;
  *(ulong *)(this + 0x12a) = param_2;
  if (*(int **)(this + 0x122) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(this + 0x122) + 4))();
    if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0x122) + 0x40))(this + 0x136);
      goto LAB_606169e0;
    }
  }
  *(undefined4 *)(this + 0x13a) = 0;
  *(undefined4 *)(this + 0x136) = 0;
LAB_606169e0:
  *(undefined4 *)(this + 0x13e) = *(undefined4 *)(this + 0x136);
  *(undefined4 *)(this + 0x146) = 0;
  *(uint *)(this + 0x142) = *(uint *)(this + 0x13a) / *(uint *)(this + 0x132);
  *(uint *)(this + 0x14a) = *(uint *)(this + 0x13a) / *(uint *)(this + 0x132);
  UpdateColors(this);
  return;
}


