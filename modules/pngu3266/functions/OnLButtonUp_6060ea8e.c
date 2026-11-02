/* Module: pngu3266.dll
   Function: OnLButtonUp
   Address: 6060ea8e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::OnLButtonUp(class CPNxPoint &) */

void __thiscall XPNSlider::OnLButtonUp(XPNSlider *this,CPNxPoint *param_1)

{
  undefined1 local_14 [16];
  
                    /* 0x1ea8e  1643  ?OnLButtonUp@XPNSlider@@IAEXAAVCPNxPoint@@@Z */
  (**(code **)(*(int *)this + 0x88))();
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  if (*(int *)(this + 0x14b) != 0) {
    CPNRegion::operator=((CPNRegion *)(this + 0x117),(CPNRegion *)(this + 0x167));
  }
  if (*(int *)(this + 0x14f) != 0) {
    *(undefined4 *)(this + 0x17b) = 3;
    (**(code **)(*(int *)(this + 0x117) + 0x18))(local_14);
    (**(code **)(*(int *)this + 0x78))(local_14,1);
  }
  *(undefined4 *)(this + 0x14f) = 0;
  *(undefined4 *)(this + 0x14b) = 0;
  SendEventNotification(this,4);
  return;
}


