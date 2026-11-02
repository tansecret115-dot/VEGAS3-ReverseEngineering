/* Module: pngu3266.dll
   Function: OnEvent
   Address: 606019a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNColorSelection::OnEvent(class CPNEvent &) */

int __thiscall CPNColorSelection::OnEvent(CPNColorSelection *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x119a5  1603  ?OnEvent@CPNColorSelection@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 8) == 0x10) {
    if (*(int *)(param_1 + 0x24) == 0x2b) {
      OnDrawItem(this,*(tagDRAWITEMSTRUCT **)(param_1 + 0x20));
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0x2c) goto LAB_606019ba;
      OnMeasureItem(this,*(tagMEASUREITEMSTRUCT **)(param_1 + 0x20));
    }
    iVar1 = 1;
  }
  else {
LAB_606019ba:
    iVar1 = XPNMenuButton::OnEvent((XPNMenuButton *)this,param_1);
  }
  return iVar1;
}


