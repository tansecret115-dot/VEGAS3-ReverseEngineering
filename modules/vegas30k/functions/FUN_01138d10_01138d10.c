/* Module: vegas30k.dll
   Function: FUN_01138d10
   Address: 01138d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138d10(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  GetWindowLongA(param_1,8);
  hWnd = GetDlgItem(param_1,0x426);
  LVar1 = SendMessageA(hWnd,0x188,0,0);
  if (LVar1 != -1) {
    FUN_01138770(param_1);
    FUN_01138a00(param_1);
  }
  return;
}


