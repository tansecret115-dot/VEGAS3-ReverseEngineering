/* Module: dsetup.dll
   Function: FUN_004018f0
   Address: 004018f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004018f0(undefined4 param_1,int param_2)

{
  HANDLE hObject;
  DWORD DVar1;
  
  if (param_2 == 0) {
    _DAT_0040aa90 = _DAT_0040aa90 + -1;
    if (_DAT_0040aa90 == 0) {
      DAT_0040aa68 = 0;
      CloseHandle(DAT_0040aa74);
      if (DAT_0040aa60 != (HMODULE)0x0) {
        FreeLibrary(DAT_0040aa60);
      }
    }
  }
  else if (param_2 == 1) {
    hObject = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"DSETUP DLL Mutex");
    _DAT_0040aa90 = _DAT_0040aa90 + 1;
    if (hObject == (HANDLE)0x0) {
      return 0;
    }
    DVar1 = GetLastError();
    if (DVar1 == 0xb7) {
      CloseHandle(hObject);
    }
    else {
      DAT_0040aa5c = param_1;
      _DAT_0040aa78 = 0;
      DAT_0040aa60 = (HMODULE)0x0;
      DAT_0040aa68 = 0;
      DAT_0040aa74 = hObject;
    }
  }
  return 1;
}


