/* Module: sfpagepeel.dll
   Function: FUN_0041f030
   Address: 0041f030
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041f030(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
  FUN_0041f0b0();
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = FUN_0041e2a0;
  local_28.hCursor = (HCURSOR)FUN_00427900((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x10;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


