/* Module: pngu3266.dll
   Function: OnSize
   Address: 6060e55b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::OnSize(short,short) */

void __thiscall XPNSlider::OnSize(XPNSlider *this,short param_1,short param_2)

{
  CPNxRect *pCVar1;
  CPNRegion *pCVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined8 local_c;
  
                    /* 0x1e55b  1698  ?OnSize@XPNSlider@@MAEXFF@Z */
  iVar5 = (int)param_2;
  local_2c = 0;
  local_28 = 0;
  iVar6 = (int)param_1;
  local_24 = iVar6;
  local_20 = iVar5;
  (**(code **)(*(int *)(this + 0x117) + 0x18))(&local_1c);
  if (*(int *)(this + 0xf4) == 0) {
    if ((local_18 != 0) || (local_10 - local_18 != 0)) {
      local_c = (double)CONCAT44((local_10 - local_18) + local_18 * 2,(undefined4)local_c);
    }
    local_18 = ftol();
    local_10 = iVar5 - local_18;
  }
  else {
    local_c = (double)CONCAT44(local_14 + local_1c,(undefined4)local_c);
    local_1c = ftol();
    local_14 = iVar6 - local_1c;
  }
  pCVar1 = (CPNxRect *)(this + 0x13b);
  local_c = (double)CONCAT44((*(int *)(this + 0x147) - *(int *)(this + 0x13f)) +
                             *(int *)(this + 0x13f) * 2,SUB84(local_c,0));
  iVar3 = ftol();
  *(int *)(this + 0x13f) = iVar3;
  *(int *)(this + 0x147) = iVar5 - iVar3;
  iVar5 = ftol();
  *(int *)pCVar1 = iVar5;
  *(int *)(this + 0x143) = iVar6 - iVar5;
  if (*(int *)(this + 0xf4) == 0) {
    local_14 = ftol();
    if (*(int *)(this + 0x143) - *(int *)pCVar1 < local_14 * 3) {
      local_14 = (*(int *)(this + 0x143) - *(int *)pCVar1) / 3;
    }
    local_14 = local_14 + local_1c;
  }
  else {
    local_10 = ftol();
    if (*(int *)(this + 0x147) - *(int *)(this + 0x13f) < local_10 * 3) {
      local_10 = (*(int *)(this + 0x147) - *(int *)(this + 0x13f)) / 3;
    }
    local_10 = local_10 + local_18;
  }
  CenterRect(this,pCVar1,(CPNxRect *)&local_2c);
  CenterRect(this,(CPNxRect *)&local_1c,(CPNxRect *)&local_2c);
  pCVar2 = (CPNRegion *)(this + 0x117);
  (**(code **)(*(int *)(this + 0x117) + 0x28))();
  (**(code **)(*(int *)pCVar2 + 0x10))(&local_1c);
  if (*(int *)(this + 0xf4) == 0) {
    if (*(int *)pCVar1 <= local_2c) {
      *(int *)pCVar1 = local_2c + 1;
    }
    if (local_24 <= *(int *)(this + 0x143)) {
      *(int *)(this + 0x143) = local_24 + -1;
    }
  }
  else {
    if (*(int *)(this + 0x13f) <= local_28) {
      *(int *)(this + 0x13f) = local_28 + 1;
    }
    if (local_20 <= *(int *)(this + 0x147)) {
      *(int *)(this + 0x147) = local_20 + -1;
    }
  }
  CPNRegion::operator=((CPNRegion *)(this + 0x167),pCVar2);
  CPNRegion::operator=((CPNRegion *)(this + 0x153),pCVar2);
  SetUIMaxMin(this);
  local_c = (double)(*(int *)(this + 200) - *(int *)(this + 0xc4));
  lVar4 = GetSlidableDistance(this);
  *(double *)(this + 0xe0) = local_c / (double)lVar4;
  if (*(int *)(this + 0xf0) != 0) {
    lVar4 = GetSlidableDistance(this);
    local_c = (double)(ulonglong)*(uint *)(this + 0xf0);
    *(double *)(this + 0xe8) = (double)lVar4 / (double)(longlong)local_c;
  }
  SetSliderPos(this,*(long *)(this + 0xc0));
  return;
}


