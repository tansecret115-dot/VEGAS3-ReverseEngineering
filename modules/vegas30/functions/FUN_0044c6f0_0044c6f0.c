/* Module: vegas30.exe
   Function: FUN_0044c6f0
   Address: 0044c6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c6f0(int param_1)

{
  HWND hWnd;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0xac) != 0)) &&
     ((*(byte *)(param_1 + 0x9c) & 0x10) == 0)) {
    hWnd = GetFocus();
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x14;
    FUN_00445080(param_1,0);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0xe84) = 0;
    FUN_00444b90(param_1,0);
    FUN_00446940(param_1);
    InvalidateRect(*(HWND *)(param_1 + 0x84),(RECT *)0x0,0);
    FUN_00446620(param_1);
    SetFocus(hWnd);
    return 0;
  }
  return 0x15;
}


