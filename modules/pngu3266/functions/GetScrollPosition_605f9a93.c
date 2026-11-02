/* Module: pngu3266.dll
   Function: GetScrollPosition
   Address: 605f9a93
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNWindow::GetScrollPosition(long) */

long __thiscall CPNWindow::GetScrollPosition(CPNWindow *this,long param_1)

{
  int iVar1;
  
                    /* 0x9a93  1338  ?GetScrollPosition@CPNWindow@@QAEJJ@Z */
  iVar1 = GetScrollPos(*(HWND *)(this + 0xc),(uint)(param_1 == 1));
  return iVar1;
}


