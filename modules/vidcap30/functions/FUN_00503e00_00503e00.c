/* Module: vidcap30.exe
   Function: FUN_00503e00
   Address: 00503e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00503e00(HWND param_1)

{
  LONG LVar1;
  uint uVar2;
  HWND hWnd;
  
  LVar1 = GetWindowLongA(param_1,0);
  ReleaseCapture();
  *(undefined4 *)(LVar1 + 0x31c) = 0;
  *(undefined4 *)(LVar1 + 800) = 0;
  if (*(int *)(LVar1 + 0x13c) == 0) {
    InvalidateRect(*(HWND *)(LVar1 + 8),(RECT *)(LVar1 + 0x178),0);
    return 1;
  }
  *(int *)(LVar1 + 0x140) = *(int *)(LVar1 + 0x13c);
  *(undefined4 *)(LVar1 + 0x13c) = 0;
  FUN_00500820(LVar1);
  FUN_00501360(LVar1);
  FUN_00503cf0(*(undefined4 *)(LVar1 + 8));
  hWnd = *(HWND *)(LVar1 + 8);
  uVar2 = GetDlgCtrlID(hWnd);
  PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar2 & 0xffff | 0x7000000,(LPARAM)hWnd);
  if (((*(byte *)(LVar1 + 4) & 0x10) != 0) && (*(HWND *)(LVar1 + 0xc) != (HWND)0x0)) {
    SendMessageA(*(HWND *)(LVar1 + 0xc),0x111,*(ushort *)(LVar1 + 0x450) | 0x40000,(LPARAM)param_1);
  }
  return 1;
}


