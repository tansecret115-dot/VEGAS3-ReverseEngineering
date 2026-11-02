/* Module: sfnetmedia.dll
   Function: FUN_0040ca80
   Address: 0040ca80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040ca80(int param_1)

{
  undefined4 *puVar1;
  WPARAM WVar2;
  LPCVOID pMem;
  HWND hWnd;
  WPARAM WVar3;
  LRESULT LVar4;
  BOOL BVar5;
  HGLOBAL pvVar6;
  int iVar7;
  WPARAM *pWVar8;
  WPARAM wParam;
  HWND hWnd_00;
  UINT Msg;
  WPARAM wParam_00;
  WPARAM local_50 [4];
  undefined4 local_40;
  LPCVOID local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),600);
  WVar3 = SendMessageA(hWnd,0x1004,0,0);
  pWVar8 = local_50;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pWVar8 = 0;
    pWVar8 = pWVar8 + 1;
  }
  local_50[0] = 0xc;
  local_40 = 2;
  wParam = WVar3;
  WVar2 = WVar3;
  while (WVar2 = WVar2 - 1, -1 < (int)WVar2) {
    local_50[2] = 0;
    local_50[1] = WVar2;
    LVar4 = SendMessageA(hWnd,0x1005,0,(LPARAM)local_50);
    if ((LVar4 != 0) && (local_50[3] == 2)) {
      if ((int)wParam < (int)WVar3) {
        local_18 = 3;
        local_1c = 3;
        SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
        SendMessageA(hWnd,0x102a,wParam,0);
      }
      puVar1 = (undefined4 *)((int)local_30 + 0xda0);
      BVar5 = IsWindow(*(HWND *)((int)local_30 + 0xda0));
      pMem = local_30;
      if (BVar5 == 0) {
        if (local_30 != (LPCVOID)0x0) {
          pvVar6 = GlobalHandle(local_30);
          GlobalUnlock(pvVar6);
          pvVar6 = GlobalHandle(pMem);
          GlobalFree(pvVar6);
        }
        Msg = 0x1008;
        hWnd_00 = hWnd;
        wParam_00 = WVar2;
      }
      else {
        Msg = 0x111;
        hWnd_00 = (HWND)*puVar1;
        wParam_00 = 2;
      }
      SendMessageA(hWnd_00,Msg,wParam_00,0);
    }
    wParam = wParam - 1;
  }
  InvalidateRect(hWnd,(RECT *)0x0,0);
  UpdateWindow(hWnd);
  return 0;
}


