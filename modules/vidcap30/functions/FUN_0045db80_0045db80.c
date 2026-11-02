/* Module: vidcap30.exe
   Function: FUN_0045db80
   Address: 0045db80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045db80(HWND param_1,int param_2)

{
  WPARAM wParam;
  LRESULT LVar1;
  
  wParam = SendMessageA(param_1,0x1042,0,0);
  if (wParam != 0xffffffff) {
    LVar1 = SendMessageA(param_1,0x1008,wParam,0);
    if (LVar1 != 0) {
      if (wParam == 0) {
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
      return 1;
    }
  }
  return 0;
}


