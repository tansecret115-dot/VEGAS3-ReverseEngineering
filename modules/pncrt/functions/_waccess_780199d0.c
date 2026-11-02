/* Module: pncrt.dll
   Function: _waccess
   Address: 780199d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _waccess(wchar_t *_Filename,int _AccessMode)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
                    /* 0x199d0  493  _waccess */
  DVar1 = GetFileAttributesW(_Filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_7800a870(DVar1);
    return -1;
  }
  if (((DVar1 & 1) != 0) && ((_AccessMode & 2U) != 0)) {
    piVar2 = _errno();
    *piVar2 = 0xd;
    puVar3 = __doserrno();
    *puVar3 = 5;
    return -1;
  }
  return 0;
}


