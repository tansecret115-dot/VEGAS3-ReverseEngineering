/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060cd54
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNButton::OnEvent(class CPNEvent &) */

int __thiscall XPNButton::OnEvent(XPNButton *this,CPNEvent *param_1)

{
                    /* 0x1cd54  1616  ?OnEvent@XPNButton@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0xc) == 0x68) {
    if (*(int *)(this + 0xc4) == 0) {
      return 0;
    }
    *(undefined4 *)(this + 0xc0) = 1;
  }
  else {
    if ((*(int *)(param_1 + 0xc) != 0x69) || (*(int *)(this + 0xc4) == 0)) {
      return 0;
    }
    *(undefined4 *)(this + 0xc0) = 0;
  }
  if (*(int *)(this + 200) == 0) {
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return 1;
}


