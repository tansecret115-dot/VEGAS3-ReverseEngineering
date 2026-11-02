/* Module: vegas30.exe
   Function: FUN_004242a0
   Address: 004242a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004242a0(HWND param_1,int *param_2)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  int local_10 [4];
  
  SendMessageA(param_1,0x453,0,(LPARAM)param_2);
  *param_2 = 0;
  LVar1 = SendMessageA(param_1,0x418,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      LVar2 = SendMessageA(param_1,0x41d,wParam,(LPARAM)local_10);
      if (LVar2 != 0) {
        *param_2 = *param_2 + (local_10[2] - local_10[0]);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return 1;
}


