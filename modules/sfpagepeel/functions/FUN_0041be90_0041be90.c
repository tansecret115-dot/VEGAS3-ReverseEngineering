/* Module: sfpagepeel.dll
   Function: FUN_0041be90
   Address: 0041be90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041be90(HINSTANCE param_1,LPCSTR param_2)

{
  short sVar1;
  BOOL BVar2;
  tagWNDCLASSA local_28;
  
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 != 0) {
    return true;
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0041b6c0;
  local_28.hCursor = (HCURSOR)FUN_00427900((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  sVar1 = FUN_00428fc0(&local_28);
  return sVar1 != 0;
}


