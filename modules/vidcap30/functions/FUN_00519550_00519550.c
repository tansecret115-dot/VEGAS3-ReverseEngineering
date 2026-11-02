/* Module: vidcap30.exe
   Function: FUN_00519550
   Address: 00519550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00519550(int param_1,WPARAM param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  HWND hWnd;
  HWND local_20;
  WPARAM local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = param_2;
  local_8 = param_4;
  local_20 = *(HWND *)(param_1 + 0x3c);
  local_14 = param_3;
  local_4 = param_5;
  local_c = param_6;
  local_10 = *(undefined4 *)(param_1 + 8);
  hWnd = *(HWND *)(param_1 + 0x44);
  local_18 = 0xffffff98;
  if (hWnd == (HWND)0x0) {
    hWnd = GetParent(local_20);
  }
  SendMessageA(hWnd,0x4e,local_1c,(LPARAM)&local_20);
  return;
}


