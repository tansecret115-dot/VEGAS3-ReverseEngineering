/* Module: vegas30.exe
   Function: FUN_00440ef0
   Address: 00440ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440ef0(void)

{
  BOOL BVar1;
  tagMSG local_1c;
  
  BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  if (BVar1 != 0) {
    while (local_1c.message != 0x12) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
      BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      if (BVar1 == 0) {
        return;
      }
    }
    PostQuitMessage(local_1c.wParam);
  }
  return;
}


