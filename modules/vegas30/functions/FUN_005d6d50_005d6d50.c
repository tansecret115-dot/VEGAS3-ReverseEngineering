/* Module: vegas30.exe
   Function: FUN_005d6d50
   Address: 005d6d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d6d50(HWND param_1,HWND param_2,int param_3,int param_4)

{
  LRESULT LVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (param_4 == 1) {
    LVar1 = SendMessageA(param_2,0x147,0,0);
    *(LRESULT *)(param_3 + 0xd88) = LVar1 + 1;
    if (*(int *)(param_3 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      hWnd = GetParent(param_1);
      SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
    }
    *(undefined4 *)(param_3 + 0xd4c) = 1;
    return 1;
  }
  return 1;
}


