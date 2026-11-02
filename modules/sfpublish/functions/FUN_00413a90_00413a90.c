/* Module: sfpublish.dll
   Function: FUN_00413a90
   Address: 00413a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00413a90(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x1f6);
  SendMessageA(hWnd,0x466,0,0);
  SendMessageA(hWnd,0x464,0,0);
  return 0;
}


