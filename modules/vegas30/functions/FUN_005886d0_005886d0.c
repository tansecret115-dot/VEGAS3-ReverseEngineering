/* Module: vegas30.exe
   Function: FUN_005886d0
   Address: 005886d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005886d0(int param_1)

{
  HWND hWnd;
  
  hWnd = CreateWindowExA(0,"ToolbarWindow32",(LPCSTR)0x0,0x4600000c,0,0,0,0,*(HWND *)(param_1 + 4),
                         (HMENU)0x0,*(HINSTANCE *)(DAT_0065a054 + 8),(LPVOID)0x0);
  *(HWND *)(param_1 + 8) = hWnd;
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x41e,0x14,0);
    return 0;
  }
  return 0xffffffff;
}


