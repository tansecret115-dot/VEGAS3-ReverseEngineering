/* Module: pngu3266.dll
   Function: SetPropertySheet
   Address: 605fe4de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNPropertyPage::SetPropertySheet(class CPNPropertySheet *) */

void __thiscall XPNPropertyPage::SetPropertySheet(XPNPropertyPage *this,CPNPropertySheet *param_1)

{
                    /* 0xe4de  1970  ?SetPropertySheet@XPNPropertyPage@@QAEXPAVCPNPropertySheet@@@Z
                        */
  *(CPNPropertySheet **)(this + 0xe4) = param_1;
  return;
}


