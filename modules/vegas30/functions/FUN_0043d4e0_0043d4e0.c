/* Module: vegas30.exe
   Function: FUN_0043d4e0
   Address: 0043d4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043d4e0(void)

{
  int iVar1;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  return;
}


