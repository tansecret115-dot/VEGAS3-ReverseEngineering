/* Module: pngu3266.dll
   Function: FUN_60600809
   Address: 60600809
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_60600809(int param_1,WPARAM param_2,int param_3)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  LRESULT LVar5;
  HWND hWnd;
  LONG LVar6;
  int local_3c;
  int local_38;
  int local_34;
  tagRECT local_1c;
  tagPOINT local_c;
  
  if (param_1 < 0) {
    LVar5 = CallNextHookEx(DAT_60649cb8,param_1,param_2,param_3);
  }
  else {
    if (*(int *)(param_3 + 8) == 0x110) {
      CPNWindow::Attach(DAT_60649cc0,*(HWND__ **)(param_3 + 0xc));
      if (DAT_60649cbc != 0) {
        SendMessageA(*(HWND *)(param_3 + 0xc),0x80,1,*(LPARAM *)(DAT_60649cbc + 0x2a));
        SetWindowPos(*(HWND *)(param_3 + 0xc),(HWND)0x0,0,0,0,0,0x27);
      }
      SystemParametersInfoA(0x30,0,&local_1c,0);
      LVar4 = local_1c.bottom;
      LVar3 = local_1c.right;
      LVar2 = local_1c.top;
      LVar1 = local_1c.left;
      hWnd = GetParent(*(HWND *)(param_3 + 0xc));
      if (hWnd == (HWND)0x0) {
        local_3c = LVar1;
        local_38 = LVar2;
        local_34 = LVar3;
        LVar6 = LVar4;
      }
      else {
        GetClientRect(hWnd,&local_1c);
        local_c.x = local_1c.left;
        local_c.y = local_1c.top;
        ClientToScreen(hWnd,&local_c);
        local_3c = local_c.x;
        local_38 = local_c.y;
        local_c.x = local_1c.right;
        local_c.y = local_1c.bottom;
        ClientToScreen(hWnd,&local_c);
        local_34 = local_c.x;
        LVar6 = local_c.y;
      }
      GetWindowRect(*(HWND *)(param_3 + 0xc),&local_1c);
      local_3c = (((local_34 + local_1c.left) - local_3c) - local_1c.right) / 2 + local_3c;
      local_38 = (((local_1c.top + LVar6) - local_38) - local_1c.bottom) / 2 + local_38;
      if (LVar3 < (local_3c + local_1c.right) - local_1c.left) {
        local_3c = (LVar3 + local_1c.left) - local_1c.right;
      }
      if (local_3c < LVar1) {
        local_3c = LVar1;
      }
      if (LVar4 < (local_38 + local_1c.bottom) - local_1c.top) {
        local_38 = (LVar4 + local_1c.top) - local_1c.bottom;
      }
      if (local_38 < LVar2) {
        local_38 = LVar2;
      }
      SetWindowPos(*(HWND *)(param_3 + 0xc),(HWND)0x0,local_3c,local_38,0,0,5);
    }
    LVar5 = 0;
  }
  return LVar5;
}


