/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60614c38
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNWizardManager::OnEvent(class CPNEvent &) */

int __thiscall XPNWizardManager::OnEvent(XPNWizardManager *this,CPNEvent *param_1)

{
  int iVar1;
  CPNPaintDC local_228 [548];
  
                    /* 0x24c38  1627  ?OnEvent@XPNWizardManager@@MAEHAAVCPNEvent@@@Z */
  iVar1 = 1;
  if (*(int *)(param_1 + 0xc) == 0xb0) {
    CPNPaintDC::CPNPaintDC(local_228,(CPNWindow *)this);
    OnPaint(this,(CPNDC *)local_228);
    CPNPaintDC::~CPNPaintDC(local_228);
  }
  else if (*(int *)(param_1 + 0xc) != 0xb1) {
    iVar1 = XPNDialog::OnEvent((XPNDialog *)this,param_1);
  }
  return iVar1;
}


