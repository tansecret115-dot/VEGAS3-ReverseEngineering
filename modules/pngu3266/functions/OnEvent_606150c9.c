/* Module: pngu3266.dll
   Function: OnEvent
   Address: 606150c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNWizardPage::OnEvent(class CPNEvent &) */

int __thiscall XPNWizardPage::OnEvent(XPNWizardPage *this,CPNEvent *param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x250c9  1628  ?OnEvent@XPNWizardPage@@MAEHAAVCPNEvent@@@Z */
  iVar1 = 1;
  if (*(int *)(param_1 + 0xc) == 0xb1) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x14))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xdc))(param_1);
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0xb2) {
    OnDestroy(this);
  }
  else {
    iVar1 = XPNDialog::OnEvent((XPNDialog *)this,param_1);
  }
  return iVar1;
}


