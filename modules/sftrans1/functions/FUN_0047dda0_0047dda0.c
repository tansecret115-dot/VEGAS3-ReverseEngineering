/* Module: sftrans1.dll
   Function: FUN_0047dda0
   Address: 0047dda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047dda0(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  undefined1 **lParam;
  int local_14 [2];
  undefined1 *local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_c = (undefined1 *)local_14;
  local_14[0] = *(int *)(param_1 + 0x30) + 0x1cc;
  local_14[1] = 0;
  local_8 = 0;
  lParam = &local_c;
  wParam = 2;
  Msg = 0x449;
  local_4 = &LAB_0047df90;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  return;
}


