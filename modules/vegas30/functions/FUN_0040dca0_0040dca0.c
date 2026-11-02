/* Module: vegas30.exe
   Function: FUN_0040dca0
   Address: 0040dca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dca0(int param_1)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int local_18;
  tagRECT local_10;
  
  local_18 = 0;
  iVar1 = **(int **)(param_1 + 200);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 200) + 8) + local_18 * 4);
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        UpdateWindow(*(HWND *)(iVar2 + 8));
        GetClientRect(*(HWND *)(iVar2 + 8),&local_10);
        SendMessageA(*(HWND *)(iVar2 + 8),0xb,0,0);
        hWnd = CreateWindowExA(0x20,"Vegas.Class.Plexi","",0x50000000,local_10.left,local_10.top,
                               local_10.right - local_10.left,local_10.bottom - local_10.top,
                               *(HWND *)(iVar2 + 8),(HMENU)0x0,DAT_006471fc,(LPVOID)0x0);
        *(HWND *)(iVar2 + 0x20) = hWnd;
        SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x13);
        SendMessageA(*(HWND *)(iVar2 + 8),0xb,1,0);
      }
      local_18 = local_18 + 1;
    } while (local_18 < iVar1);
  }
  return;
}


