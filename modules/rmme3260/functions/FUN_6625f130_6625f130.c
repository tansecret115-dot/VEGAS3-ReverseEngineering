/* Module: rmme3260.dll
   Function: FUN_6625f130
   Address: 6625f130
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_6625f130(LPVOID param_1)

{
  ATOM AVar1;
  HWND pHVar2;
  CHAR local_60 [52];
  WNDCLASSA local_2c;
  
  wsprintfA(local_60,&DAT_6627c8d4,s_PN_Internal_Sock_Async_6627c8dc,&DAT_6627f258);
  if (DAT_6627f258 == 0) {
    local_2c.hInstance = *(HINSTANCE *)((int)param_1 + 0x10);
    local_2c.lpszClassName = local_60;
    local_2c.style = 0;
    local_2c.lpfnWndProc = CAsyncSockN::AsyncNotifyProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    AVar1 = RegisterClassA(&local_2c);
    DAT_6627f258 = (uint)AVar1;
    if (DAT_6627f258 == 0) {
      UnregisterClassA(local_60,*(HINSTANCE *)((int)param_1 + 0x10));
      AVar1 = RegisterClassA(&local_2c);
      DAT_6627f258 = (uint)AVar1;
    }
  }
  pHVar2 = CreateWindowExA(0,local_60,s_RealAudio_Internal_Messages_6627c8b8,0,0,0,0,0,(HWND)0x0,
                           (HMENU)0x0,*(HINSTANCE *)((int)param_1 + 0x10),param_1);
  *(HWND *)((int)param_1 + 4) = pHVar2;
  return pHVar2 != (HWND)0x0;
}


