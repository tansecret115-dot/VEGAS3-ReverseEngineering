/* Module: vidcap30.exe
   Function: _SfMonitor_IsPointOnScreen@4
   Address: 00481920
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL _SfMonitor_IsPointOnScreen_4(POINT *param_1)

{
  int iVar1;
  BOOL BVar2;
  HDC hdc;
  undefined4 local_28 [5];
  RECT local_14;
  
                    /* 0x81920  558  _SfMonitor_IsPointOnScreen@4 */
  iVar1 = _SfMonitor_MonitorFromPoint_12(param_1->x,param_1->y,0);
  if (iVar1 == 0) {
    return 0;
  }
  local_28[0] = 0x28;
  iVar1 = _SfMonitor_GetMonitorInfo_8(iVar1,local_28);
  if (iVar1 != 0) {
    BVar2 = PtInRect(&local_14,*param_1);
    return BVar2;
  }
  hdc = GetDC((HWND)0x0);
  BVar2 = PtVisible(hdc,param_1->x,param_1->y);
  ReleaseDC((HWND)0x0,hdc);
  return BVar2;
}


