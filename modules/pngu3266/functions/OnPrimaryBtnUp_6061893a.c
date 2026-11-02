/* Module: pngu3266.dll
   Function: OnPrimaryBtnUp
   Address: 6061893a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNTextWithLink::OnPrimaryBtnUp(class CPNxPoint const &) */

void __thiscall XPNTextWithLink::OnPrimaryBtnUp(XPNTextWithLink *this,CPNxPoint *param_1)

{
  bool bVar1;
  int iVar2;
  CPNEvent local_44 [24];
  undefined4 local_2c;
  ulong local_28;
  undefined1 local_18 [16];
  ulong local_8;
  
                    /* 0x2893a  1687  ?OnPrimaryBtnUp@XPNTextWithLink@@MAEXABVCPNxPoint@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_18);
  local_8 = 0;
  if (*(int *)(this + 0x145) != 0) {
    iVar2 = PointOnLink(this,param_1,&local_8);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_60618976;
    }
  }
  bVar1 = false;
LAB_60618976:
  *(undefined4 *)(this + 0x145) = 0;
  (**(code **)(*(int *)this + 0x88))();
  if (bVar1) {
    CPNEvent::CPNEvent(local_44,0x80000000,2,(CPNRouter *)this,0,0,0,0);
    local_2c = (**(code **)(*(int *)this + 0x124))();
    local_28 = local_8;
    (**(code **)(*(int *)this + 4))(local_44);
    CPNEvent::~CPNEvent(local_44);
  }
  return;
}


