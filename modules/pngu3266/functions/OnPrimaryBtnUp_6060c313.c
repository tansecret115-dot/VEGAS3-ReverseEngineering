/* Module: pngu3266.dll
   Function: OnPrimaryBtnUp
   Address: 6060c313
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomText::OnPrimaryBtnUp(class CPNxPoint const &) */

void __thiscall XPNCustomText::OnPrimaryBtnUp(XPNCustomText *this,CPNxPoint *param_1)

{
  bool bVar1;
  CPNEvent local_40 [24];
  undefined4 local_28;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1c313  1686  ?OnPrimaryBtnUp@XPNCustomText@@IAEXABVCPNxPoint@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_14);
  if (*(int *)(this + 0x145) != 0) {
    if ((((local_14 <= *(int *)param_1) && (*(int *)param_1 <= local_c)) &&
        (local_10 <= *(int *)(param_1 + 4))) && (*(int *)(param_1 + 4) <= local_8)) {
      bVar1 = true;
      goto LAB_6060c356;
    }
  }
  bVar1 = false;
LAB_6060c356:
  *(undefined4 *)(this + 0x145) = 0;
  (**(code **)(*(int *)this + 0x88))();
  if (bVar1) {
    CPNEvent::CPNEvent(local_40,0x80000000,1,(CPNRouter *)this,0,0,0,0);
    local_28 = (**(code **)(*(int *)this + 0x124))();
    (**(code **)(*(int *)this + 4))(local_40);
    CPNEvent::~CPNEvent(local_40);
  }
  return;
}


