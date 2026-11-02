/* Module: pngu3266.dll
   Function: GetScrollPageSize
   Address: 605f9b12
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNWindow::GetScrollPageSize(long) */

ulong __thiscall CPNWindow::GetScrollPageSize(CPNWindow *this,long param_1)

{
  tagSCROLLINFO local_20;
  
                    /* 0x9b12  1336  ?GetScrollPageSize@CPNWindow@@QAEKJ@Z */
  memset(&local_20,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  GetScrollInfo(*(HWND *)(this + 0xc),(uint)(param_1 == 1),&local_20);
  return local_20.nPage;
}


