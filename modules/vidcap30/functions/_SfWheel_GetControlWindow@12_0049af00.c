/* Module: vidcap30.exe
   Function: _SfWheel_GetControlWindow@12
   Address: 0049af00
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND _SfWheel_GetControlWindow_12(uint param_1,undefined4 param_2,int *param_3)

{
  POINT Point;
  HWND hWnd;
  int iVar1;
  
                    /* 0x9af00  679  _SfWheel_GetControlWindow@12 */
  if ((param_1 & 0x2000) != 0) {
    Point.y = (int)(short)((uint)param_2 >> 0x10);
    Point.x = (int)(short)param_2;
    hWnd = WindowFromPoint(Point);
    if ((hWnd != (HWND)0x0) && (param_3 != (int *)0x0)) {
      iVar1 = GetDlgCtrlID(hWnd);
      *param_3 = iVar1;
    }
    return hWnd;
  }
  return (HWND)0x0;
}


