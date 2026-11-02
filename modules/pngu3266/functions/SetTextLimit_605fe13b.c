/* Module: pngu3266.dll
   Function: SetTextLimit
   Address: 605fe13b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetTextLimit(long) */

void __thiscall CPNEdit::SetTextLimit(CPNEdit *this,long param_1)

{
                    /* 0xe13b  2025  ?SetTextLimit@CPNEdit@@UAEXJ@Z */
  *(long *)(this + 0x102) = param_1;
  SendMessageA(*(HWND *)(this + 0xc),0xc5,param_1,0);
  return;
}


