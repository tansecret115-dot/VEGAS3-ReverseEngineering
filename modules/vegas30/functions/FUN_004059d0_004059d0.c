/* Module: vegas30.exe
   Function: FUN_004059d0
   Address: 004059d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004059d0(void)

{
  POINT Point;
  DWORD DVar1;
  HWND pHVar2;
  DWORD dwMilliseconds;
  DWORD DVar3;
  MSG MStack_1c;
  
  DVar1 = GetTickCount();
  DVar3 = 0x102;
  if (DVar1 < DAT_00647694) {
    dwMilliseconds = DAT_00647694 - DVar1;
    if ((int)DAT_00647698 < (int)(DAT_00647694 - DVar1)) {
      dwMilliseconds = DAT_00647698;
    }
    if (1 < (int)dwMilliseconds) {
      DVar3 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,dwMilliseconds,0xff);
      if (DVar3 == 0x102) {
        DVar1 = GetTickCount();
        DAT_00647694 = DVar1 + DAT_00647698;
        if (DAT_0064768c != (code *)0x0) {
          (*DAT_0064768c)(DAT_00647690);
        }
        if (DAT_0064769c != (HWND)0x0) {
          GetCursorPos(&MStack_1c.pt);
          Point.y = MStack_1c.pt.y;
          Point.x = MStack_1c.pt.x;
          pHVar2 = WindowFromPoint(Point);
          if (pHVar2 != DAT_0064769c) {
            MStack_1c.message = 0x2a3;
            MStack_1c.hwnd = DAT_0064769c;
            MStack_1c.wParam = 0;
            MStack_1c.time = GetTickCount();
            MStack_1c.lParam = -1;
            DAT_0064769c = (HWND)0x0;
            DispatchMessageA(&MStack_1c);
          }
        }
      }
      goto LAB_00405ad2;
    }
  }
  DAT_00647694 = DAT_00647698 + DVar1;
  if (DAT_0064768c != (code *)0x0) {
    (*DAT_0064768c)(DAT_00647690);
    return true;
  }
LAB_00405ad2:
  return DVar3 == 0x102;
}


