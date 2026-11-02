/* Module: vidcap30.exe
   Function: WebBrowse_AppInitialize
   Address: 0049ab80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall WebBrowse_AppInitialize(struct HINSTANCE__ *) */

int WebBrowse_AppInitialize(HINSTANCE__ *param_1)

{
  ATOM AVar1;
  ATOM AVar2;
  WNDCLASSA local_28;
  
                    /* 0x9ab80  144  ?WebBrowse_AppInitialize@@YGHPAUHINSTANCE__@@@Z */
  local_28.style = 0x4008;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0049a670;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.hInstance = param_1;
  local_28.hIcon = (HICON)0x0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hbrBackground = (HBRUSH)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = "SfKrn_WebBrowseInner_Class";
  AVar1 = RegisterClassA(&local_28);
  local_28.style = 0x4008;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0049a500;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.hInstance = param_1;
  local_28.hIcon = (HICON)0x0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hbrBackground = (HBRUSH)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = "SfKrn_WebBrowse_Class";
  AVar2 = RegisterClassA(&local_28);
  return (uint)(AVar2 | AVar1);
}


