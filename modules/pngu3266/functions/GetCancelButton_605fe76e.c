/* Module: pngu3266.dll
   Function: GetCancelButton
   Address: 605fe76e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNButton * __thiscall XPNPropertySheet::GetCancelButton(void) */

CPNButton * __thiscall XPNPropertySheet::GetCancelButton(XPNPropertySheet *this)

{
                    /* 0xe76e  1120  ?GetCancelButton@XPNPropertySheet@@QAEPAVCPNButton@@XZ */
  return *(CPNButton **)(this + 0xf4);
}


