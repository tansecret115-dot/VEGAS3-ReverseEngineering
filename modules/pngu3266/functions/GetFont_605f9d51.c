/* Module: pngu3266.dll
   Function: GetFont
   Address: 605f9d51
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNFont * __thiscall CPNWindow::GetFont(void)const  */

CPNFont * __thiscall CPNWindow::GetFont(CPNWindow *this)

{
                    /* 0x9d51  1195  ?GetFont@CPNWindow@@UBEPAVCPNFont@@XZ */
  return *(CPNFont **)(this + 0x3c);
}


