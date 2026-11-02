/* Module: pngu3266.dll
   Function: Create
   Address: 6061028d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNScrollButton::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long) */

int __thiscall
XPNScrollButton::Create
          (XPNScrollButton *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  CPNScrollHelper *this_00;
  undefined4 uVar2;
  
                    /* 0x2028d  926  ?Create@XPNScrollButton@@UAEHKPAVCPNWindow@@JJJJKK@Z */
  iVar1 = XPNControl::Create((XPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7 | 0x4000,(char *)0x0,param_8);
  if (iVar1 != 0) {
    this_00 = operator_new(0x40);
    if (this_00 == (CPNScrollHelper *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CPNScrollHelper::CPNScrollHelper(this_00,(XPNButton *)this,param_8);
    }
    *(undefined4 *)(this + 0xfb) = uVar2;
  }
  return iVar1;
}


