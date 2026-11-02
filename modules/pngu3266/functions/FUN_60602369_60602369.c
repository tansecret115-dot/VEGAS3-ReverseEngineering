/* Module: pngu3266.dll
   Function: FUN_60602369
   Address: 60602369
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60602369(XPNTimer *param_1)

{
  HWND__ *hWnd;
  CPNWindow *this;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  hWnd = CPNWindow::GetHWND(*(CPNWindow **)(param_1 + 0x28));
  if (hWnd == (HWND__ *)0x0) {
    this = (CPNWindow *)(**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
    hWnd = CPNWindow::GetHWND(this);
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x3c))(&local_1c);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x5c))(&local_1c);
  if ((((local_c.x < local_1c) || (local_14 < local_c.x)) || (local_c.y < local_18)) ||
     (local_10 < local_c.y)) {
    PostMessageA(hWnd,0x530,0,*(LPARAM *)(param_1 + 0x28));
    XPNTimer::SetPending(param_1,0);
  }
  return;
}


