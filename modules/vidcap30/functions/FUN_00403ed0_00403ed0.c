/* Module: vidcap30.exe
   Function: FUN_00403ed0
   Address: 00403ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403ed0(undefined4 param_1,int param_2,HWND param_3)

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
     (DVar1 = GetWindowThreadProcessId(param_3,(LPDWORD)0x0), DAT_005ba2a4 != DVar1)) {
    return 0;
  }
  pcVar7 = DispatchMessageA_exref;
  if (DAT_005ba52c != (HWND)0x0) {
    GetCursorPos(&local_38.pt);
    Point.y = local_38.pt.y;
    Point.x = local_38.pt.x;
    pHVar2 = WindowFromPoint(Point);
    pcVar7 = DispatchMessageA_exref;
    if (pHVar2 != DAT_005ba52c) {
      local_38.hwnd = DAT_005ba52c;
      local_38.message = 0x2a3;
      local_38.wParam = 0;
      local_38.time = GetTickCount();
      pcVar7 = DispatchMessageA_exref;
      local_38.lParam = -1;
      DAT_005ba52c = (HWND)0x0;
      DispatchMessageA(&local_38);
    }
  }
  if (DAT_005ba508 != 0 || DAT_005ba50c != 0) {
    LVar3 = InterlockedExchange(&DAT_005ba50c,0);
    LVar4 = InterlockedExchange(&DAT_005ba508,0);
    FUN_004060b0(DAT_005ba4c0,LVar3,LVar4,0);
    pcVar7 = DispatchMessageA_exref;
  }
  do {
    if (DAT_005ba51c == (code *)0x0) {
      return 0;
    }
    iVar5 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    while (iVar5 == 0) {
      DVar1 = GetTickCount();
      if (DVar1 < DAT_005ba524) {
        dwMilliseconds = DAT_005ba524 - DVar1;
        if ((int)DAT_005ba528 < (int)(DAT_005ba524 - DVar1)) {
          dwMilliseconds = DAT_005ba528;
        }
        if ((int)dwMilliseconds < 2) goto LAB_00403ff3;
        DVar1 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,dwMilliseconds,0xff);
        if (DVar1 == 0x102) {
          DVar1 = GetTickCount();
          DAT_005ba524 = DVar1 + DAT_005ba528;
          if (DAT_005ba51c != (code *)0x0) {
            (*DAT_005ba51c)(DAT_005ba520);
          }
          if (DAT_005ba52c != (HWND)0x0) {
            GetCursorPos(&local_38.pt);
            Point_00.y = local_38.pt.y;
            Point_00.x = local_38.pt.x;
            pHVar2 = WindowFromPoint(Point_00);
            if (pHVar2 != DAT_005ba52c) {
              local_38.message = 0x2a3;
              local_38.hwnd = DAT_005ba52c;
              local_38.wParam = 0;
              local_38.time = GetTickCount();
              local_38.lParam = -1;
              DAT_005ba52c = (HWND)0x0;
              (*pcVar7)(&local_38);
            }
          }
        }
      }
      else {
LAB_00403ff3:
        DAT_005ba524 = DAT_005ba528 + DVar1;
        if (DAT_005ba51c != (code *)0x0) {
          (*DAT_005ba51c)(DAT_005ba520);
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


