/* Module: sftrkfx1.dll
   Function: FUN_5cbac060
   Address: 5cbac060
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cbac060(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  BOOL BVar2;
  tagWNDCLASSA local_28;
  
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 != 0) {
    return true;
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_5cbaba60;
  local_28.hCursor = (HCURSOR)FUN_5cbd57c0((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.style = 0xb;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


