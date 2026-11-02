/* Module: rmme3260.dll
   Function: FUN_6623a870
   Address: 6623a870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6623a870(LONG *param_1,undefined4 *param_2)

{
  POINT Point;
  HWND hWnd;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  Point.y = local_c.y;
  Point.x = local_c.x;
  hWnd = WindowFromPoint(Point);
  if (hWnd != (HWND)0x0) {
    ScreenToClient(hWnd,&local_c);
    *param_1 = local_c.x;
    param_1[1] = local_c.y;
    *param_2 = hWnd;
  }
  return;
}


