/* Module: pngu3266.dll
   Function: StartAnimation
   Address: 6060f89a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimateCtl::StartAnimation(long) */

void __thiscall XPNAnimateCtl::StartAnimation(XPNAnimateCtl *this,long param_1)

{
  XPNAnimateCtl *pXVar1;
  void *this_00;
  CPNTimer *pCVar2;
  
                    /* 0x1f89a  2071  ?StartAnimation@XPNAnimateCtl@@UAEXJ@Z */
  pXVar1 = this + 0xc0;
  if (*(XPNTimer **)(this + 0xc0) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0xc0),0);
    *(CPNTimer **)pXVar1 = (CPNTimer *)0x0;
  }
  *(undefined4 *)(this + 0xf3) = 0;
  if (1 < *(uint *)(this + 0xf7)) {
    this_00 = operator_new(0x34);
    if (this_00 == (void *)0x0) {
      pCVar2 = (CPNTimer *)0x0;
    }
    else {
      pCVar2 = FUN_6060f8fd(this_00,(int *)this,*(ulong *)(this + 0xef),param_1,(CPNTimer **)pXVar1)
      ;
    }
    *(CPNTimer **)pXVar1 = pCVar2;
  }
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


