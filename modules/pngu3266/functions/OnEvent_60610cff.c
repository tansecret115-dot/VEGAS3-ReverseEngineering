/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60610cff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNMenuButton::OnEvent(class CPNEvent &) */

int __thiscall XPNMenuButton::OnEvent(XPNMenuButton *this,CPNEvent *param_1)

{
  int iVar1;
  int iVar2;
  CPNPaintDC local_230 [548];
  int local_c;
  int local_8;
  
                    /* 0x20cff  1620  ?OnEvent@XPNMenuButton@@UAEHAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    if (iVar2 == 0x65) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      (**(code **)(*(int *)this + 0x138))(&local_c,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else if (iVar1 == 2) {
    if (iVar2 == 0xb0) {
      CPNPaintDC::CPNPaintDC(local_230,(CPNWindow *)this);
      (**(code **)(*(int *)this + 0x134))(local_230);
      CPNPaintDC::~CPNPaintDC(local_230);
    }
    else if ((iVar2 == 0xb8) || (iVar2 == 0xb9)) {
      (**(code **)(*(int *)this + 0x78))(0,1);
    }
  }
  else if ((iVar1 == 4) && (iVar2 == 0x83)) {
    OnKeyUp(this,*(ulong *)(param_1 + 0x1c));
  }
  return 0;
}


