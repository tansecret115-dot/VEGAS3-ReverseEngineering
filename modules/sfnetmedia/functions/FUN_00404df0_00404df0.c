/* Module: sfnetmedia.dll
   Function: FUN_00404df0
   Address: 00404df0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND __thiscall FUN_00404df0(void *this,HWND param_1,LPARAM param_2)

{
  HMODULE hModule;
  DWORD DVar1;
  BOOL BVar2;
  HRSRC hResInfo;
  HRSRC hResInfo_00;
  ushort *puVar3;
  HGLOBAL hResData;
  LPCDLGTEMPLATEA pDVar4;
  LPCDLGTEMPLATEA lpTemplate;
  HGLOBAL hMem;
  HWND local_40;
  HGLOBAL local_3c;
  tagWNDCLASSEXA local_30;
  
  *(undefined4 *)((int)this + 8) = this;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xc) = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
  *(undefined4 **)((int)this + 0x10) = DAT_004418a0;
  DAT_004418a0 = (undefined4 *)((int)this + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
  hModule = DAT_00441840;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
  DAT_004414d4 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_004414d0 = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_30.cbSize = 0x30;
  BVar2 = GetClassInfoExA(DAT_0044183c,"AtlAxWin",&local_30);
  if (BVar2 == 0) {
    local_30.cbSize = 0x30;
    local_30.style = 0;
    local_30.lpfnWndProc = FUN_00403550;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_0044183c;
    local_30.hIcon = (HICON)0x0;
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = "AtlAxWin";
    local_30.hIconSm = (HICON)0x0;
    RegisterClassExA(&local_30);
  }
  puVar3 = (ushort *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
  hResInfo = FindResourceA(hModule,(LPCSTR)0xc9,(LPCSTR)0x5);
  hResInfo_00 = FindResourceA(hModule,(LPCSTR)0xc9,(LPCSTR)0xf0);
  local_3c = (HGLOBAL)0x0;
  local_40 = (HWND)0x0;
  if (hResInfo_00 != (HRSRC)0x0) {
    local_3c = LoadResource(hModule,hResInfo_00);
    puVar3 = LockResource(local_3c);
  }
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(hModule,hResInfo);
    pDVar4 = LockResource(hResData);
    lpTemplate = (LPCDLGTEMPLATEA)FUN_00405510(&pDVar4->style,puVar3);
    local_40 = CreateDialogIndirectParamA(hModule,lpTemplate,param_1,FUN_00405060,param_2);
    if (lpTemplate != pDVar4) {
      hMem = GlobalHandle(lpTemplate);
      GlobalFree(hMem);
    }
    FreeResource(hResData);
  }
  if ((puVar3 != (ushort *)0x0) && (hResInfo_00 != (HRSRC)0x0)) {
    FreeResource(local_3c);
  }
  return local_40;
}


