/* Module: sfxpfx1.dll
   Function: FUN_5c957eb0
   Address: 5c957eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5c957eb0(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_5c957bb0;
  local_28.hCursor = (HCURSOR)FUN_5c955700((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


