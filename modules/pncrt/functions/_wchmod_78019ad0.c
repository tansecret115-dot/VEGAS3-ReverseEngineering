/* Module: pncrt.dll
   Function: _wchmod
   Address: 78019ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wchmod(wchar_t *_Filename,int _Mode)

{
  DWORD DVar1;
  BOOL BVar2;
  
                    /* 0x19ad0  496  _wchmod */
  DVar1 = GetFileAttributesW(_Filename);
  if (DVar1 != 0xffffffff) {
    if ((_Mode & 0x80U) == 0) {
      DVar1 = DVar1 | 1;
    }
    else {
      DVar1 = DVar1 & 0xfffffffe;
    }
    BVar2 = SetFileAttributesW(_Filename,DVar1);
    if (BVar2 != 0) {
      return 0;
    }
  }
  DVar1 = GetLastError();
  FUN_7800a870(DVar1);
  return -1;
}


