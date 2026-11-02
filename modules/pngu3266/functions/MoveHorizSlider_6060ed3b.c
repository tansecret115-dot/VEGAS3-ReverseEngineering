/* Module: pngu3266.dll
   Function: MoveHorizSlider
   Address: 6060ed3b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall XPNSlider::MoveHorizSlider(class CPNxPoint &) */

void __thiscall XPNSlider::MoveHorizSlider(XPNSlider *this,CPNxPoint *param_1)

{
  CPNRegion *this_00;
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  int local_2c [4];
  int local_1c [2];
  int local_14;
  uint local_c;
  undefined4 uStack_8;
  
                    /* 0x1ed3b  1574  ?MoveHorizSlider@XPNSlider@@IAEXAAVCPNxPoint@@@Z */
  this_00 = (CPNRegion *)(this + 0x167);
  CPNRegion::operator=(this_00,(CPNRegion *)(this + 0x117));
  if (*(double *)(this + 0xe8) <= _DAT_6062b708) {
    (**(code **)(*(int *)this_00 + 0x20))
              ((int)(short)(*(short *)param_1 - *(short *)(this + 0xd0)),0);
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
    (**(code **)(*(int *)this_00 + 0x20))((*(int *)(this + 0xdc) - local_2c[0]) + iVar2,0);
  }
  (**(code **)(*(int *)this_00 + 0x18))(local_1c);
  if (local_1c[0] < *(int *)(this + 0xdc)) {
    (**(code **)(*(int *)this_00 + 0x20))(*(int *)(this + 0xdc) - local_1c[0],0);
  }
  else if (*(int *)(this + 0xd8) < local_14) {
    (**(code **)(*(int *)this_00 + 0x20))(*(int *)(this + 0xd8) - local_14,0);
  }
  return;
}


