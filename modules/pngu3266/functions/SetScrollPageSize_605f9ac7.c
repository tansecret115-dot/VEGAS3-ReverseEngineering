/* Module: pngu3266.dll
   Function: SetScrollPageSize
   Address: 605f9ac7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::SetScrollPageSize(unsigned long,long) */

void __thiscall CPNWindow::SetScrollPageSize(CPNWindow *this,ulong param_1,long param_2)

{
  SCROLLINFO local_20;
  
                    /* 0x9ac7  1991  ?SetScrollPageSize@CPNWindow@@QAEXKJ@Z */
  memset(&local_20,0,0x1c);
  local_20.nPage = param_1;
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  SetScrollInfo(*(HWND *)(this + 0xc),(uint)(param_2 == 1),&local_20,1);
  return;
}


