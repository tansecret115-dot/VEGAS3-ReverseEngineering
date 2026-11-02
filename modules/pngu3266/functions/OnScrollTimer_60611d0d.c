/* Module: pngu3266.dll
   Function: OnScrollTimer
   Address: 60611d0d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNScrollingText::OnScrollTimer(void) */

void __thiscall XPNScrollingText::OnScrollTimer(XPNScrollingText *this)

{
  DWORD DVar1;
  uint uVar2;
  CPNEvent local_40 [24];
  undefined4 local_28;
  undefined1 local_14 [16];
  
                    /* 0x21d0d  1694  ?OnScrollTimer@XPNScrollingText@@IAEXXZ */
  if ((*(int *)(this + 0x12e) != 1) && (*(int *)(this + 0x12e) == 3)) {
    if ((*(int *)(this + 0x116) != 0) &&
       ((*(int *)(this + 0x12a) == 0 && (*(int *)(this + 0x122) % *(int *)(this + 0x11a) == 0)))) {
      DVar1 = GetTickCount();
      *(DWORD *)(this + 0x126) = DVar1;
      *(undefined4 *)(this + 0x12a) = 1;
    }
    if (*(int *)(this + 0x12a) != 0) {
      DVar1 = GetTickCount();
      if (DVar1 < *(uint *)(this + 0x126)) {
        DVar1 = GetTickCount();
        uVar2 = (DVar1 - *(int *)(this + 0x126)) - 1;
      }
      else {
        DVar1 = GetTickCount();
        uVar2 = DVar1 - *(int *)(this + 0x126);
      }
      if (uVar2 <= *(uint *)(this + 0x116)) {
        return;
      }
    }
    *(undefined4 *)(this + 0x12a) = 0;
    if (*(int *)(this + 0x122) < (*(int *)(this + 0x102) + -1) * *(int *)(this + 0x11a)) {
      (**(code **)(*(int *)this + 0x3c))(local_14);
      (**(code **)(*(int *)this + 0x4c))(0,-*(int *)(this + 0x10e),local_14,0);
      *(int *)(this + 0x122) = *(int *)(this + 0x122) + *(int *)(this + 0x10e);
      (**(code **)(*(int *)this + 0x78))(0,1);
    }
    else {
      (**(code **)(*(int *)this + 0x134))();
      CPNEvent::CPNEvent(local_40,0x80000000,1,(CPNRouter *)this,0,0,0,0);
      local_28 = (**(code **)(*(int *)this + 0x124))();
      (**(code **)(*(int *)this + 4))(local_40);
      CPNEvent::~CPNEvent(local_40);
    }
  }
  return;
}


