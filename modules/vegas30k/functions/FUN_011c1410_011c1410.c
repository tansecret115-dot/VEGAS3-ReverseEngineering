/* Module: vegas30k.dll
   Function: FUN_011c1410
   Address: 011c1410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c1410(int param_1)

{
  HDC hDC;
  
  hDC = GetDC(*(HWND *)(param_1 + 0x13c));
  ReleaseDC(*(HWND *)(param_1 + 0x13c),hDC);
  return;
}


