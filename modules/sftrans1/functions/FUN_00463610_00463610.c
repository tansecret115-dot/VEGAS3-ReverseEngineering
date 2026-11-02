/* Module: sftrans1.dll
   Function: FUN_00463610
   Address: 00463610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00463610(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x598);
  SendMessageA(hWnd,0x60e,0,0);
  SendMessageA(hWnd,0x60f,0,0xffff);
  return;
}


