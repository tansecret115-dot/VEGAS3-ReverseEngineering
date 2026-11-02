/* Module: vegas30.exe
   Function: FUN_0040bed0
   Address: 0040bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040bed0(void)

{
  ATOM AVar1;
  uint uVar2;
  tagWNDCLASSEXA local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  DAT_0064b590 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_0064b58c = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_30.cbSize = 0x30;
  uVar2 = GetClassInfoExA(DAT_0064716c,"AtlAxWin",&local_30);
  if (uVar2 == 0) {
    local_30.cbSize = 0x30;
    local_30.style = 0;
    local_30.lpfnWndProc = FUN_00405610;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_0064716c;
    local_30.hIcon = (HICON)0x0;
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = "AtlAxWin";
    local_30.hIconSm = (HICON)0x0;
    AVar1 = RegisterClassExA(&local_30);
    uVar2 = (uint)AVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  return uVar2;
}


