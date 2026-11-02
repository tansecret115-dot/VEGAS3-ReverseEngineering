/* Module: vegas30k.dll
   Function: FUN_01139ed0
   Address: 01139ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139ed0(HWND param_1)

{
  HWND hDlg;
  LONG LVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  undefined4 *puVar2;
  
  hDlg = param_1;
  LVar1 = GetWindowLongA(param_1,8);
  puVar2 = &param_1;
  (**(code **)(**(int **)(LVar1 + 4) + 0x70))(*(int **)(LVar1 + 4),4);
  lParam = 0;
  wParam = (uint)(puVar2 != (undefined4 *)0x0);
  Msg = 0xf1;
  hWnd = GetDlgItem(hDlg,0x47);
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_01139e10(hDlg);
  return;
}


