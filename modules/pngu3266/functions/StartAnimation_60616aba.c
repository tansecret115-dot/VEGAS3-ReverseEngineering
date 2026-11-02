/* Module: pngu3266.dll
   Function: StartAnimation
   Address: 60616aba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimButton::StartAnimation(long) */

void __thiscall XPNAnimButton::StartAnimation(XPNAnimButton *this,long param_1)

{
  XPNAnimButton *pXVar1;
  void *this_00;
  CPNTimer *pCVar2;
  
                    /* 0x26aba  2070  ?StartAnimation@XPNAnimButton@@UAEXJ@Z */
  pXVar1 = this + 0xfb;
  if (*(XPNTimer **)(this + 0xfb) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0xfb),0);
    *(CPNTimer **)pXVar1 = (CPNTimer *)0x0;
  }
  *(undefined4 *)(this + 0x12e) = 0;
  if (1 < *(uint *)(this + 0x132)) {
    this_00 = operator_new(0x34);
    if (this_00 == (void *)0x0) {
      pCVar2 = (CPNTimer *)0x0;
    }
    else {
      pCVar2 = FUN_60616b27(this_00,(int *)this,*(ulong *)(this + 0x12a),param_1,(CPNTimer **)pXVar1
                           );
    }
    *(CPNTimer **)pXVar1 = pCVar2;
  }
  *(undefined4 *)(this + 0x156) = 1;
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


