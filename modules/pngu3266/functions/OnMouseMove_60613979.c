/* Module: pngu3266.dll
   Function: OnMouseMove
   Address: 60613979
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomButton::OnMouseMove(class CPNxPoint const &) */

void __thiscall XPNCustomButton::OnMouseMove(XPNCustomButton *this,CPNxPoint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x23979  1649  ?OnMouseMove@XPNCustomButton@@IAEXABVCPNxPoint@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_14);
  if ((((*(int *)param_1 < local_14) || (local_c < *(int *)param_1)) ||
      (*(int *)(param_1 + 4) < local_10)) ||
     ((local_8 < *(int *)(param_1 + 4) || (*(int *)(this + 0x10b) == 0)))) {
    iVar1 = *(int *)this;
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)this;
    uVar2 = 1;
  }
  (**(code **)(iVar1 + 0x130))(uVar2);
  return;
}


