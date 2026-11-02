/* Module: pngu3266.dll
   Function: SendEventNotification
   Address: 6060f4be
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::SendEventNotification(unsigned long) */

void __thiscall XPNSlider::SendEventNotification(XPNSlider *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  CPNEvent local_30 [24];
  undefined4 local_18;
  
                    /* 0x1f4be  1810  ?SendEventNotification@XPNSlider@@IAEXK@Z */
  uVar2 = 0;
  uVar1 = (**(code **)(*(int *)this + 0x124))();
  CPNEvent::CPNEvent(local_30,0x80000000,param_1,(CPNRouter *)this,0,*(ulong *)(this + 0xc0),uVar1,
                     uVar2);
  local_18 = (**(code **)(*(int *)this + 0x124))();
  (**(code **)(*(int *)this + 0xdc))(local_30);
  (**(code **)(*(int *)this + 4))(local_30);
  CPNEvent::~CPNEvent(local_30);
  return;
}


