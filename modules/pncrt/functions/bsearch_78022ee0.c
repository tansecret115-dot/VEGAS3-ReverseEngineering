/* Module: pncrt.dll
   Function: bsearch
   Address: 78022ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl
bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
       _PtFuncCompare *_PtFuncCompare)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  
                    /* 0x22ee0  585  bsearch */
  pvVar4 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  bVar1 = _Base <= pvVar4;
  pvVar6 = _Base;
  _Base = pvVar4;
  if (bVar1) {
    while (uVar5 = _NumOfElements >> 1, uVar5 != 0) {
      uVar2 = uVar5;
      if ((_NumOfElements & 1) == 0) {
        uVar2 = uVar5 - 1;
      }
      pvVar4 = (void *)(_SizeOfElements * uVar2 + (int)pvVar6);
      iVar3 = (*_PtFuncCompare)(_Key,pvVar4);
      if (iVar3 == 0) {
        return pvVar4;
      }
      if (iVar3 < 0) {
        _Base = (void *)((int)pvVar4 - _SizeOfElements);
        if ((_NumOfElements & 1) == 0) {
          uVar5 = uVar5 - 1;
        }
      }
      else {
        pvVar6 = (void *)((int)pvVar4 + _SizeOfElements);
      }
      _NumOfElements = uVar5;
      if (_Base < pvVar6) {
        return (void *)0x0;
      }
    }
    if (_NumOfElements != 0) {
      iVar3 = (*_PtFuncCompare)(_Key,pvVar6);
      return (void *)(~-(uint)(iVar3 != 0) & (uint)pvVar6);
    }
  }
  return (void *)0x0;
}


