/* Module: pncrt.dll
   Function: _wchdir
   Address: 78019a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wchdir(wchar_t *_Path)

{
  wint_t _C;
  BOOL BVar1;
  DWORD DVar2;
  WCHAR local_214;
  wint_t local_212;
  undefined2 local_210;
  undefined2 local_20e;
  WCHAR local_20c;
  wint_t wStack_20a;
  
                    /* 0x19a20  495  _wchdir */
  BVar1 = SetCurrentDirectoryW(_Path);
  if (BVar1 != 0) {
    DVar2 = GetCurrentDirectoryW(0x105,&local_20c);
    if (DVar2 != 0) {
      _C = (wint_t)_local_20c;
      if (((_C == 0x5c) || (_C == 0x2f)) && (_C == wStack_20a)) {
        return 0;
      }
      local_214 = L'=';
      local_212 = towupper(_C);
      local_210 = 0x3a;
      local_20e = 0;
      BVar1 = SetEnvironmentVariableW(&local_214,&local_20c);
      if (BVar1 != 0) {
        return 0;
      }
    }
  }
  DVar2 = GetLastError();
  FUN_7800a870(DVar2);
  return -1;
}


