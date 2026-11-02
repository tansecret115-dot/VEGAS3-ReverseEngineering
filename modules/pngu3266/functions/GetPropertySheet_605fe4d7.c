/* Module: pngu3266.dll
   Function: GetPropertySheet
   Address: 605fe4d7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPropertySheet * __thiscall XPNPropertyPage::GetPropertySheet(void) */

CPNPropertySheet * __thiscall XPNPropertyPage::GetPropertySheet(XPNPropertyPage *this)

{
                    /* 0xe4d7  1306  ?GetPropertySheet@XPNPropertyPage@@QAEPAVCPNPropertySheet@@XZ
                        */
  return *(CPNPropertySheet **)(this + 0xe4);
}


