/* Module: vidcap30.exe
   Function: FUN_004049b0
   Address: 004049b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004049b0(void)

{
  POINT Point;
  HWND pHVar1;
  MSG local_1c;
  
  GetCursorPos(&local_1c.pt);
  Point.y = local_1c.pt.y;
  Point.x = local_1c.pt.x;
  pHVar1 = WindowFromPoint(Point);
  if (pHVar1 != DAT_005ba52c) {
    local_1c.message = 0x2a3;
    local_1c.hwnd = DAT_005ba52c;
    local_1c.wParam = 0;
    local_1c.time = GetTickCount();
    local_1c.lParam = -1;
    DAT_005ba52c = (HWND)0x0;
    DispatchMessageA(&local_1c);
  }
  return;
}


