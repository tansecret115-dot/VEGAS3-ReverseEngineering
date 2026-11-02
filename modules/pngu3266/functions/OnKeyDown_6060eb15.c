/* Module: pngu3266.dll
   Function: OnKeyDown
   Address: 6060eb15
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall XPNSlider::OnKeyDown(unsigned long) */

void __thiscall XPNSlider::OnKeyDown(XPNSlider *this,ulong param_1)

{
  int iVar1;
  bool bVar2;
  
                    /* 0x1eb15  1639  ?OnKeyDown@XPNSlider@@IAEXK@Z */
  iVar1 = 1;
  if (param_1 < 0x21) {
    return;
  }
  if (param_1 < 0x23) {
    if (*(uint *)(this + 0xf0) == 0) {
      iVar1 = (int)ROUND((float)(*(int *)(this + 200) - *(int *)(this + 0xc4)) * _DAT_6062b718);
    }
    else {
      iVar1 = (*(int *)(this + 200) - *(int *)(this + 0xc4)) /
              (int)ROUND((float)*(uint *)(this + 0xf0) * _DAT_6062b718);
    }
    bVar2 = param_1 == 0x22;
LAB_6060ebc1:
    if (!bVar2) goto LAB_6060ebc5;
  }
  else {
    if (param_1 < 0x25) {
      return;
    }
    if (0x28 < param_1) {
      return;
    }
    if (*(int *)(this + 0xf0) != 0) {
      iVar1 = (*(int *)(this + 200) - *(int *)(this + 0xc4)) / *(int *)(this + 0xf0);
    }
    if (param_1 != 0x25) {
      bVar2 = param_1 == 0x28;
      goto LAB_6060ebc1;
    }
  }
  iVar1 = -iVar1;
LAB_6060ebc5:
  KeyboardAdjustPosition(this,iVar1);
  return;
}


