/* Module: vidcap30.exe
   Function: _SpinnerInitialize@8
   Address: 004af330
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SpinnerInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
                    /* 0xaf330  705  _SpinnerInitialize@8 */
  FUN_004af3b0();
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = FUN_004ae5a0;
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


