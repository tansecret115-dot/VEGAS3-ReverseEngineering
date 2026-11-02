/* Module: pngu3266.dll
   Function: ShowModeless
   Address: 605ffa2e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPropertySheet::ShowModeless(void) */

void __thiscall CPNPropertySheet::ShowModeless(CPNPropertySheet *this)

{
                    /* 0xfa2e  2065  ?ShowModeless@CPNPropertySheet@@UAEXXZ */
  if (*(HWND *)(this + 0xc) != (HWND)0x0) {
    ShowWindow(*(HWND *)(this + 0xc),5);
  }
  return;
}


