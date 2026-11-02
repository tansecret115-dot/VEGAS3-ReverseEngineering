/* Module: pngu3266.dll
   Function: OnPrimaryBtnUp
   Address: 606138f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomButton::OnPrimaryBtnUp(class CPNxPoint const &) */

void __thiscall XPNCustomButton::OnPrimaryBtnUp(XPNCustomButton *this,CPNxPoint *param_1)

{
  CPNEvent local_40 [24];
  undefined4 local_28;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x238f1  1685  ?OnPrimaryBtnUp@XPNCustomButton@@IAEXABVCPNxPoint@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_14);
  *(undefined4 *)(this + 0x10b) = 0;
  (**(code **)(*(int *)this + 0x130))(0);
  (**(code **)(*(int *)this + 0x88))();
  if ((((local_14 <= *(int *)param_1) && (*(int *)param_1 <= local_c)) &&
      (local_10 <= *(int *)(param_1 + 4))) && (*(int *)(param_1 + 4) <= local_8)) {
    CPNEvent::CPNEvent(local_40,0x80000000,1,(CPNRouter *)this,0,0,0,0);
    local_28 = (**(code **)(*(int *)this + 0x124))();
    (**(code **)(*(int *)this + 4))(local_40);
    CPNEvent::~CPNEvent(local_40);
  }
  return;
}


