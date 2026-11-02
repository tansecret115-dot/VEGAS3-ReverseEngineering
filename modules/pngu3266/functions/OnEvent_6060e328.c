/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060e328
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNSlider::OnEvent(class CPNEvent &) */

int __thiscall XPNSlider::OnEvent(XPNSlider *this,CPNEvent *param_1)

{
  uint uVar1;
  CPNPaintDC local_230 [548];
  int local_c;
  int local_8;
  
                    /* 0x1e328  1623  ?OnEvent@XPNSlider@@MAEHAAVCPNEvent@@@Z */
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 8) == 0x10) && (*(int *)(param_1 + 0x24) == 0x87)) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    return 1;
  }
  if (uVar1 < 0x83) {
    if (uVar1 == 0x82) {
      OnKeyDown(this,*(ulong *)(param_1 + 0x1c));
      return 1;
    }
    if (uVar1 == 100) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      OnMouseMove(this,(CPNxPoint *)&local_c);
      return 1;
    }
    if (uVar1 == 0x65) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) != 0) {
        return 1;
      }
      OnLButtonDown(this,(CPNxPoint *)&local_c);
      return 1;
    }
    if (uVar1 == 0x66) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) != 0) {
        return 1;
      }
      OnLButtonUp(this,(CPNxPoint *)&local_c);
      return 1;
    }
  }
  else {
    if (uVar1 == 0x83) {
      OnKeyUp(this,*(ulong *)(param_1 + 0x1c));
      return 1;
    }
    if (uVar1 == 0xab) {
      (**(code **)(*(int *)this + 0x144))
                (*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x20) >> 0x10);
      return 1;
    }
    if (uVar1 == 0xb0) {
      CPNPaintDC::CPNPaintDC(local_230,(CPNWindow *)this);
      (**(code **)(*(int *)this + 0x148))(local_230);
      CPNPaintDC::~CPNPaintDC(local_230);
      return 1;
    }
    if ((0xb7 < uVar1) && (uVar1 < 0xba)) {
      (**(code **)(*(int *)this + 0x78))(0,1);
      return 1;
    }
  }
  return 0;
}


