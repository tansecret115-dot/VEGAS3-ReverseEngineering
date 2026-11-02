/* Module: encn3260.dll
   Function: FUN_664a3970
   Address: 664a3970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a3970(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
  if (BVar1 != 0) {
    if (local_20.message == 0x12) {
      PostQuitMessage(0);
      return 1;
    }
    if ((local_20.message == 0x102) && (local_20.wParam == 0x1b)) {
      return 1;
    }
    TranslateMessage(&local_20);
    DispatchMessageA(&local_20);
  }
  return 0;
}


