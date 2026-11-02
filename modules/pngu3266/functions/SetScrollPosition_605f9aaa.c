/* Module: pngu3266.dll
   Function: SetScrollPosition
   Address: 605f9aaa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::SetScrollPosition(long,long) */

void __thiscall CPNWindow::SetScrollPosition(CPNWindow *this,long param_1,long param_2)

{
                    /* 0x9aaa  1993  ?SetScrollPosition@CPNWindow@@QAEXJJ@Z */
  SetScrollPos(*(HWND *)(this + 0xc),(uint)(param_2 == 1),param_1,1);
  return;
}


