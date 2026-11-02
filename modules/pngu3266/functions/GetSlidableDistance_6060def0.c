/* Module: pngu3266.dll
   Function: GetSlidableDistance
   Address: 6060def0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall XPNSlider::GetSlidableDistance(void) */

long __thiscall XPNSlider::GetSlidableDistance(XPNSlider *this)

{
  int iVar1;
  long lVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1def0  1357  ?GetSlidableDistance@XPNSlider@@IAEJXZ */
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)(this + 0x117) + 0x2c))();
  if (iVar1 == 0) {
    local_8 = 1;
    CreateDefaultThumb(this);
  }
  (**(code **)(*(int *)(this + 0x117) + 0x18))(&local_1c);
  local_c = local_10 - local_18;
  iVar1 = (**(code **)(*(int *)this + 0x10))();
  if ((iVar1 == 0) &&
     (*(int *)(this + 0x147) - *(int *)(this + 0x13f) <
      *(int *)(this + 0x143) - *(int *)(this + 0x13b))) {
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (local_8 != 0) {
    (**(code **)(*(int *)(this + 0x117) + 0x28))();
  }
  if (*(int *)(this + 0xf4) == 0) {
    lVar2 = ((*(int *)(this + 0x143) - *(int *)(this + 0x13b)) - (local_14 - local_1c)) + 1;
  }
  else {
    lVar2 = ((*(int *)(this + 0x147) - *(int *)(this + 0x13f)) - local_c) + 2;
  }
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  return lVar2;
}


