/* Module: pngu3266.dll
   Function: SendClickAndShowEvents
   Address: 60610e01
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNMenuButton::SendClickAndShowEvents(void) */

void __thiscall XPNMenuButton::SendClickAndShowEvents(XPNMenuButton *this)

{
  CPNEvent local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  XPNMenuButton *local_20;
  DWORD local_1c;
  
                    /* 0x20e01  1809  ?SendClickAndShowEvents@XPNMenuButton@@IAEXXZ */
  CPNEvent::CPNEvent(local_30,0,0,(CPNRouter *)0x0,0,0,0,0);
  local_28 = 0x80000000;
  local_24 = 4;
  local_20 = this;
  local_1c = GetTickCount();
  (**(code **)(*(int *)this + 4))(local_30);
  local_24 = 1;
  local_1c = GetTickCount();
  (**(code **)(*(int *)this + 4))(local_30);
  CPNEvent::~CPNEvent(local_30);
  return;
}


