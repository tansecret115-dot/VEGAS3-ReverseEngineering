/* Module: vegas30.exe
   Function: FUN_0043a7f0
   Address: 0043a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a7f0(int param_1,int *param_2)

{
  WPARAM wParam;
  int local_10 [2];
  int local_8;
  
  wParam = 0;
  param_2[1] = 0x15;
  *param_2 = 5;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      SendMessageA(*(HWND *)(param_1 + 0x80),0x41d,wParam,(LPARAM)local_10);
      wParam = wParam + 1;
      *param_2 = *param_2 + (local_8 - local_10[0]);
    } while (wParam < *(uint *)(param_1 + 0x98));
  }
  return;
}


