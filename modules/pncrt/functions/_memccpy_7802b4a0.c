/* Module: pncrt.dll
   Function: _memccpy
   Address: 7802b4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl _memccpy(void *_Dst,void *_Src,int _Val,size_t _Size)

{
  char cVar1;
  char cVar3;
  uint uVar2;
  
                    /* 0x2b4a0  394  _memccpy */
  if (_Size != 0) {
    uVar2 = (_Val & 0xffU) << 8;
    if ((_Size & 1) == 0) goto LAB_7802b4cb;
    cVar1 = *(char *)_Src;
    uVar2 = (uint)CONCAT11((char)_Val,cVar1);
    *(char *)_Dst = cVar1;
    _Dst = (void *)((int)_Dst + 1);
    if (cVar1 == (char)_Val) {
      return _Dst;
    }
    _Src = (char *)((int)_Src + 1);
    for (_Size = _Size - 1; _Size != 0; _Size = _Size - 2) {
LAB_7802b4cb:
      cVar1 = *(char *)_Src;
      cVar3 = (char)(uVar2 >> 8);
      if (cVar1 == cVar3) {
        *(char *)_Dst = cVar1;
        return (char *)((int)_Dst + 1);
      }
      *(char *)_Dst = cVar1;
      cVar1 = *(char *)((int)_Src + 1);
      uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
      *(char *)((int)_Dst + 1) = cVar1;
      _Dst = (void *)((int)_Dst + 2);
      if (cVar1 == cVar3) {
        return _Dst;
      }
      _Src = (char *)((int)_Src + 2);
    }
  }
  return (void *)0x0;
}


