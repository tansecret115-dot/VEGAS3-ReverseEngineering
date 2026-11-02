/* Module: vidcap30.exe
   Function: FUN_00403820
   Address: 00403820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403820(HWND param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5,HWND param_6
                )

{
  POINT Point;
  POINT Point_00;
  BOOL BVar1;
  HWND pHVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  LRESULT LVar6;
  LONG LVar7;
  LONG LVar8;
  tagMSG *ptVar9;
  MSG *pMVar10;
  code *pcVar11;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  int local_94;
  tagMSG local_90;
  MSG MStack_74;
  MSG local_58;
  MSG local_3c;
  CHAR local_20 [32];
  
  if (DAT_005ba4cc != (HWND)0x0) {
    return -1;
  }
  DAT_005ba4d0 = -2;
  DAT_005ba4b4 = (param_2 & 1) << 3 | DAT_005ba4b4 & 0xfffffff7;
  DAT_005ba4cc = param_1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
    FUN_00409600(DAT_005ba4c0,0);
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
  pcVar11 = GetTickCount_exref;
LAB_004038e3:
  BVar1 = PeekMessageA(&local_90,(HWND)0x0,0,0,0);
  if (BVar1 == 0) {
    if (DAT_005ba51c == (code *)0x0) {
      if (DAT_005ba52c == (HWND)0x0) {
        WaitMessage();
      }
      else {
        do {
          BVar1 = PeekMessageA(&local_90,(HWND)0x0,0,0,0);
          if (BVar1 != 0) goto LAB_00403a8a;
          DVar4 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,500,0xff);
          if (DVar4 != 0x102) break;
          GetCursorPos(&local_58.pt);
          Point_00.y = local_58.pt.y;
          Point_00.x = local_58.pt.x;
          pHVar2 = WindowFromPoint(Point_00);
          if (pHVar2 != DAT_005ba52c) {
            local_58.message = 0x2a3;
            local_58.hwnd = DAT_005ba52c;
            local_58.wParam = 0;
            local_58.time = (*pcVar11)();
            local_58.lParam = -1;
            DAT_005ba52c = (HWND)0x0;
            DispatchMessageA(&local_58);
          }
        } while (DAT_005ba52c != (HWND)0x0);
      }
    }
    else {
      uVar3 = (*pcVar11)();
      if (uVar3 < DAT_005ba524) {
        DVar4 = DAT_005ba524 - uVar3;
        if ((int)DAT_005ba528 < (int)(DAT_005ba524 - uVar3)) {
          DVar4 = DAT_005ba528;
        }
        if (1 < (int)DVar4) {
          DVar4 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,DVar4,0xff);
          if (DVar4 == 0x102) {
            iVar5 = (*pcVar11)();
            DAT_005ba524 = iVar5 + DAT_005ba528;
            if (DAT_005ba51c != (code *)0x0) {
              (*DAT_005ba51c)(DAT_005ba520);
            }
            if (DAT_005ba52c != (HWND)0x0) {
              GetCursorPos(&MStack_74.pt);
              Point.y = MStack_74.pt.y;
              Point.x = MStack_74.pt.x;
              pHVar2 = WindowFromPoint(Point);
              if (pHVar2 != DAT_005ba52c) {
                MStack_74.message = 0x2a3;
                MStack_74.hwnd = DAT_005ba52c;
                MStack_74.wParam = 0;
                MStack_74.time = (*pcVar11)();
                MStack_74.lParam = -1;
                DAT_005ba52c = (HWND)0x0;
                DispatchMessageA(&MStack_74);
              }
            }
          }
          goto LAB_00403c70;
        }
      }
      DAT_005ba524 = DAT_005ba528 + uVar3;
      if (DAT_005ba51c != (code *)0x0) {
        (*DAT_005ba51c)(DAT_005ba520);
      }
    }
    goto LAB_00403c70;
  }
LAB_00403a8a:
  if (param_2 == 0) {
LAB_00403b8b:
    if (local_90.message != 0x12) {
LAB_00403b94:
      GetMessageA(&local_90,(HWND)0x0,0,0);
      pHVar2 = DAT_005ba52c;
      if ((DAT_005ba52c != (HWND)0x0) &&
         ((((0x1ff < local_90.message && (local_90.message < 0x20b)) ||
           ((0x9f < local_90.message && (local_90.message < 0xaa)))) &&
          (local_90.hwnd != DAT_005ba52c)))) {
        DAT_005ba52c = (HWND)0x0;
        ptVar9 = &local_90;
        pMVar10 = &local_3c;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          pMVar10->hwnd = ptVar9->hwnd;
          ptVar9 = (tagMSG *)&ptVar9->message;
          pMVar10 = (MSG *)&pMVar10->message;
        }
        local_3c.hwnd = pHVar2;
        local_3c.message = 0x2a3;
        local_3c.lParam = -1;
        DispatchMessageA(&local_3c);
        pcVar11 = GetTickCount_exref;
      }
      if (local_90.hwnd != DAT_005ba4c8) goto code_r0x00403c1d;
      goto LAB_00403c56;
    }
    goto LAB_00403d2a;
  }
  if (((local_90.hwnd != param_1) && (BVar1 = IsChild(param_1,local_90.hwnd), BVar1 == 0)) &&
     ((local_90.message == 0x201 ||
      (((local_90.message == 0x204 || (local_90.message == 0xa1)) || (local_90.message == 0xa4))))))
  {
    if (((param_4 == (int *)0x0) || (local_90.pt.x < *param_4)) ||
       ((param_4[2] <= local_90.pt.x ||
        ((local_90.pt.y < param_4[1] || (param_4[3] <= local_90.pt.y)))))) {
      GetClassNameA(local_90.hwnd,local_20,0x1e);
      iVar5 = lstrcmpiA(local_20,"ComboLBox");
      if (iVar5 == 0) goto LAB_00403b68;
      goto LAB_00403d0c;
    }
    GetMessageA(&local_90,(HWND)0x0,0,0);
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 1;
    }
    SendMessageA(param_1,0x111,2,0);
    goto LAB_004038e3;
  }
LAB_00403b68:
  if (local_90.message == 0x104) {
    if (local_90.wParam == 8) goto LAB_00403b94;
  }
  else if (local_90.message != 0x1f) goto LAB_00403b8b;
  goto LAB_00403d0c;
code_r0x00403c1d:
  if (param_3 == 0) {
    iVar5 = IsDialogMessageA(param_1,&local_90);
  }
  else {
    iVar5 = SendMessageA(param_1,0x475,0,(LPARAM)&local_90);
  }
  if (iVar5 != 0) goto LAB_004038e3;
LAB_00403c56:
  TranslateMessage(&local_90);
  DispatchMessageA(&local_90);
LAB_00403c70:
  BVar1 = IsWindow(param_1);
  if (BVar1 == 0) goto LAB_00403d2a;
  BVar1 = IsWindowVisible(param_1);
  if ((BVar1 == 0) || ((param_3 != 0 && (LVar6 = SendMessageA(param_1,0x476,0,0), LVar6 == 0)))) {
    local_94 = GetWindowLongA(param_1,DAT_005ba9c0);
LAB_00403d2a:
    if ((local_94 != DAT_005ba4d0) && (DAT_005ba4d0 != -2)) {
      local_94 = DAT_005ba4d0;
    }
LAB_00403d40:
    DAT_005ba4b4 = DAT_005ba4b4 & 0xfffffff7;
    DAT_005ba4cc = (HWND)0x0;
    if (param_2 == 0) {
      FUN_00409600(DAT_005ba4c0,1);
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
  if (param_2 == 0) goto LAB_004038e3;
  pHVar2 = GetFocus();
  if ((pHVar2 == param_1) || (BVar1 = IsChild(param_1,pHVar2), BVar1 != 0)) {
    if (DAT_005ba508 != 0 || DAT_005ba50c != 0) {
      LVar7 = InterlockedExchange(&DAT_005ba50c,0);
      LVar8 = InterlockedExchange(&DAT_005ba508,0);
      FUN_004060b0(DAT_005ba4c0,LVar7,LVar8,0);
    }
    goto LAB_004038e3;
  }
LAB_00403d0c:
  DAT_005ba4d0 = 1;
  goto LAB_00403d40;
}


