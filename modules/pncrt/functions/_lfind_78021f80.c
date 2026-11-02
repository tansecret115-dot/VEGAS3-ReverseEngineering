/* Module: pncrt.dll
   Function: _lfind
   Address: 78021f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl
_lfind(void *_Key,void *_Base,uint *_NumOfElements,uint _SizeOfElements,
      _PtFuncCompare *_PtFuncCompare)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x21f80  324  _lfind */
  uVar2 = 0;
  if (*_NumOfElements == 0) {
    return (void *)0x0;
  }
  do {
    iVar1 = (*_PtFuncCompare)(_Key,_Base);
    if (iVar1 == 0) {
      return _Base;
    }
    _Base = (void *)((int)_Base + _SizeOfElements);
    uVar2 = uVar2 + 1;
  } while (uVar2 < *_NumOfElements);
  return (void *)0x0;
}


