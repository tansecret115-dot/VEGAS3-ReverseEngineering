/* Module: pngu3266.dll
   Function: Create
   Address: 6060a8ab
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNTabControl::Create(unsigned long,long,long,long,long,unsigned
   long,unsigned long,class CPNWindow *) */

int __thiscall
XPNTabControl::Create
          (XPNTabControl *this,ulong param_1,long param_2,long param_3,long param_4,long param_5,
          ulong param_6,ulong param_7,CPNWindow *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  XPNScrollButton *this_00;
  
                    /* 0x1a8ab  929  ?Create@XPNTabControl@@UAEHKJJJJKKPAVCPNWindow@@@Z */
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int *)(this + 0xd0) == 0) {
    puVar2 = operator_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_6061a0c0(puVar2);
    }
    *(undefined4 *)(this + 0xd0) = uVar3;
  }
  *(ulong *)(this + 200) = param_7 & 1;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  iVar4 = CPNControl::Create((CPNControl *)this,param_1,param_8,param_2,param_3,param_4,0x19,
                             param_6 | 0x1000,&DAT_60649ac0,0);
  this_00 = operator_new(0xff);
  if (this_00 == (XPNScrollButton *)0x0) {
    this_00 = (XPNScrollButton *)0x0;
  }
  else {
    XPNScrollButton::XPNScrollButton(this_00);
    *(undefined ***)this_00 = &CPNScrollButton::_vftable_;
  }
  *(XPNScrollButton **)(this + 0xd4) = this_00;
  (**(code **)(*(int *)this_00 + 0x14c))(param_1,this,param_4 + -0x20,7,0x20,0x11,0x10000200,0x1d);
  iVar1 = *(int *)(*(int *)(this + 0xd4) + 0xfb);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(*(int *)(*(int *)(this + 0xd4) + 0xfb) + 0x1c) = 200;
  *(undefined4 *)(*(int *)(*(int *)(this + 0xd4) + 0xfb) + 0x18) = 1;
  (**(code **)(**(int **)(this + 0xd4) + 0x98))(0);
  CPNRouter::AddObserver(*(CPNRouter **)(this + 0xd4),(CPNRouter *)this,0x80000000,0x20);
  return iVar4;
}


