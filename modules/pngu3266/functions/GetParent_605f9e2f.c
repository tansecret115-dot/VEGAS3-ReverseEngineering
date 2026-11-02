/* Module: pngu3266.dll
   Function: GetParent
   Address: 605f9e2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNWindow * __thiscall CPNWindow::GetParent(void)const  */

CPNWindow * __thiscall CPNWindow::GetParent(CPNWindow *this)

{
                    /* 0x9e2f  1291  ?GetParent@CPNWindow@@UBEPAV1@XZ */
  return *(CPNWindow **)(this + 0x48);
}


