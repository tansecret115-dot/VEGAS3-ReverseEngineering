/* Module: sfppack1.dll
   Function: FUN_5cddf540
   Address: 5cddf540
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cddf540(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  HBITMAP hbm;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  WNDCLASSA local_28;
  
  local_38 = 0xaaaa5555;
  local_34 = 0xaaaa5555;
  local_30 = 0xaaaa5555;
  local_2c = 0xaaaa5555;
  hbm = CreateBitmap(8,8,1,1,&local_38);
  DAT_5ce23b2c = CreatePatternBrush(hbm);
  DeleteObject(hbm);
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = FUN_5cddf2a0;
  local_28.hCursor = (HCURSOR)FUN_5cddbdb0((undefined4 *)0x0,&DAT_00007f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)&DAT_00000006;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 8;
  local_28.style = 0x400b;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


