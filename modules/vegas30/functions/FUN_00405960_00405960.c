/* Module: vegas30.exe
   Function: FUN_00405960
   Address: 00405960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405960(void)

{
  POINT Point;
  HWND pHVar1;
  MSG local_1c;
  
  GetCursorPos(&local_1c.pt);
  Point.y = local_1c.pt.y;
  Point.x = local_1c.pt.x;
  pHVar1 = WindowFromPoint(Point);
  if (pHVar1 != DAT_0064769c) {
    local_1c.message = 0x2a3;
    local_1c.hwnd = DAT_0064769c;
    local_1c.wParam = 0;
    local_1c.time = GetTickCount();
    local_1c.lParam = -1;
    DAT_0064769c = (HWND)0x0;
    DispatchMessageA(&local_1c);
  }
  return;
}


