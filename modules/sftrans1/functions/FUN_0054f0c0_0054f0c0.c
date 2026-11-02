/* Module: sftrans1.dll
   Function: FUN_0054f0c0
   Address: 0054f0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0054f0c0(int param_1)

{
  HWND hWnd;
  HWND local_c;
  WPARAM local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x1d0) != 0) && (local_c = *(HWND *)(param_1 + 4), local_c != (HWND)0x0))
  {
    local_8 = GetWindowLongA(local_c,-0xc);
    local_4 = 1;
    hWnd = GetParent(*(HWND *)(param_1 + 4));
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x4e,local_8,(LPARAM)&local_c);
    }
  }
  return;
}


