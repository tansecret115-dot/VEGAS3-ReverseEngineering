/* Module: rmme3260.dll
   Function: FUN_6625f6f0
   Address: 6625f6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_6625f6f0(LPVOID param_1)

{
  ATOM AVar1;
  HWND pHVar2;
  WNDCLASSA local_2c;
  
  if (DAT_6627f264 == 0) {
    local_2c.hInstance = *(HINSTANCE *)((int)param_1 + 0x10);
    local_2c.style = 0;
    local_2c.lpfnWndProc = CAsyncNetThread::AsyncNotifyProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_PN_Internal_NetThread_Async_6627c950;
    AVar1 = RegisterClassA(&local_2c);
    DAT_6627f264 = (uint)AVar1;
    if (AVar1 == 0) {
      UnregisterClassA(s_PN_Internal_NetThread_Async_6627c950,*(HINSTANCE *)((int)param_1 + 0x10));
      AVar1 = RegisterClassA(&local_2c);
      DAT_6627f264 = (uint)AVar1;
    }
  }
  pHVar2 = CreateWindowExA(0,s_PN_Internal_NetThread_Async_6627c950,
                           s_RealMedia_Internal_Messages_6627c934,0,0,0,0,0,(HWND)0x0,(HMENU)0x0,
                           *(HINSTANCE *)((int)param_1 + 0x10),param_1);
  *(HWND *)((int)param_1 + 4) = pHVar2;
  return pHVar2 != (HWND)0x0;
}


