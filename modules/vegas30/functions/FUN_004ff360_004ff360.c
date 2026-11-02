/* Module: vegas30.exe
   Function: FUN_004ff360
   Address: 004ff360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ff360(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  LONG LVar2;
  int iVar3;
  WPARAM wParam;
  WPARAM *pWVar4;
  WPARAM local_50 [8];
  int local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  hWnd = *(HWND *)(param_1 + 0x88);
  LVar1 = SendMessageA(hWnd,0x1004,0,0);
  LVar2 = GetWindowLongA(*(HWND *)(param_1 + 0x84),0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      pWVar4 = local_50;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pWVar4 = 0;
        pWVar4 = pWVar4 + 1;
      }
      local_50[0] = 4;
      local_50[1] = wParam;
      SendMessageA(hWnd,0x1005,0,(LPARAM)local_50);
      if (*(int *)(LVar2 + 0x180) == local_30) {
        local_18 = 2;
        local_1c = 2;
        SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return;
}


