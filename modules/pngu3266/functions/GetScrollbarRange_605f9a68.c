/* Module: pngu3266.dll
   Function: GetScrollbarRange
   Address: 605f9a68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNWindow::GetScrollbarRange(long &,long &,long) */

int __thiscall
CPNWindow::GetScrollbarRange(CPNWindow *this,long *param_1,long *param_2,long param_3)

{
  HWND hWnd;
  
                    /* 0x9a68  1343  ?GetScrollbarRange@CPNWindow@@QAEHAAJ0J@Z */
  hWnd = *(HWND *)(this + 0xc);
  if (hWnd != (HWND)0x0) {
    GetScrollRange(hWnd,(uint)(param_3 == 1),param_1,param_2);
  }
  return (uint)(hWnd != (HWND)0x0);
}


