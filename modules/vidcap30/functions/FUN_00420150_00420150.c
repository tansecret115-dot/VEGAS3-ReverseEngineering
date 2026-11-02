/* Module: vidcap30.exe
   Function: FUN_00420150
   Address: 00420150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420150(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int *lParam;
  int iVar2;
  WPARAM wParam;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  hWnd = param_1;
  wParam = 0;
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  iVar2 = 0;
  param_1 = (HWND)0x0;
  if (0 < LVar1) {
    do {
      if (&stack0x00000000 == (undefined1 *)0x10) {
        lParam = (int *)0x0;
      }
      else {
        local_10 = 3;
        lParam = &local_10;
      }
      SendMessageA(hWnd,0x100e,wParam,(LPARAM)lParam);
      if (iVar2 <= local_8 - local_10) {
        iVar2 = local_8 - local_10;
      }
      if ((int)param_1 <= local_4 - local_c) {
        param_1 = (HWND)(local_4 - local_c);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
    if (0 < LVar1) {
      SendMessageA(hWnd,0x1035,0,((int)param_1 + 2) * 0x10000 | iVar2 + 4U & 0xffff);
    }
  }
  return;
}


