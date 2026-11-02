/* Module: pngu3266.dll
   Function: GetRestoreDefaultsButton
   Address: 605fe77c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNButton * __thiscall XPNPropertySheet::GetRestoreDefaultsButton(void) */

CPNButton * __thiscall XPNPropertySheet::GetRestoreDefaultsButton(XPNPropertySheet *this)

{
                    /* 0xe77c  1317  ?GetRestoreDefaultsButton@XPNPropertySheet@@QAEPAVCPNButton@@XZ
                        */
  return *(CPNButton **)(this + 0xf8);
}


