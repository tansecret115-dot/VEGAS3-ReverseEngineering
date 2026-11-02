/* Module: vidcap30.exe
   Function: FUN_00463620
   Address: 00463620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463620(HWND param_1)

{
  tagRECT local_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  GetClientRect(param_1,&local_30);
  SendMessageA(param_1,0x101c,0,0);
  local_20 = 3;
  local_1c = 0;
  local_18 = local_30.right - local_30.left;
  SendMessageA(param_1,0x101b,0,(LPARAM)&local_20);
  return;
}


