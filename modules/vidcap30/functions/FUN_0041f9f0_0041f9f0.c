/* Module: vidcap30.exe
   Function: FUN_0041f9f0
   Address: 0041f9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f9f0(HWND param_1,WPARAM param_2,int *param_3)

{
  int *lParam;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  lParam = &local_10;
  if (param_2 != 0xffffffff) {
    if (&stack0x00000000 == (undefined1 *)0x10) {
      lParam = (int *)0x0;
    }
    else {
      local_10 = 1;
    }
    SendMessageA(param_1,0x100e,param_2,(LPARAM)lParam);
    *param_3 = (local_8 + local_10) / 2;
    param_3[1] = (local_c + local_4) / 2;
    return;
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}


