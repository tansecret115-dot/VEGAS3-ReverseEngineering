/* Module: encn3260.dll
   Function: FUN_664cb310
   Address: 664cb310
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_664cb310(LPVOID param_1)

{
  ATOM AVar1;
  HWND pHVar2;
  WNDCLASSA local_2c;
  
  if (DAT_664f2a54 == 0) {
    local_2c.hInstance = *(HINSTANCE *)((int)param_1 + 0x10);
    local_2c.style = 0;
    local_2c.lpfnWndProc = CAsyncNetThread::AsyncNotifyProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_PN_Internal_NetThread_Async_664effa8;
    AVar1 = RegisterClassA(&local_2c);
    DAT_664f2a54 = (uint)AVar1;
    if (AVar1 == 0) {
      UnregisterClassA(s_PN_Internal_NetThread_Async_664effa8,*(HINSTANCE *)((int)param_1 + 0x10));
      AVar1 = RegisterClassA(&local_2c);
      DAT_664f2a54 = (uint)AVar1;
    }
  }
  pHVar2 = CreateWindowExA(0,s_PN_Internal_NetThread_Async_664effa8,
                           s_RealMedia_Internal_Messages_664eff8c,0,0,0,0,0,(HWND)0x0,(HMENU)0x0,
                           *(HINSTANCE *)((int)param_1 + 0x10),param_1);
  *(HWND *)((int)param_1 + 4) = pHVar2;
  return pHVar2 != (HWND)0x0;
}


