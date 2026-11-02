/* Module: vfplugs.dll
   Function: FUN_00424050
   Address: 00424050
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00424050(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
  FUN_004240d0();
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = FUN_004232c0;
  local_28.hCursor = (HCURSOR)FUN_0042c920((undefined4 *)0x0,(LPCSTR)0x7f00);
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


