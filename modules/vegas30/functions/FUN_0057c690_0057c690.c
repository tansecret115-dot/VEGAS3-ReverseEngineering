/* Module: vegas30.exe
   Function: FUN_0057c690
   Address: 0057c690
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0057c690(HWND param_1,LPARAM param_2)

{
  HWND hWnd;
  
  hWnd = CreateDialogIndirectParamA
                   (DAT_006471fc,(LPCDLGTEMPLATEA)&DAT_00645b30,param_1,FUN_0057c650,param_2);
  if (hWnd != (HWND)0x0) {
    ShowWindow(hWnd,8);
    UpdateWindow(hWnd);
  }
  return hWnd;
}


