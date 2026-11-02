/* Module: vegas30k.dll
   Function: FUN_01138c50
   Address: 01138c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138c50(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  GetWindowLongA(param_1,8);
  hWnd = GetDlgItem(param_1,0x423);
  LVar1 = SendMessageA(hWnd,0x188,0,0);
  if (LVar1 != -1) {
    FUN_01138a00(param_1);
  }
  return;
}


