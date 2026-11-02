/* Module: sfpublish.dll
   Function: FUN_0040b4e0
   Address: 0040b4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b4e0(void)

{
  ATOM AVar1;
  uint uVar2;
  tagWNDCLASSEXA local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
  DAT_004413f4 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_004413f0 = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_30.cbSize = 0x30;
  uVar2 = GetClassInfoExA(DAT_0044175c,"AtlAxWin",&local_30);
  if (uVar2 == 0) {
    local_30.cbSize = 0x30;
    local_30.style = 0;
    local_30.lpfnWndProc = FUN_00404830;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_0044175c;
    local_30.hIcon = (HICON)0x0;
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = "AtlAxWin";
    local_30.hIconSm = (HICON)0x0;
    AVar1 = RegisterClassExA(&local_30);
    uVar2 = (uint)AVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
  return uVar2;
}


