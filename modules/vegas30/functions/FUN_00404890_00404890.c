/* Module: vegas30.exe
   Function: FUN_00404890
   Address: 00404890
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00404890(HWND param_1,HMENU param_2,int *param_3,undefined4 param_4,LPSTR param_5,
                 WPARAM param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  POINT Point;
  POINT Point_00;
  int iVar4;
  HWND hWnd;
  WPARAM wParam;
  BOOL BVar5;
  DWORD DVar6;
  HWND pHVar7;
  HCURSOR hCursor;
  DWORD dwMilliseconds;
  int iVar8;
  short sVar9;
  tagMSG *ptVar10;
  MSG *pMVar11;
  LPARAM lParam;
  int local_78;
  tagMSG local_70;
  MSG MStack_54;
  MSG local_38;
  MSG local_1c;
  
  iVar8 = *param_3;
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = _SfGetUIFontSize_4(param_4);
  iVar4 = *(int *)(iVar4 + 4) + 4;
  hWnd = CreateWindowExA(4,"Edit",param_5,param_7 | 0x40800080,iVar8,((iVar3 - iVar4) + iVar1) / 2,
                         iVar2 - iVar8,iVar4,param_1,param_2,DAT_006471fc,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0x8007000e;
  }
  lParam = 0;
  wParam = _SfGetUIFont_4(param_4);
  SendMessageA(hWnd,0x30,wParam,lParam);
  SendMessageA(hWnd,0xb1,0,param_6 + 2);
  SendMessageA(hWnd,0xc5,param_6,0);
  ShowWindow(hWnd,1);
  SetFocus(hWnd);
  do {
    BVar5 = PeekMessageA(&local_70,(HWND)0x0,0,0,0);
    if (BVar5 == 0) {
      if (DAT_0064768c == (code *)0x0) {
        if (DAT_0064769c == (HWND)0x0) {
          WaitMessage();
        }
        else {
          do {
            BVar5 = PeekMessageA(&local_70,(HWND)0x0,0,0,0);
            if (BVar5 != 0) goto LAB_00404b2b;
            DVar6 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,500,0xff);
            if (DVar6 != 0x102) break;
            GetCursorPos(&local_38.pt);
            Point_00.y = local_38.pt.y;
            Point_00.x = local_38.pt.x;
            pHVar7 = WindowFromPoint(Point_00);
            if (pHVar7 != DAT_0064769c) {
              local_38.message = 0x2a3;
              local_38.hwnd = DAT_0064769c;
              local_38.wParam = 0;
              local_38.time = GetTickCount();
              local_38.lParam = -1;
              DAT_0064769c = (HWND)0x0;
              DispatchMessageA(&local_38);
            }
          } while (DAT_0064769c != (HWND)0x0);
        }
      }
      else {
        DVar6 = GetTickCount();
        if (DVar6 < DAT_00647694) {
          dwMilliseconds = DAT_00647694 - DVar6;
          if ((int)DAT_00647698 < (int)(DAT_00647694 - DVar6)) {
            dwMilliseconds = DAT_00647698;
          }
          if (1 < (int)dwMilliseconds) {
            DVar6 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,dwMilliseconds,0xff);
            if (DVar6 == 0x102) {
              DVar6 = GetTickCount();
              DAT_00647694 = DVar6 + DAT_00647698;
              if (DAT_0064768c != (code *)0x0) {
                (*DAT_0064768c)(DAT_00647690);
              }
              if (DAT_0064769c != (HWND)0x0) {
                GetCursorPos(&MStack_54.pt);
                Point.y = MStack_54.pt.y;
                Point.x = MStack_54.pt.x;
                pHVar7 = WindowFromPoint(Point);
                if (pHVar7 != DAT_0064769c) {
                  MStack_54.message = 0x2a3;
                  MStack_54.hwnd = DAT_0064769c;
                  MStack_54.wParam = 0;
                  MStack_54.time = GetTickCount();
                  MStack_54.lParam = -1;
                  DAT_0064769c = (HWND)0x0;
                  DispatchMessageA(&MStack_54);
                }
              }
            }
            goto LAB_00404d1c;
          }
        }
        DAT_00647694 = DAT_00647698 + DVar6;
        if (DAT_0064768c != (code *)0x0) {
          (*DAT_0064768c)(DAT_00647690);
        }
      }
    }
    else {
LAB_00404b2b:
      if (((local_70.hwnd != hWnd) &&
          ((((local_70.message == 0x201 || (local_70.message == 0x204)) ||
            (local_70.message == 0xa1)) || (local_70.message == 0xa4)))) ||
         (((local_70.message == 0x20a || (local_70.message == 0x207)) || (local_70.message == 0x12))
         )) break;
      if (local_70.message == 0x104) {
        if (local_70.wParam != 8) break;
      }
      else if (local_70.message == 0x1f) break;
      GetMessageA(&local_70,(HWND)0x0,0,0);
      pHVar7 = DAT_0064769c;
      sVar9 = (short)local_70.wParam;
      if ((local_70.hwnd == hWnd) && (local_70.message == 0x100)) {
        if ((sVar9 == 0xd) || (sVar9 == 9)) break;
        if (sVar9 == 0x1b) {
          local_78 = 2;
          goto LAB_00404d4a;
        }
      }
      if (((DAT_0064769c != (HWND)0x0) &&
          (((0x1ff < local_70.message && (local_70.message < 0x20b)) ||
           ((0x9f < local_70.message && (local_70.message < 0xaa)))))) &&
         (local_70.hwnd != DAT_0064769c)) {
        DAT_0064769c = (HWND)0x0;
        ptVar10 = &local_70;
        pMVar11 = &local_1c;
        for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
          pMVar11->hwnd = ptVar10->hwnd;
          ptVar10 = (tagMSG *)&ptVar10->message;
          pMVar11 = (MSG *)&pMVar11->message;
        }
        local_1c.hwnd = pHVar7;
        local_1c.message = 0x2a3;
        local_1c.lParam = -1;
        DispatchMessageA(&local_1c);
        sVar9 = (short)local_70.wParam;
      }
      if ((*(int *)(DAT_0064762c + 0xb4) == 0) && (DAT_00647644 != 0)) {
        iVar8 = FUN_00548c90(DAT_00647624,DAT_00647644,&local_70);
        if (iVar8 != 0) goto LAB_00404d1c;
        sVar9 = (short)local_70.wParam;
      }
      if (local_70.message != 0x4d) {
        if ((local_70.message == 0x100) && (sVar9 == 0x1b)) {
          FUN_0040c6d0(&local_70);
          sVar9 = (short)local_70.wParam;
        }
        if ((sVar9 == 0x25) || (sVar9 == 0x27)) {
          if (local_70.message == 0x104) {
            local_70.message = 0x100;
          }
          else if (local_70.message == 0x105) {
            local_70.message = 0x101;
          }
        }
        if (((DAT_00647634 == (HWND)0x0) || (local_70.hwnd == DAT_00647638)) ||
           (BVar5 = IsDialogMessageA(DAT_00647634,&local_70), BVar5 == 0)) {
          TranslateMessage(&local_70);
          DispatchMessageA(&local_70);
        }
      }
    }
LAB_00404d1c:
    pHVar7 = GetFocus();
  } while (pHVar7 == hWnd);
  local_78 = 1;
  GetWindowTextA(hWnd,param_5,param_6);
LAB_00404d4a:
  DestroyWindow(hWnd);
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
  SetCursor(hCursor);
  return (uint)(local_78 != 1);
}


