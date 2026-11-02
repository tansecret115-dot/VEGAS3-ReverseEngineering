/* Module: sfnetmedia.dll
   Function: FUN_0040cbd0
   Address: 0040cbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040cbd0(int param_1)

{
  undefined4 *puVar1;
  LPCVOID pMem;
  HWND hWnd;
  WPARAM WVar2;
  LRESULT LVar3;
  BOOL BVar4;
  HGLOBAL pvVar5;
  int iVar6;
  WPARAM *pWVar7;
  HWND hWnd_00;
  UINT Msg;
  WPARAM wParam;
  WPARAM local_28 [8];
  LPCVOID local_8;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),600);
  WVar2 = SendMessageA(hWnd,0x1004,0,0);
  pWVar7 = local_28;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pWVar7 = 0;
    pWVar7 = pWVar7 + 1;
  }
  local_28[0] = 4;
  while (WVar2 = WVar2 - 1, -1 < (int)WVar2) {
    local_28[2] = 0;
    local_28[1] = WVar2;
    LVar3 = SendMessageA(hWnd,0x1005,0,(LPARAM)local_28);
    if (LVar3 != 0) {
      puVar1 = (undefined4 *)((int)local_8 + 0xda0);
      BVar4 = IsWindow(*(HWND *)((int)local_8 + 0xda0));
      pMem = local_8;
      if (BVar4 == 0) {
        if (local_8 != (LPCVOID)0x0) {
          pvVar5 = GlobalHandle(local_8);
          GlobalUnlock(pvVar5);
          pvVar5 = GlobalHandle(pMem);
          GlobalFree(pvVar5);
        }
        Msg = 0x1008;
        hWnd_00 = hWnd;
        wParam = WVar2;
      }
      else {
        Msg = 0x111;
        hWnd_00 = (HWND)*puVar1;
        wParam = 2;
      }
      SendMessageA(hWnd_00,Msg,wParam,0);
    }
  }
  InvalidateRect(hWnd,(RECT *)0x0,0);
  UpdateWindow(hWnd);
  return 0;
}


