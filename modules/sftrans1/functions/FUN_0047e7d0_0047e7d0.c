/* Module: sftrans1.dll
   Function: FUN_0047e7d0
   Address: 0047e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047e7d0(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x43f;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


