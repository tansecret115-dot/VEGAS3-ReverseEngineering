/* Module: pngu3266.dll
   Function: GetOkButton
   Address: 605fe775
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNButton * __thiscall XPNPropertySheet::GetOkButton(void) */

CPNButton * __thiscall XPNPropertySheet::GetOkButton(XPNPropertySheet *this)

{
                    /* 0xe775  1284  ?GetOkButton@XPNPropertySheet@@QAEPAVCPNButton@@XZ */
  return *(CPNButton **)(this + 0xf0);
}


