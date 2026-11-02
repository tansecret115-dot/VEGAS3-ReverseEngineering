/* Module: vidpcore.dll
   Function: FUN_5df047c0
   Address: 5df047c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df047c0(int param_1,HDC param_2)

{
  HWND hWnd;
  DWORD color;
  HBRUSH hbr;
  RECT local_28;
  HWND local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  HDC local_4;
  
  local_28.right = *(int *)(param_1 + 0x2d4) - *(int *)(param_1 + 0x2cc);
  local_28.left = 0;
  local_28.bottom = *(int *)(param_1 + 0x2d8) - *(int *)(param_1 + 0x2d0);
  local_28.top = 0;
  if ((*(uint *)(param_1 + 0x47c) & 1) == 0) {
    color = GetSysColor(5);
    if (*(int *)(param_1 + 0x2ec) == 0) {
      hbr = CreateHatchBrush(4,color);
    }
    else {
      hbr = CreateSolidBrush(color);
    }
    FillRect(param_2,&local_28,hbr);
    DrawEdge(param_2,&local_28,10,0xf);
    DeleteObject(hbr);
    return 1;
  }
  local_18 = *(HWND *)(param_1 + 0x2c0);
  hWnd = *(HWND *)(param_1 + 0x2c8);
  local_14 = 0;
  local_10 = 0;
  local_4 = param_2;
  local_c = local_28.right;
  local_8 = local_28.bottom;
  if (hWnd == (HWND)0x0) {
    hWnd = GetParent(local_18);
  }
  SendMessageA(hWnd,0x820,(WPARAM)&local_18,0);
  return 1;
}


