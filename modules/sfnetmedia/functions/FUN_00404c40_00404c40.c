/* Module: sfnetmedia.dll
   Function: FUN_00404c40
   Address: 00404c40
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00404c40(HWND param_1,undefined4 param_2,int *param_3)

{
  HWND hWnd;
  BOOL BVar1;
  HWND pHVar2;
  int iVar3;
  HWND unaff_retaddr;
  LONG LVar4;
  UINT UStack_20;
  WPARAM WStack_1c;
  HWND pHStack_4;
  
  hWnd = param_1;
  BVar1 = IsWindowVisible(param_1);
  if (BVar1 == 0) {
    ShowWindow(hWnd,1);
  }
  pHVar2 = GetCapture();
  if (pHVar2 != (HWND)0x0) {
    pHVar2 = GetCapture();
    SendMessageA(pHVar2,0x1f,0,0);
    ReleaseCapture();
  }
  param_1 = (HWND)0x0;
  (**(code **)(*param_3 + 0xc))(param_3,&param_1);
  LVar4 = 1;
LAB_00404cb1:
  do {
    BVar1 = PeekMessageA((LPMSG)&stack0xffffffdc,(HWND)0x0,0,0,0);
    if (BVar1 == 0) {
      WaitMessage();
    }
    else {
      if (UStack_20 == 0x12) goto LAB_00404db4;
      GetMessageA((LPMSG)&stack0xffffffdc,(HWND)0x0,0,0);
      if (UStack_20 == 0x100) {
        if (pHStack_4 != (HWND)0x0) {
          for (pHVar2 = GetFocus(); pHVar2 != (HWND)0x0; pHVar2 = GetParent(pHVar2)) {
            if (pHStack_4 == pHVar2) {
              iVar3 = (**(code **)(param_1->unused + 0x14))(param_1,&stack0xffffffdc);
              if (iVar3 == 0) goto LAB_00404cb1;
              break;
            }
          }
        }
        if (WStack_1c == 0x1b) {
          PostMessageA(hWnd,0x111,2,0);
          goto LAB_00404cb1;
        }
        if ((WStack_1c == 0x2f) || (WStack_1c == 0x70)) {
          PostMessageA(hWnd,0x111,9,0);
          goto LAB_00404cb1;
        }
      }
      BVar1 = IsDialogMessageA(hWnd,(LPMSG)&stack0xffffffdc);
      if (BVar1 != 0) goto LAB_00404cb1;
      TranslateMessage((MSG *)&stack0xffffffdc);
      DispatchMessageA((MSG *)&stack0xffffffdc);
    }
    BVar1 = IsWindow(hWnd);
    if (BVar1 == 0) goto LAB_00404db4;
    BVar1 = IsWindowVisible(hWnd);
    if (BVar1 == 0) {
      LVar4 = GetWindowLongA(hWnd,0x14);
LAB_00404db4:
      BVar1 = IsWindow(hWnd);
      if (BVar1 != 0) {
        DestroyWindow(hWnd);
      }
      if ((unaff_retaddr != (HWND)0x0) && (BVar1 = IsWindow(unaff_retaddr), BVar1 != 0)) {
        SetFocus(unaff_retaddr);
      }
      return LVar4;
    }
  } while( true );
}


