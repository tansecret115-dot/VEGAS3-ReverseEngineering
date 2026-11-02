/* Module: vidcap30.exe
   Function: FUN_00404a20
   Address: 00404a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404a20(LPMSG param_1,UINT param_2)

{
  POINT Point;
  BOOL BVar1;
  DWORD DVar2;
  HWND pHVar3;
  MSG local_1c;
  
  while( true ) {
    if (DAT_005ba52c == (HWND)0x0) {
      return 0;
    }
    BVar1 = PeekMessageA(param_1,(HWND)0x0,0,0,param_2);
    if (BVar1 != 0) break;
    DVar2 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,500,0xff);
    if (DVar2 != 0x102) {
      return 0;
    }
    GetCursorPos(&local_1c.pt);
    Point.y = local_1c.pt.y;
    Point.x = local_1c.pt.x;
    pHVar3 = WindowFromPoint(Point);
    if (pHVar3 != DAT_005ba52c) {
      local_1c.message = 0x2a3;
      local_1c.hwnd = DAT_005ba52c;
      local_1c.wParam = 0;
      local_1c.time = GetTickCount();
      local_1c.lParam = -1;
      DAT_005ba52c = (HWND)0x0;
      DispatchMessageA(&local_1c);
    }
  }
  return 1;
}


