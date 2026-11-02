/* Module: sfcdi.dll
   Function: FUN_5bf1bbd0
   Address: 5bf1bbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1bbd0(HWND param_1,uint *param_2)

{
  HWND hWnd;
  uint uVar1;
  UINT Msg;
  WPARAM wParam;
  
  uVar1 = 2;
  if (param_2[1] - 1 <= *param_2) {
    uVar1 = 4;
  }
  uVar1 = uVar1 | *param_2 != 0;
  wParam = 0;
  Msg = 0x470;
  hWnd = GetParent(param_1);
  PostMessageA(hWnd,Msg,wParam,uVar1);
  return;
}


