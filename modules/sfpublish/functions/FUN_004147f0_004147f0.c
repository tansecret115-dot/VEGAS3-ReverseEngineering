/* Module: sfpublish.dll
   Function: FUN_004147f0
   Address: 004147f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004147f0(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x204);
  SendMessageA(hWnd,0x466,0,0);
  SendMessageA(hWnd,0x464,0,0);
  return 0;
}


