/* Module: vidcap30.exe
   Function: _StaticInitialize@8
   Address: 0050a2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _StaticInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  HBITMAP hbm;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  WNDCLASSA local_28;
  
                    /* 0x10a2b0  720  _StaticInitialize@8 */
  local_38 = 0xaaaa5555;
  local_34 = 0xaaaa5555;
  local_30 = 0xaaaa5555;
  local_2c = 0xaaaa5555;
  hbm = CreateBitmap(8,8,1,1,&local_38);
  DAT_006623f8 = CreatePatternBrush(hbm);
  DeleteObject(hbm);
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = FUN_0050a010;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 8;
  local_28.style = 0x400b;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


