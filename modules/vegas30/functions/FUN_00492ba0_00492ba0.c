/* Module: vegas30.exe
   Function: FUN_00492ba0
   Address: 00492ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492ba0(int param_1)

{
  HDC hdc;
  HRGN hrgn;
  
  hdc = GetDC(*(HWND *)(param_1 + 4));
  hrgn = CreateRectRgnIndirect((RECT *)(param_1 + 0xac0));
  SelectClipRgn(hdc,hrgn);
  DeleteObject(hrgn);
  FUN_00492b70(param_1,hdc);
  *(int *)(param_1 + 0x208) = (*(int *)(param_1 + 0x208) + 1) % 3;
  FUN_00492c20(param_1);
  FUN_00492a20(param_1,hdc,0);
  SelectClipRgn(hdc,(HRGN)0x0);
  ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  return;
}


