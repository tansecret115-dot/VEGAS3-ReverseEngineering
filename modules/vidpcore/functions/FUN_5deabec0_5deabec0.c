/* Module: vidpcore.dll
   Function: FUN_5deabec0
   Address: 5deabec0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5deabec0(HINSTANCE param_1,LPCSTR param_2)

{
  short sVar1;
  BOOL BVar2;
  tagWNDCLASSA local_28;
  
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 != 0) {
    return true;
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_5deab6f0;
  local_28.hCursor = (HCURSOR)FUN_5deb7930(0,0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)&DAT_00000006;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  sVar1 = FUN_5deb8ff0(&local_28);
  return sVar1 != 0;
}


