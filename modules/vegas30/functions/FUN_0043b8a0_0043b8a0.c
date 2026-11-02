/* Module: vegas30.exe
   Function: FUN_0043b8a0
   Address: 0043b8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0043b8a0(undefined4 param_1,undefined4 param_2,LPARAM param_3,WPARAM param_4,
                 undefined4 *param_5)

{
  HWND hWnd;
  HWND hWnd_00;
  uint uVar1;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  hWnd = (HWND)_SfCreateToolbarEmpty_16(DAT_00647204,param_1,0x5600196c,param_2);
  if (hWnd == (HWND)0x0) {
    return (HWND)0x0;
  }
  SendMessageA(hWnd,0x454,0,1);
  SendMessageA(hWnd,0x414,param_4,param_3);
  hWnd_00 = (HWND)SendMessageA(hWnd,0x423,0,0);
  uVar1 = GetWindowLongA(hWnd_00,-0x10);
  SetWindowLongA(hWnd_00,-0x10,uVar1 | 1);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = hWnd_00;
  }
  SendMessageA(hWnd,0x434,0,DAT_0064b32c);
  SendMessageA(hWnd,0x430,0,DAT_0064b328);
  return hWnd;
}


