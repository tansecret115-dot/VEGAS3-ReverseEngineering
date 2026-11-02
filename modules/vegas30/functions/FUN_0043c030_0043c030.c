/* Module: vegas30.exe
   Function: FUN_0043c030
   Address: 0043c030
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0043c030(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 LPARAM param_5,WPARAM param_6,LPARAM param_7,LPARAM param_8,undefined4 param_9,
                 undefined4 *param_10)

{
  HWND hWnd;
  HWND hWnd_00;
  uint uVar1;
  
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  hWnd = (HWND)_SfCreateToolbarEmpty_16(DAT_00647204,param_1,param_2,param_4);
  if (hWnd == (HWND)0x0) {
    return (HWND)0x0;
  }
  if (param_3 != 0) {
    SendMessageA(hWnd,0x454,0,param_3);
  }
  SendMessageA(hWnd,0x434,0,param_8);
  SendMessageA(hWnd,0x430,0,param_7);
  SendMessageA(hWnd,0x414,param_6,param_5);
  hWnd_00 = (HWND)SendMessageA(hWnd,0x423,0,0);
  uVar1 = GetWindowLongA(hWnd_00,-0x10);
  SetWindowLongA(hWnd_00,-0x10,uVar1 | 1);
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = hWnd_00;
  }
  return hWnd;
}


