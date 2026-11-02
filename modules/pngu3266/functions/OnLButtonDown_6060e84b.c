/* Module: pngu3266.dll
   Function: OnLButtonDown
   Address: 6060e84b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall XPNSlider::OnLButtonDown(class CPNxPoint &) */

void __thiscall XPNSlider::OnLButtonDown(XPNSlider *this,CPNxPoint *param_1)

{
  CPNRegion *pCVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  undefined1 local_14 [16];
  
                    /* 0x1e84b  1642  ?OnLButtonDown@XPNSlider@@IAEXAAVCPNxPoint@@@Z */
  if (((((*(int *)(this + 0x13b) <= *(int *)param_1) && (*(int *)param_1 <= *(int *)(this + 0x143)))
       && (*(int *)(this + 0x13f) <= *(int *)(param_1 + 4))) &&
      (*(int *)(param_1 + 4) <= *(int *)(this + 0x147))) ||
     (iVar2 = (**(code **)(*(int *)(this + 0x117) + 0x14))(param_1), iVar2 != 0)) {
    *(undefined4 *)(this + 0x14f) = 1;
    (**(code **)(*(int *)this + 0x90))();
    *(undefined4 *)(this + 0xd0) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 4);
    (**(code **)(*(int *)this + 0x60))(this + 0xd0);
    pCVar1 = (CPNRegion *)(this + 0x117);
    CPNRegion::operator=((CPNRegion *)(this + 0x153),pCVar1);
    SendEventNotification(this,1);
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x14))(param_1);
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x14f) = 0;
      (**(code **)(*(int *)pCVar1 + 0x18))(local_14);
      iVar3 = ftol();
      iVar2 = iVar3 + 1;
      if (extraout_ST0 - (float10)iVar3 < (float10)_DAT_6062b710) {
        iVar2 = iVar3;
      }
      SetSliderPos(this,iVar2);
      SendEventNotification(this,2);
    }
    else {
      (**(code **)(*(int *)this + 0x84))();
      *(undefined4 *)(this + 0x17b) = 2;
      (**(code **)(*(int *)pCVar1 + 0x18))(local_14);
      (**(code **)(*(int *)this + 0x78))(local_14,1);
    }
  }
  return;
}


