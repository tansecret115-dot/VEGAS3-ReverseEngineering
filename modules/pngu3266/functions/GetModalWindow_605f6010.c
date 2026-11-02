/* Module: pngu3266.dll
   Function: GetModalWindow
   Address: 605f6010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNWindow * __thiscall CPNDialog::GetModalWindow(void) */

CPNWindow * __thiscall CPNDialog::GetModalWindow(CPNDialog *this)

{
                    /* 0x6010  1268  ?GetModalWindow@CPNDialog@@UAEPAVCPNWindow@@XZ
                       0x6010  1269  ?GetModalWindow@CPNFrame@@UAEPAVCPNWindow@@XZ */
  return *(CPNWindow **)(this + 0xbc);
}


