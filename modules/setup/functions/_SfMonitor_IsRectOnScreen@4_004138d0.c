/* Module: Setup.exe
   Function: _SfMonitor_IsRectOnScreen@4
   Address: 004138d0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL _SfMonitor_IsRectOnScreen_4(RECT *param_1)

{
  HDC hdc;
  BOOL BVar1;
  
                    /* 0x138d0  288  _SfMonitor_IsRectOnScreen@4 */
  hdc = GetDC((HWND)0x0);
  BVar1 = RectVisible(hdc,param_1);
  ReleaseDC((HWND)0x0,hdc);
  return BVar1;
}


