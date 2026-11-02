/* Module: vidcap30.exe
   Function: _PlexiglasInitialize@8
   Address: 005092d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _PlexiglasInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
                    /* 0x1092d0  199  _PlexiglasInitialize@8 */
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = FUN_00509220;
  local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f8a);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = GetStockObject(5);
  local_28.cbClsExtra = 0;
  local_28.hInstance = param_1;
  local_28.cbWndExtra = 4;
  local_28.style = 0x4000;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


