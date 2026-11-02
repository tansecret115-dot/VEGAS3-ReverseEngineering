/* Module: pngu3266.dll
   Function: ComputeTickMarkRects
   Address: 6060f1ad
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::ComputeTickMarkRects(class CPNDC *) */

void __thiscall XPNSlider::ComputeTickMarkRects(XPNSlider *this,CPNDC *param_1)

{
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1f1ad  877  ?ComputeTickMarkRects@XPNSlider@@IAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_34);
  if (*(int *)(this + 0xf4) == 0) {
    local_24 = *(int *)(this + 0x13b);
    local_18 = *(int *)(this + 0x13f) + -1;
    local_10 = *(int *)(this + 0x147) + 1;
    local_20 = local_30;
    local_1c = *(int *)(this + 0x143);
    local_8 = local_28;
    local_14 = local_24;
    local_c = local_1c;
  }
  else {
    local_24 = local_34;
    local_20 = *(int *)(this + 0x13f);
    local_1c = *(int *)(this + 0x13b) + -1;
    local_18 = *(int *)(this + 0x147);
    local_14 = *(int *)(this + 0x143) + 1;
    local_c = local_2c;
    local_10 = local_20;
    local_8 = local_18;
  }
  (**(code **)(*(int *)this + 0x134))(param_1,&local_24,&local_14);
  return;
}


