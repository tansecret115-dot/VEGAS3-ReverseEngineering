/* Module: sftrans1.dll
   Function: FUN_0048ccd0
   Address: 0048ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0048ccd0(HINSTANCE param_1,LPCSTR param_2)

{
  short sVar1;
  BOOL BVar2;
  tagWNDCLASSA local_28;
  
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 != 0) {
    return true;
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0048cbd0;
  local_28.hCursor = (HCURSOR)FUN_004c93c0(0,0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  sVar1 = FUN_004caa80(&local_28);
  return sVar1 != 0;
}


