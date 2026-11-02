/* Module: pngu3266.dll
   Function: TermStdButtons
   Address: 605ffda6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNPropertySheet::TermStdButtons(void) */

void __thiscall CPNPropertySheet::TermStdButtons(CPNPropertySheet *this)

{
                    /* 0xfda6  2086  ?TermStdButtons@CPNPropertySheet@@IAEXXZ */
  if (*(CPNWindow **)(this + 0xf0) != (CPNWindow *)0x0) {
    CPNWindow::UnsubclassWnd(*(CPNWindow **)(this + 0xf0));
  }
  if (*(CPNWindow **)(this + 0xfc) != (CPNWindow *)0x0) {
    CPNWindow::UnsubclassWnd(*(CPNWindow **)(this + 0xfc));
  }
  if (*(CPNWindow **)(this + 0xf4) != (CPNWindow *)0x0) {
    CPNWindow::UnsubclassWnd(*(CPNWindow **)(this + 0xf4));
  }
  return;
}


