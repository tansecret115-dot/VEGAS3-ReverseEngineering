/* Module: pncrt.dll
   Function: _wtmpnam
   Address: 780266f0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wtmpnam(wchar_t *_Buffer)

{
  int iVar1;
  DWORD *pDVar2;
  void *pvVar3;
  
                    /* 0x266f0  565  _wtmpnam */
  _lock(3);
  if (DAT_78042610 == 0) {
    FUN_780267d0(0);
  }
  else {
    iVar1 = FUN_78026850(&DAT_78042610);
    if (iVar1 != 0) goto LAB_780267b5;
  }
  iVar1 = _waccess(&DAT_78042610,0);
  while( true ) {
    if (iVar1 != 0) {
      if (_Buffer == (wchar_t *)0x0) {
        pDVar2 = FUN_78009cc0();
        if (pDVar2[0xb] == 0) {
          pvVar3 = malloc(0x1a);
          pDVar2[0xb] = (DWORD)pvVar3;
          if (pvVar3 == (void *)0x0) {
            _unlock(3);
            return &DAT_78042610;
          }
        }
        _Buffer = (wchar_t *)pDVar2[0xb];
      }
      wcscpy(_Buffer,&DAT_78042610);
      _unlock(3);
      return _Buffer;
    }
    iVar1 = FUN_78026850(&DAT_78042610);
    if (iVar1 != 0) break;
    iVar1 = _waccess(&DAT_78042610,0);
  }
LAB_780267b5:
  _unlock(3);
  return (wchar_t *)0x0;
}


