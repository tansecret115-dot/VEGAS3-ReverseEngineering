/* Module: vegas30.exe
   Function: FUN_00452820
   Address: 00452820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00452820(HWND param_1,LPARAM param_2)

{
  LONG LVar1;
  HWND hWnd;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (LVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(LVar1 + 4) = 0;
  *(LPARAM *)(LVar1 + 8) = param_2;
  hWnd = GetDlgItem(param_1,0x49f);
  SendMessageA(hWnd,0x60c,0,*(LPARAM *)(LVar1 + 4));
  SendMessageA(hWnd,0x60d,1,param_2);
  FUN_00452710(param_1,*(undefined4 *)(LVar1 + 4));
  return *(undefined4 *)(LVar1 + 0xc);
}


