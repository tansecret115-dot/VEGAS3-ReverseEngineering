/* Module: pncrt.dll
   Function: _expand
   Address: 7801ce60
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl _expand(void *_Memory,size_t _NewSize)

{
  void *lpMem;
  void *pvVar1;
  byte *pbVar2;
  int iVar3;
  uint dwBytes;
  
                    /* 0x1ce60  222  _expand */
  lpMem = _Memory;
  if (0xffffffe0 < _NewSize) {
    return (void *)0x0;
  }
  if (_NewSize == 0) {
    dwBytes = 0x10;
  }
  else {
    dwBytes = _NewSize + 0xf & 0xfffffff0;
  }
  pvVar1 = (void *)0x0;
  if (DAT_780421e0 != (code *)0x0) {
    pvVar1 = (void *)(*DAT_780421e0)(_Memory,dwBytes);
  }
  if (pvVar1 == (void *)0x0) {
    _lock(9);
    pbVar2 = (byte *)FUN_7800b2f0(lpMem,&_Memory,&_NewSize);
    if (pbVar2 != (byte *)0x0) {
      pvVar1 = (void *)0x0;
      if (dwBytes <= DAT_7803f3ec) {
        iVar3 = FUN_7800b770((int)_Memory,(int *)_NewSize,pbVar2,dwBytes >> 4);
        if (iVar3 != 0) {
          pvVar1 = lpMem;
        }
      }
      _unlock(9);
      return pvVar1;
    }
    _unlock(9);
    pvVar1 = HeapReAlloc(DAT_78042734,0x10,lpMem,dwBytes);
  }
  return pvVar1;
}


