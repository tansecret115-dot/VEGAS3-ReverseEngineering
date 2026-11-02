/* Module: sfnetmedia.dll
   Function: FUN_0040f2c0
   Address: 0040f2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f2c0(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x1fa);
  SendMessageA(hWnd,0x466,0,0);
  SendMessageA(hWnd,0x464,0,0);
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}


