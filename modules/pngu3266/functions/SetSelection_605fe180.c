/* Module: pngu3266.dll
   Function: SetSelection
   Address: 605fe180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetSelection(long,long) */

void __thiscall CPNEdit::SetSelection(CPNEdit *this,long param_1,long param_2)

{
                    /* 0xe180  1998  ?SetSelection@CPNEdit@@UAEXJJ@Z */
  SendMessageA(*(HWND *)(this + 0xc),0xb1,param_1,param_2);
  return;
}


