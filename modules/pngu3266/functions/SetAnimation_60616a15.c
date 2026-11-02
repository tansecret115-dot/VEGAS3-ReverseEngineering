/* Module: pngu3266.dll
   Function: SetAnimation
   Address: 60616a15
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimButton::SetAnimation(class CPNBitmapImage *,unsigned
   long,unsigned long) */

void __thiscall
XPNAnimButton::SetAnimation(XPNAnimButton *this,CPNBitmapImage *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x26a15  1817  ?SetAnimation@XPNAnimButton@@UAEXPAVCPNBitmapImage@@KK@Z */
  if (*(undefined4 **)(this + 0x122) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x122))(1);
    *(undefined4 *)(this + 0x122) = 0;
  }
  *(ulong *)(this + 0x132) = param_2;
  *(CPNBitmapImage **)(this + 0x122) = param_1;
  *(undefined4 *)(this + 0x12e) = 0;
  *(ulong *)(this + 0x12a) = param_3;
  if (param_1 != (CPNBitmapImage *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1 + 4))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(this + 0x122) + 0x40))(this + 0x136);
      goto LAB_60616a85;
    }
  }
  *(undefined4 *)(this + 0x13a) = 0;
  *(undefined4 *)(this + 0x136) = 0;
LAB_60616a85:
  *(undefined4 *)(this + 0x13e) = *(undefined4 *)(this + 0x136);
  *(undefined4 *)(this + 0x146) = 0;
  *(uint *)(this + 0x142) = *(uint *)(this + 0x13a) / *(uint *)(this + 0x132);
  *(uint *)(this + 0x14a) = *(uint *)(this + 0x13a) / *(uint *)(this + 0x132);
  UpdateColors(this);
  return;
}


