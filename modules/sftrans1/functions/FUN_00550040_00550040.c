/* Module: sftrans1.dll
   Function: FUN_00550040
   Address: 00550040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00550040(int param_1)

{
  RECT local_10;
  
  local_10.left = *(LONG *)(param_1 + 0x138);
  local_10.top = *(LONG *)(param_1 + 0x13c);
  local_10.right = *(LONG *)(param_1 + 0x140);
  local_10.bottom = *(LONG *)(param_1 + 0x144);
  local_10.left = ftol();
  local_10.right = ftol();
  InvalidateRect(*(HWND *)(param_1 + 4),&local_10,0);
  return;
}


