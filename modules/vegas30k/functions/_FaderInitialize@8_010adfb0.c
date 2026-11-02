/* Module: vegas30k.dll
   Function: _FaderInitialize@8
   Address: 010adfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _FaderInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
                    /* 0xadfb0  649  _FaderInitialize@8 */
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_010a7fa0;
  local_28.hCursor = (HCURSOR)0x0;
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)&DAT_00000010;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


