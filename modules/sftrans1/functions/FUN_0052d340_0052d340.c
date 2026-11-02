/* Module: sftrans1.dll
   Function: FUN_0052d340
   Address: 0052d340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0052d340(int param_1,HINSTANCE param_2,HWND param_3,DWORD param_4,HMENU param_5)

{
  HWND hWnd;
  
  hWnd = CreateWindowExA(0,"ToolbarWindow32",(LPCSTR)0x0,param_4,0,0,0,0,param_3,param_5,param_2,
                         (LPVOID)0x0);
  *(HWND *)(param_1 + 0x10) = hWnd;
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x41e,0x14,0);
  }
  return *(undefined4 *)(param_1 + 0x10);
}


