/* Module: sfmarket2.dll
   Function: FUN_0043e7d0
   Address: 0043e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_0043e7d0(uchar *param_1,undefined4 param_2)

{
  bool bVar1;
  HRESULT HVar2;
  UINT uMode;
  HINSTANCE hInst;
  bool bVar3;
  uchar local_430 [260];
  HINSTANCE local_32c;
  WCHAR local_328 [259];
  undefined2 local_122;
  CHAR local_120 [260];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0049d5d0;
  puStack_10 = &DAT_00493130;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffbb4;
  ExceptionList = &local_14;
  MultiByteToWideChar(0,1,(LPCSTR)param_1,-1,local_328,0x104);
  local_122 = 0;
  GetCurrentDirectoryA(0x104,local_120);
  FUN_00420570(param_1,local_430,0x104);
  SetCurrentDirectoryA((LPCSTR)local_430);
  HVar2 = CoInitialize((LPVOID)0x0);
  bVar3 = HVar2 == 0;
  bVar1 = false;
  if (-1 < HVar2) {
    local_8 = 0;
    uMode = SetErrorMode(0x8000);
    hInst = CoLoadLibrary(local_328,1);
    if (hInst != (HINSTANCE)0xffffffff) {
      HVar2 = 0;
    }
    local_32c = hInst;
    SetErrorMode(uMode);
    local_8 = 0xffffffff;
    SetCurrentDirectoryA(local_120);
    bVar1 = bVar3;
    if ((-1 < HVar2) && (HVar2 = FUN_0043e760(hInst,param_2), HVar2 < 0)) {
      CoFreeLibrary(hInst);
    }
  }
  if (bVar1) {
    CoUninitialize();
  }
  ExceptionList = local_14;
  return HVar2;
}


