/* Module: sfmarket2.dll
   Function: FUN_0040e2d0
   Address: 0040e2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040e2d0(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x1fb);
  SendMessageA(hWnd,0x466,0,0);
  SendMessageA(hWnd,0x464,0,0);
  return 0;
}


