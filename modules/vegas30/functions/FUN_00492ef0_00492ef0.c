/* Module: vegas30.exe
   Function: FUN_00492ef0
   Address: 00492ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HDC hdc;
  HRGN hrgn;
  
  if ((*(byte *)(param_1 + 0x20c) & 1) != 0) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
    hrgn = CreateRectRgnIndirect((RECT *)(param_1 + 0xac0));
    SelectClipRgn(hdc,hrgn);
    DeleteObject(hrgn);
    FUN_00492b70(param_1,hdc);
    *(undefined4 *)(param_1 + 0xa8) = param_3;
    *(undefined4 *)(param_1 + 0xac) = param_4;
    FUN_00492c20(param_1);
    FUN_00492a20(param_1,hdc,0);
    SelectClipRgn(hdc,(HRGN)0x0);
    ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  }
  return;
}


