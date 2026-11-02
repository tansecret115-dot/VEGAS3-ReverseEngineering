/* Module: vidcap30.exe
   Function: SfColorPickInitialize
   Address: 00507180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfColorPickInitialize(struct HINSTANCE__ *,char const *) */

int SfColorPickInitialize(HINSTANCE__ *param_1,char *param_2)

{
  short sVar1;
  BOOL BVar2;
  tagWNDCLASSA local_28;
  
                    /* 0x107180  69  ?SfColorPickInitialize@@YGHPAUHINSTANCE__@@PBD@Z */
  BVar2 = GetClassInfoA(param_1,param_2,&local_28);
  if (BVar2 != 0) {
    return 1;
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_005069b0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  sVar1 = _SfRegisterClass_4(&local_28);
  return (uint)(sVar1 != 0);
}


