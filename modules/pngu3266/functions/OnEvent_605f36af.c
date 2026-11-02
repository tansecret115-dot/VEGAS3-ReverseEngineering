/* Module: pngu3266.dll
   Function: OnEvent
   Address: 605f36af
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNButton::OnEvent(class CPNEvent &) */

int __thiscall CPNButton::OnEvent(CPNButton *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x36af  1601  ?OnEvent@CPNButton@@UAEHAAVCPNEvent@@@Z */
  if ((*(int *)(this + 0xbc) == 0) || (*(int *)(param_1 + 0x24) != 0x2b)) {
    iVar1 = XPNButton::OnEvent((XPNButton *)this,param_1);
  }
  else {
    OnDrawItem(this,param_1);
    iVar1 = 1;
  }
  return iVar1;
}


