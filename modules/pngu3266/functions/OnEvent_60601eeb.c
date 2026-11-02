/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60601eeb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNScrollingText::OnEvent(class CPNEvent &) */

int __thiscall CPNScrollingText::OnEvent(CPNScrollingText *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x11eeb  1612  ?OnEvent@CPNScrollingText@@UAEHAAVCPNEvent@@@Z */
  if ((*(int *)(param_1 + 8) == 0x10) && (*(int *)(param_1 + 0x24) == 0x113)) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      XPNScrollingText::OnScrollTimer((XPNScrollingText *)this);
    }
    iVar1 = 1;
  }
  else {
    iVar1 = XPNScrollingText::OnEvent((XPNScrollingText *)this,param_1);
  }
  return iVar1;
}


