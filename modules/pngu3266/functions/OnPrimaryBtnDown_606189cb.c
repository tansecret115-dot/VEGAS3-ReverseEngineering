/* Module: pngu3266.dll
   Function: OnPrimaryBtnDown
   Address: 606189cb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNTextWithLink::OnPrimaryBtnDown(class CPNxPoint const &) */

void __thiscall XPNTextWithLink::OnPrimaryBtnDown(XPNTextWithLink *this,CPNxPoint *param_1)

{
  int iVar1;
  ulong local_8;
  
                    /* 0x289cb  1683  ?OnPrimaryBtnDown@XPNTextWithLink@@MAEXABVCPNxPoint@@@Z */
  local_8 = 0;
  iVar1 = PointOnLink(this,param_1,&local_8);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x145) = 1;
  }
  (**(code **)(*(int *)this + 0x84))();
  return;
}


