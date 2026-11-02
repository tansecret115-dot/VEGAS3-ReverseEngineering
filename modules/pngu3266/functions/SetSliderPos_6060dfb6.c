/* Module: pngu3266.dll
   Function: SetSliderPos
   Address: 6060dfb6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall XPNSlider::SetSliderPos(long) */

void __thiscall XPNSlider::SetSliderPos(XPNSlider *this,long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  CPNRegion *pCVar5;
  float10 extraout_ST0;
  int local_4c [2];
  uint local_44;
  int local_3c [2];
  uint local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  uint local_14;
  undefined4 uStack_10;
  CPNRegion *local_c;
  CPNRegion *local_8;
  
                    /* 0x1dfb6  2004  ?SetSliderPos@XPNSlider@@QAEXJ@Z */
  iVar4 = *(int *)(this + 200) + *(int *)(this + 0xcc);
  lVar2 = *(int *)(this + 0xc4) + *(int *)(this + 0xcc);
  if ((lVar2 <= param_1) && (lVar2 = param_1, iVar4 < param_1)) {
    lVar2 = iVar4;
  }
  if (*(int *)(this + 0x14b) != 0) {
    return;
  }
  if (*(int *)(this + 0x14f) != 0) {
    return;
  }
  *(long *)(this + 0xc0) = lVar2;
  iVar4 = (**(code **)(*(int *)this + 0x10))();
  if (iVar4 == 0) {
    return;
  }
  if ((*(double *)(this + 0xe0) == _DAT_6062b708) &&
     ((double)(*(int *)(this + 0xc0) - *(int *)(this + 0xcc)) == _DAT_6062b708)) {
    param_1 = 0;
  }
  else {
    param_1 = ftol();
  }
  pCVar5 = (CPNRegion *)(this + 0x167);
  local_8 = (CPNRegion *)(this + 0x153);
  local_c = pCVar5;
  CPNRegion::operator=(local_8,pCVar5);
  uVar1 = *(uint *)(this + 0xf0);
  if (uVar1 != 0) {
    uVar3 = ftol();
    uStack_10 = 0;
    local_14 = uVar3;
    if ((float10)_DAT_6062b710 < extraout_ST0 - (float10)uVar3) {
      local_14 = uVar3 + 1;
    }
    if (local_14 < uVar1) {
      uStack_10 = 0;
      param_1 = ftol();
    }
    else {
      local_14 = uVar3;
      param_1 = GetSlidableDistance(this);
    }
  }
  (**(code **)(*(int *)pCVar5 + 0x18))(&local_2c);
  if (*(int *)(this + 0xf4) == 0) {
    local_2c = (*(int *)(this + 0xdc) + param_1) - local_2c;
    if (*(int *)(this + 0xd8) < local_24 + local_2c) goto LAB_6060e15a;
    iVar4 = *(int *)pCVar5;
    local_28 = 0;
  }
  else {
    (**(code **)(*(int *)pCVar5 + 0x20))(0,(*(int *)(this + 0xd8) - param_1) - local_20);
    (**(code **)(*(int *)pCVar5 + 0x18))(&local_2c);
    if (local_28 < *(int *)(this + 0xdc)) {
      iVar4 = *(int *)pCVar5;
      local_28 = *(int *)(this + 0xdc) - local_28;
    }
    else {
      if (local_20 <= *(int *)(this + 0xd8)) goto LAB_6060e15a;
      iVar4 = *(int *)pCVar5;
      local_28 = *(int *)(this + 0xd8) - local_20;
    }
    local_2c = 0;
  }
  (**(code **)(iVar4 + 0x20))(local_2c,local_28);
LAB_6060e15a:
  CPNRegion::operator=((CPNRegion *)(this + 0x117),pCVar5);
  (**(code **)(*(int *)local_8 + 0x18))(local_4c);
  (**(code **)(*(int *)pCVar5 + 0x18))(local_3c);
  iVar4 = CPNxRect::operator!=((CPNxRect *)local_3c,(CPNxRect *)local_4c);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)this + 0x14c))(local_3c,local_4c), iVar4 == 0))
  {
    uStack_18 = *(undefined4 *)(this + 0x13f);
    uStack_10 = *(undefined4 *)(this + 0x147);
    local_1c = local_3c[0];
    if (local_4c[0] <= local_3c[0]) {
      local_1c = local_4c[0];
    }
    local_14 = local_34;
    if ((int)local_34 <= (int)local_44) {
      local_14 = local_44;
    }
    (**(code **)(*(int *)this + 0x78))(&local_1c,0);
    (**(code **)(*(int *)this + 0x78))(local_3c,0);
    (**(code **)(*(int *)this + 0x78))(local_4c,*(uint *)(this + 0xb8) & 2);
    pCVar5 = local_c;
  }
  CPNRegion::operator=(local_8,pCVar5);
  return;
}


