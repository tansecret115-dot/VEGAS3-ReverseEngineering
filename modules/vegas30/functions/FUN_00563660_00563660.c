/* Module: vegas30.exe
   Function: FUN_00563660
   Address: 00563660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00563660(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0xc5eb);
  DAT_0064a7a4 = SendMessageA(hWnd,0xf0,0,0);
  DestroyWindow(*(HWND *)(param_1 + 4));
  return 0;
}


