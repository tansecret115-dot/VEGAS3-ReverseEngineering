/* Module: pncrt.dll
   Function: _lsearch
   Address: 78022080
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl
_lsearch(void *_Key,void *_Base,uint *_NumOfElements,uint _SizeOfElements,
        _PtFuncCompare *_PtFuncCompare)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x22080  333  _lsearch */
  uVar2 = 0;
  if (*_NumOfElements != 0) {
    do {
      iVar1 = (*_PtFuncCompare)(_Key,_Base);
      if (iVar1 == 0) {
        return _Base;
      }
      _Base = (void *)((int)_Base + _SizeOfElements);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *_NumOfElements);
  }
  puVar3 = _Base;
  for (uVar2 = _SizeOfElements >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *(undefined4 *)_Key;
    _Key = (undefined4 *)((int)_Key + 4);
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = _SizeOfElements & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)_Key;
    _Key = (undefined4 *)((int)_Key + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *_NumOfElements = *_NumOfElements + 1;
  return _Base;
}


