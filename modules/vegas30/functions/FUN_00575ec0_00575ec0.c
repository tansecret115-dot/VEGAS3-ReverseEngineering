/* Module: vegas30.exe
   Function: FUN_00575ec0
   Address: 00575ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00575ec0(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = GetDlgItem(param_1,0x434);
  LVar1 = SendMessageA(hWnd,0x147,0,0);
  FUN_00575e50(param_1,LVar1);
  return;
}


