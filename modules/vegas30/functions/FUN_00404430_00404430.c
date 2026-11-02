/* Module: vegas30.exe
   Function: FUN_00404430
   Address: 00404430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404430(undefined4 param_1,int param_2,HWND param_3)

{
  POINT Point;
  POINT Point_00;
  DWORD DVar1;
  HWND pHVar2;
  LONG LVar3;
  LONG LVar4;
  int iVar5;
  BOOL BVar6;
  DWORD dwMilliseconds;
  code *pcVar7;
  MSG local_38;
  tagMSG local_1c;
  
  if ((param_2 == 0) &&
     (DVar1 = GetWindowThreadProcessId(param_3,(LPDWORD)0x0), DAT_00647208 != DVar1)) {
    return 0;
  }
  pcVar7 = DispatchMessageA_exref;
  if (DAT_0064769c != (HWND)0x0) {
    GetCursorPos(&local_38.pt);
    Point.y = local_38.pt.y;
    Point.x = local_38.pt.x;
    pHVar2 = WindowFromPoint(Point);
    pcVar7 = DispatchMessageA_exref;
    if (pHVar2 != DAT_0064769c) {
      local_38.hwnd = DAT_0064769c;
      local_38.message = 0x2a3;
      local_38.wParam = 0;
      local_38.time = GetTickCount();
      pcVar7 = DispatchMessageA_exref;
      local_38.lParam = -1;
      DAT_0064769c = (HWND)0x0;
      DispatchMessageA(&local_38);
    }
  }
  if (DAT_00647678 != 0 || DAT_0064767c != 0) {
    LVar3 = InterlockedExchange(&DAT_0064767c,0);
    LVar4 = InterlockedExchange(&DAT_00647678,0);
    FUN_0040d540(DAT_0064762c,LVar3,LVar4,0);
    pcVar7 = DispatchMessageA_exref;
  }
  do {
    if (DAT_0064768c == (code *)0x0) {
      return 0;
    }
    iVar5 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    while (iVar5 == 0) {
      DVar1 = GetTickCount();
      if (DVar1 < DAT_00647694) {
        dwMilliseconds = DAT_00647694 - DVar1;
        if ((int)DAT_00647698 < (int)(DAT_00647694 - DVar1)) {
          dwMilliseconds = DAT_00647698;
        }
        if ((int)dwMilliseconds < 2) goto LAB_00404553;
        DVar1 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,dwMilliseconds,0xff);
        if (DVar1 == 0x102) {
          DVar1 = GetTickCount();
          DAT_00647694 = DVar1 + DAT_00647698;
          if (DAT_0064768c != (code *)0x0) {
            (*DAT_0064768c)(DAT_00647690);
          }
          if (DAT_0064769c != (HWND)0x0) {
            GetCursorPos(&local_38.pt);
            Point_00.y = local_38.pt.y;
            Point_00.x = local_38.pt.x;
            pHVar2 = WindowFromPoint(Point_00);
            if (pHVar2 != DAT_0064769c) {
              local_38.message = 0x2a3;
              local_38.hwnd = DAT_0064769c;
              local_38.wParam = 0;
              local_38.time = GetTickCount();
              local_38.lParam = -1;
              DAT_0064769c = (HWND)0x0;
              (*pcVar7)(&local_38);
            }
          }
        }
      }
      else {
LAB_00404553:
        DAT_00647694 = DAT_00647698 + DVar1;
        if (DAT_0064768c != (code *)0x0) {
          (*DAT_0064768c)(DAT_00647690);
        }
      }
      iVar5 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    }
    if ((local_1c.message != 0x113) && (local_1c.message != 0x118)) {
      return 0;
    }
    BVar6 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    if (BVar6 != 0) {
      (*pcVar7)(&local_1c);
    }
  } while( true );
}


