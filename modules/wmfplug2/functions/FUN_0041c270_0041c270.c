/* Module: wmfplug2.dll
   Function: FUN_0041c270
   Address: 0041c270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c270(HWND param_1,WPARAM param_2)

{
  HWND hWnd;
  
  if (param_2 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      SendMessageA(hWnd,0x30,param_2,1);
    }
  }
  return;
}


