/* Module: vidcap30.exe
   Function: FUN_0041fa70
   Address: 0041fa70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fa70(HWND param_1)

{
  WPARAM wParam;
  
  wParam = FUN_0041f9c0(param_1,1);
  if (wParam != 0xffffffff) {
    SendMessageA(param_1,0x1017,wParam,0);
  }
  return;
}


