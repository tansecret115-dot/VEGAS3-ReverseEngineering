/* Module: vidcap30.exe
   Function: _TrackbarInitialize@8
   Address: 004b3ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _TrackbarInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
                    /* 0xb3ca0  725  _TrackbarInitialize@8 */
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_004b2ff0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
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


