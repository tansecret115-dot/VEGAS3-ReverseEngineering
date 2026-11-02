/* Module: pncrt.dll
   Function: _setmaxstdio
   Address: 78025050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _setmaxstdio(int _Max)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* 0x25050  435  _setmaxstdio */
  if ((_Max < 0x14) || (0x800 < _Max)) {
    return -1;
  }
  _lock(2);
  iVar2 = DAT_7803fa78;
  if (DAT_7803fa78 < _Max) {
    pvVar1 = realloc(DAT_78042850,_Max * 4);
    if (pvVar1 != (void *)0x0) {
      if (DAT_7803fa78 < _Max) {
        puVar3 = (undefined4 *)((int)pvVar1 + DAT_7803fa78 * 4);
        for (iVar2 = _Max - DAT_7803fa78; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
      DAT_7803fa78 = _Max;
      DAT_78042850 = pvVar1;
      _unlock(2);
      return _Max;
    }
  }
  else {
    if (_Max == DAT_7803fa78) {
      _unlock(2);
      return iVar2;
    }
    while (iVar2 = iVar2 + -1, iVar4 = _Max, _Max <= iVar2) {
      pvVar1 = *(void **)((int)DAT_78042850 + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        if ((*(byte *)((int)pvVar1 + 0xc) & 0x83) != 0) {
          iVar4 = -1;
          break;
        }
        free(pvVar1);
      }
    }
    if (iVar4 == -1) goto LAB_78025158;
    pvVar1 = realloc(DAT_78042850,_Max * 4);
    if (pvVar1 != (void *)0x0) {
      DAT_7803fa78 = _Max;
      DAT_78042850 = pvVar1;
      _unlock(2);
      return iVar4;
    }
  }
  iVar4 = -1;
LAB_78025158:
  _unlock(2);
  return iVar4;
}


