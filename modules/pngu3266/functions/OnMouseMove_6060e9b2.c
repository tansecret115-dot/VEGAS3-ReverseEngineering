/* Module: pngu3266.dll
   Function: OnMouseMove
   Address: 6060e9b2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall XPNSlider::OnMouseMove(class CPNxPoint &) */

void __thiscall XPNSlider::OnMouseMove(XPNSlider *this,CPNxPoint *param_1)

{
  int iVar1;
  int iVar2;
  float10 extraout_ST0;
  undefined1 local_14 [16];
  
                    /* 0x1e9b2  1650  ?OnMouseMove@XPNSlider@@IAEXAAVCPNxPoint@@@Z */
  if (*(int *)(this + 0x14f) != 0) {
    *(undefined4 *)(this + 0x14b) = 1;
    (**(code **)(*(int *)this + 0x60))(param_1);
    if (*(int *)(this + 0xf4) == 0) {
      MoveHorizSlider(this,param_1);
    }
    else {
      MoveVertSlider(this,param_1);
    }
    (**(code **)(*(int *)(this + 0x167) + 0x18))(local_14);
    iVar1 = ftol();
    iVar2 = iVar1 + 1;
    if (extraout_ST0 - (float10)iVar1 < (float10)_DAT_6062b710) {
      iVar2 = iVar1;
    }
    *(int *)(this + 0xc0) = iVar2;
    (**(code **)(*(int *)this + 0x78))(0,1);
    CPNRegion::operator=((CPNRegion *)(this + 0x153),(CPNRegion *)(this + 0x167));
    SendEventNotification(this,2);
  }
  return;
}


