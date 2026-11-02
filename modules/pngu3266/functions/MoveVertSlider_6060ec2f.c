/* Module: pngu3266.dll
   Function: MoveVertSlider
   Address: 6060ec2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall XPNSlider::MoveVertSlider(class CPNxPoint &) */

void __thiscall XPNSlider::MoveVertSlider(XPNSlider *this,CPNxPoint *param_1)

{
  CPNRegion *this_00;
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  int local_10;
  uint local_c;
  undefined4 uStack_8;
  
                    /* 0x1ec2f  1576  ?MoveVertSlider@XPNSlider@@IAEXAAVCPNxPoint@@@Z */
  this_00 = (CPNRegion *)(this + 0x167);
  CPNRegion::operator=(this_00,(CPNRegion *)(this + 0x117));
  if (*(int *)(this + 0xf0) == 0) {
    (**(code **)(*(int *)this_00 + 0x20))
              (0,(int)(short)(*(short *)(param_1 + 4) - *(short *)(this + 0xd4)));
  }
  else {
    (**(code **)(*(int *)this_00 + 0x18))(local_2c);
    uVar1 = ftol();
    if ((float10)_DAT_6062b710 < extraout_ST0 - (float10)uVar1) {
      uVar1 = uVar1 + 1;
    }
    uStack_8 = 0;
    local_c = uVar1;
    iVar2 = ftol();
    if (*(uint *)(this + 0xf0) <= uVar1) {
      iVar2 = GetSlidableDistance(this);
    }
    (**(code **)(*(int *)this_00 + 0x20))(0,(*(int *)(this + 0xdc) - local_28) + iVar2);
  }
  (**(code **)(*(int *)this_00 + 0x18))(local_1c);
  if (local_18 < *(int *)(this + 0xdc)) {
    (**(code **)(*(int *)this_00 + 0x20))(0,*(int *)(this + 0xdc) - local_18);
  }
  else if (*(int *)(this + 0xd8) < local_10) {
    (**(code **)(*(int *)this_00 + 0x20))(0,*(int *)(this + 0xd8) - local_10);
  }
  return;
}


