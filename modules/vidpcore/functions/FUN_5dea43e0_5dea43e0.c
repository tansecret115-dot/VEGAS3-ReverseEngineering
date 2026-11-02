/* Module: vidpcore.dll
   Function: FUN_5dea43e0
   Address: 5dea43e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5dea43e0(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_5dea40e0;
  local_28.hCursor = (HCURSOR)FUN_5deb7930(0,0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)&DAT_00000006;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


