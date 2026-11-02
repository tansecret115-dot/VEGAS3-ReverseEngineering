/* Module: pngu3266.dll
   Function: OnEvent
   Address: 605feb39
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertyPage::OnEvent(class CPNEvent &) */

int __thiscall CPNPropertyPage::OnEvent(CPNPropertyPage *this,CPNEvent *param_1)

{
  int iVar1;
  CPNPropertyPage *local_c;
  CPNPropertyPage *local_8;
  
                    /* 0xeb39  1609  ?OnEvent@CPNPropertyPage@@UAEHAAVCPNEvent@@@Z */
  local_c = this;
  local_8 = this;
  if (((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0xc) == 0xac)) &&
     (*(int *)(this + 0xe4) != 0)) {
    (**(code **)(*(int *)this + 0x38))(&local_c);
    if ((local_c != *(CPNPropertyPage **)(this + 0xfc)) ||
       (local_8 != *(CPNPropertyPage **)(this + 0x100))) {
      (**(code **)(*(int *)this + 0x34))(this + 0xfc);
    }
    CPNPropertySheet::CheckTabControlSize(*(CPNPropertySheet **)(this + 0xe4),this);
  }
  iVar1 = XPNDialog::OnEvent((XPNDialog *)this,param_1);
  return iVar1;
}


