/* Module: vegas30.exe
   Function: FUN_004524f0
   Address: 004524f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_004524f0(HWND param_1,LPARAM param_2)

{
  HWND hWnd;
  
  hWnd = CreateDialogIndirectParamA
                   (DAT_006471fc,(LPCDLGTEMPLATEA)PTR_DAT_0063df74,param_1,FUN_004524b0,param_2);
  if (hWnd != (HWND)0x0) {
    ShowWindow(hWnd,8);
    UpdateWindow(hWnd);
  }
  return hWnd;
}


