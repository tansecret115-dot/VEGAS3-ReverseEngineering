/* Module: pngu3266.dll
   Function: SetBackgroundColor
   Address: 605fe218
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetBackgroundColor(class CPNColor const &) */

void __thiscall CPNEdit::SetBackgroundColor(CPNEdit *this,CPNColor *param_1)

{
  HBRUSH pHVar1;
  
                    /* 0xe218  1824  ?SetBackgroundColor@CPNEdit@@UAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xc0),param_1);
  if (*(HGDIOBJ *)(this + 0xfe) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 0xfe));
    *(undefined4 *)(this + 0xfe) = 0;
  }
  pHVar1 = CreateSolidBrush(*(COLORREF *)(param_1 + 8));
  *(HBRUSH *)(this + 0xfe) = pHVar1;
  return;
}


