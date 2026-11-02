/* Module: sftrkfx1.dll
   Function: FUN_5cba93c0
   Address: 5cba93c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba93c0(undefined4 *param_1)

{
  HWND hWnd;
  uint wParam;
  UINT Msg;
  HWND hWnd_00;
  
  hWnd_00 = (HWND)*param_1;
  wParam = *(ushort *)param_1[0x21] | 0x3e80000;
  Msg = 0x111;
  hWnd = GetParent(hWnd_00);
  SendMessageA(hWnd,Msg,wParam,(LPARAM)hWnd_00);
  return;
}


