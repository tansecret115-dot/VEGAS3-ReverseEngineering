/* Module: vegas30.exe
   Function: FUN_00492f70
   Address: 00492f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492f70(int param_1)

{
  HDC hdc;
  HRGN hrgn;
  
  if ((*(byte *)(param_1 + 0x20c) & 1) != 0) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
    hrgn = CreateRectRgnIndirect((RECT *)(param_1 + 0xac0));
    SelectClipRgn(hdc,hrgn);
    DeleteObject(hrgn);
    FUN_00492b70(param_1,hdc);
    SelectClipRgn(hdc,(HRGN)0x0);
    ReleaseDC(*(HWND *)(param_1 + 4),hdc);
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) & 0xfffffffe;
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x204));
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  return;
}


