/* Module: pngu3266.dll
   Function: SetAnimation
   Address: 6060f7c7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimateCtl::SetAnimation(class CPNBitmapImage *,unsigned
   long,unsigned long,int) */

void __thiscall
XPNAnimateCtl::SetAnimation
          (XPNAnimateCtl *this,CPNBitmapImage *param_1,ulong param_2,ulong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1f7c7  1819  ?SetAnimation@XPNAnimateCtl@@UAEXPAVCPNBitmapImage@@KKH@Z */
  if (*(undefined4 **)(this + 0xe7) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xe7))(1);
    *(undefined4 *)(this + 0xe7) = 0;
  }
  *(ulong *)(this + 0xf7) = param_2;
  *(CPNBitmapImage **)(this + 0xe7) = param_1;
  *(undefined4 *)(this + 0xf3) = 0;
  *(ulong *)(this + 0xef) = param_3;
  if (param_1 != (CPNBitmapImage *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1 + 4))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(this + 0xe7) + 0x40))(this + 0xfb);
      goto LAB_6060f837;
    }
  }
  *(undefined4 *)(this + 0xff) = 0;
  *(undefined4 *)(this + 0xfb) = 0;
LAB_6060f837:
  if (param_4 == 0) {
    uVar2 = *(uint *)(this + 0xfb) / *(uint *)(this + 0xf7);
    *(undefined4 *)(this + 0x107) = *(undefined4 *)(this + 0xff);
    *(undefined4 *)(this + 0x10f) = 0;
    *(uint *)(this + 0x103) = uVar2;
    *(uint *)(this + 0x10b) = uVar2;
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


