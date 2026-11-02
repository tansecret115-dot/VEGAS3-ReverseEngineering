/* Module: sftrans1.dll
   Function: FUN_00547290
   Address: 00547290
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00547290(int param_1,undefined4 param_2,LONG *param_3)

{
  WPARAM wParam;
  BOOL BVar1;
  RECT local_10;
  
  wParam = FUN_00547270(param_2);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 0;
  local_10.bottom = 0;
  if ((*(HWND *)(param_1 + 8) != (HWND)0x0) && (-1 < (int)wParam)) {
    SendMessageA(*(HWND *)(param_1 + 8),0x41d,wParam,(LPARAM)&local_10);
  }
  if (param_3 != (LONG *)0x0) {
    *param_3 = local_10.left;
    param_3[1] = local_10.top;
    param_3[2] = local_10.right;
    param_3[3] = local_10.bottom;
  }
  BVar1 = IsRectEmpty(&local_10);
  return -(uint)(BVar1 != 0) & 0x80070057;
}


