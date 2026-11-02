/* Module: vegas30.exe
   Function: FUN_00403d90
   Address: 00403d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403d90(HWND param_1,uint param_2,int param_3,RECT *param_4,undefined4 *param_5,
                HWND param_6)

{
  POINT Point;
  POINT Point_00;
  POINT pt;
  BOOL BVar1;
  HWND pHVar2;
  DWORD DVar3;
  int iVar4;
  LRESULT LVar5;
  LONG LVar6;
  LONG LVar7;
  DWORD dwMilliseconds;
  tagMSG *ptVar8;
  MSG *pMVar9;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  int local_94;
  tagMSG local_90;
  MSG MStack_74;
  MSG local_58;
  MSG local_3c;
  CHAR local_20 [32];
  
  if (DAT_0064763c != (HWND)0x0) {
    return -1;
  }
  DAT_0064761c = (param_2 & 1) << 3 | DAT_0064761c & 0xfffffff7;
  DAT_0064763c = param_1;
  DAT_00647640 = -2;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
    FUN_00411f60(DAT_0064762c,0);
  }
  BVar1 = IsWindowVisible(param_1);
  if (BVar1 == 0) {
    ShowWindow(param_1,1);
  }
  pHVar2 = GetCapture();
  if (pHVar2 != (HWND)0x0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x1f;
    pHVar2 = GetCapture();
    SendMessageA(pHVar2,Msg,wParam,lParam);
    ReleaseCapture();
  }
  local_94 = 1;
LAB_00403e46:
  BVar1 = PeekMessageA(&local_90,(HWND)0x0,0,0,0);
  if (BVar1 == 0) {
    if (DAT_0064768c == (code *)0x0) {
      if (DAT_0064769c == (HWND)0x0) {
        WaitMessage();
      }
      else {
        do {
          BVar1 = PeekMessageA(&local_90,(HWND)0x0,0,0,0);
          if (BVar1 != 0) goto LAB_00403ff5;
          DVar3 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,500,0xff);
          if (DVar3 != 0x102) break;
          GetCursorPos(&local_58.pt);
          Point_00.y = local_58.pt.y;
          Point_00.x = local_58.pt.x;
          pHVar2 = WindowFromPoint(Point_00);
          if (pHVar2 != DAT_0064769c) {
            local_58.message = 0x2a3;
            local_58.hwnd = DAT_0064769c;
            local_58.wParam = 0;
            local_58.time = GetTickCount();
            local_58.lParam = -1;
            DAT_0064769c = (HWND)0x0;
            DispatchMessageA(&local_58);
          }
        } while (DAT_0064769c != (HWND)0x0);
      }
    }
    else {
      DVar3 = GetTickCount();
      if (DVar3 < DAT_00647694) {
        dwMilliseconds = DAT_00647694 - DVar3;
        if ((int)DAT_00647698 < (int)(DAT_00647694 - DVar3)) {
          dwMilliseconds = DAT_00647698;
        }
        if (1 < (int)dwMilliseconds) {
          DVar3 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,dwMilliseconds,0xff);
          if (DVar3 == 0x102) {
            DVar3 = GetTickCount();
            DAT_00647694 = DVar3 + DAT_00647698;
            if (DAT_0064768c != (code *)0x0) {
              (*DAT_0064768c)(DAT_00647690);
            }
            if (DAT_0064769c != (HWND)0x0) {
              GetCursorPos(&MStack_74.pt);
              Point.y = MStack_74.pt.y;
              Point.x = MStack_74.pt.x;
              pHVar2 = WindowFromPoint(Point);
              if (pHVar2 != DAT_0064769c) {
                MStack_74.message = 0x2a3;
                MStack_74.hwnd = DAT_0064769c;
                MStack_74.wParam = 0;
                MStack_74.time = GetTickCount();
                MStack_74.lParam = -1;
                DAT_0064769c = (HWND)0x0;
                DispatchMessageA(&MStack_74);
              }
            }
          }
          goto LAB_004041ca;
        }
      }
      DAT_00647694 = DAT_00647698 + DVar3;
      if (DAT_0064768c != (code *)0x0) {
        (*DAT_0064768c)(DAT_00647690);
      }
    }
    goto LAB_004041ca;
  }
LAB_00403ff5:
  if (param_2 == 0) {
LAB_004040ec:
    if (local_90.message != 0x12) {
LAB_004040f5:
      GetMessageA(&local_90,(HWND)0x0,0,0);
      pHVar2 = DAT_0064769c;
      if ((DAT_0064769c != (HWND)0x0) &&
         ((((0x1ff < local_90.message && (local_90.message < 0x20b)) ||
           ((0x9f < local_90.message && (local_90.message < 0xaa)))) &&
          (local_90.hwnd != DAT_0064769c)))) {
        DAT_0064769c = (HWND)0x0;
        ptVar8 = &local_90;
        pMVar9 = &local_3c;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          pMVar9->hwnd = ptVar8->hwnd;
          ptVar8 = (tagMSG *)&ptVar8->message;
          pMVar9 = (MSG *)&pMVar9->message;
        }
        local_3c.message = 0x2a3;
        local_3c.hwnd = pHVar2;
        local_3c.lParam = -1;
        DispatchMessageA(&local_3c);
      }
      if (local_90.hwnd != DAT_00647638) goto code_r0x00404177;
      goto LAB_004041b0;
    }
    goto LAB_00404289;
  }
  if (((local_90.hwnd != param_1) && (BVar1 = IsChild(param_1,local_90.hwnd), BVar1 == 0)) &&
     ((local_90.message == 0x201 ||
      (((local_90.message == 0x204 || (local_90.message == 0xa1)) || (local_90.message == 0xa4))))))
  {
    if ((param_4 == (RECT *)0x0) ||
       (pt.y = local_90.pt.y, pt.x = local_90.pt.x, BVar1 = PtInRect(param_4,pt), BVar1 == 0)) {
      GetClassNameA(local_90.hwnd,local_20,0x1e);
      iVar4 = lstrcmpiA(local_20,"ComboLBox");
      if (iVar4 == 0) goto LAB_004040c9;
      goto LAB_0040426c;
    }
    GetMessageA(&local_90,(HWND)0x0,0,0);
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 1;
    }
    SendMessageA(param_1,0x111,2,0);
    goto LAB_00403e46;
  }
LAB_004040c9:
  if (local_90.message == 0x104) {
    if (local_90.wParam == 8) goto LAB_004040f5;
  }
  else if (local_90.message != 0x1f) goto LAB_004040ec;
  goto LAB_0040426c;
code_r0x00404177:
  if (param_3 == 0) {
    iVar4 = IsDialogMessageA(param_1,&local_90);
  }
  else {
    iVar4 = SendMessageA(param_1,0x475,0,(LPARAM)&local_90);
  }
  if (iVar4 != 0) goto LAB_00403e46;
LAB_004041b0:
  TranslateMessage(&local_90);
  DispatchMessageA(&local_90);
LAB_004041ca:
  BVar1 = IsWindow(param_1);
  if (BVar1 == 0) goto LAB_00404289;
  BVar1 = IsWindowVisible(param_1);
  if ((BVar1 == 0) || ((param_3 != 0 && (LVar5 = SendMessageA(param_1,0x476,0,0), LVar5 == 0)))) {
    local_94 = GetWindowLongA(param_1,DAT_00647e70);
LAB_00404289:
    if ((local_94 != DAT_00647640) && (DAT_00647640 != -2)) {
      local_94 = DAT_00647640;
    }
LAB_0040429f:
    DAT_0064761c = DAT_0064761c & 0xfffffff7;
    DAT_0064763c = (HWND)0x0;
    if (param_2 == 0) {
      FUN_00411f60(DAT_0064762c,1);
    }
    BVar1 = IsWindow(param_1);
    if (BVar1 != 0) {
      DestroyWindow(param_1);
    }
    if ((param_6 != (HWND)0x0) && (BVar1 = IsWindow(param_6), BVar1 != 0)) {
      SetFocus(param_6);
    }
    return local_94;
  }
  if (param_2 == 0) goto LAB_00403e46;
  pHVar2 = GetFocus();
  if ((pHVar2 == param_1) || (BVar1 = IsChild(param_1,pHVar2), BVar1 != 0)) {
    if (DAT_00647678 != 0 || DAT_0064767c != 0) {
      LVar6 = InterlockedExchange(&DAT_0064767c,0);
      LVar7 = InterlockedExchange(&DAT_00647678,0);
      FUN_0040d540(DAT_0064762c,LVar6,LVar7,0);
    }
    goto LAB_00403e46;
  }
LAB_0040426c:
  DAT_00647640 = 1;
  goto LAB_0040429f;
}


