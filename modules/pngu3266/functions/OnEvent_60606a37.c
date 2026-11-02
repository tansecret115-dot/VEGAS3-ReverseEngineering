/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60606a37
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNAnimButton::OnEvent(class CPNEvent &) */

int __thiscall CPNAnimButton::OnEvent(CPNAnimButton *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x16a37  1600  ?OnEvent@CPNAnimButton@@UAEHAAVCPNEvent@@@Z
                       0x16a37  1606  ?OnEvent@CPNImageButton@@UAEHAAVCPNEvent@@@Z */
  iVar1 = 0;
  if ((*(int *)(param_1 + 8) == 0x10) && (*(int *)(param_1 + 0x24) == 0x14)) {
    iVar1 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = CPNButton::OnEvent((CPNButton *)this,param_1);
  }
  return iVar1;
}


