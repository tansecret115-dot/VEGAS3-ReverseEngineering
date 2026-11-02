/* Module: vegas30k.dll
   Function: _SfMonitor_IsRectOnScreen@4
   Address: 010fea70
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL _SfMonitor_IsRectOnScreen_4(RECT *param_1)

{
  HDC hdc;
  BOOL BVar1;
  
                    /* 0xfea70  1132  _SfMonitor_IsRectOnScreen@4 */
  hdc = GetDC((HWND)0x0);
  BVar1 = RectVisible(hdc,param_1);
  ReleaseDC((HWND)0x0,hdc);
  return BVar1;
}


