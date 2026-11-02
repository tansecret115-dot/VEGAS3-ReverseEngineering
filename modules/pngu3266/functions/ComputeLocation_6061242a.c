/* Module: pngu3266.dll
   Function: ComputeLocation
   Address: 6061242a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNToolTip::ComputeLocation(class CPNxSize &,class CPNxPoint
   &,class CPNxPoint &,class CPNxRect &) */

void __thiscall
XPNToolTip::ComputeLocation
          (XPNToolTip *this,CPNxSize *param_1,CPNxPoint *param_2,CPNxPoint *param_3,
          CPNxRect *param_4)

{
  int iVar1;
  XPNToolTip *local_c;
  XPNToolTip *local_8;
  
                    /* 0x2242a  875
                       ?ComputeLocation@XPNToolTip@@MAEXAAVCPNxSize@@AAVCPNxPoint@@1AAVCPNxRect@@@Z
                        */
  local_c = this;
  local_8 = this;
  CPNSystemInfo::GetScreenSize((CPNxSize *)&local_c);
  iVar1 = (**(code **)(*(int *)this + 0x120))();
  if (iVar1 + *(int *)(param_2 + 4) + *(int *)(param_1 + 4) < (int)local_8) {
    iVar1 = iVar1 + *(int *)(param_2 + 4);
  }
  else {
    iVar1 = (*(int *)(param_4 + 4) - *(int *)(param_1 + 4)) + -1;
  }
  *(int *)(param_3 + 4) = iVar1;
  if ((int)local_c < *(int *)param_1 + *(int *)param_2) {
    *(int *)param_3 = (int)local_c - *(int *)param_1;
  }
  else {
    *(int *)param_3 = *(int *)param_2;
  }
  return;
}


