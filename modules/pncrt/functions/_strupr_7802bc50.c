/* Module: pncrt.dll
   Function: _strupr
   Address: 7802bc50
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _strupr(char *_Str)

{
  char cVar1;
  LPSTR _LpDestStr;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  BOOL unaff_EDI;
  char *pcVar7;
  bool bVar8;
  
                    /* 0x2bc50  469  _strupr */
  pcVar5 = (char *)0x0;
  if (DAT_78042438 == (_locale_t)0x0) {
    pcVar5 = _Str;
    if (*_Str != '\0') {
      do {
        cVar1 = *_Str;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *_Str = cVar1 + -0x20;
        }
        pcVar6 = _Str + 1;
        _Str = _Str + 1;
      } while (*pcVar6 != '\0');
      return pcVar5;
    }
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar8 = __setlc_active != 0;
    if (bVar8) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    if (DAT_78042438 == (_locale_t)0x0) {
      if (bVar8) {
        _unlock(0x13);
      }
      else {
        InterlockedDecrement(&__unguarded_readlc_active);
      }
      pcVar5 = _Str;
      if (*_Str != '\0') {
        do {
          cVar1 = *_Str;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *_Str = cVar1 + -0x20;
          }
          pcVar6 = _Str + 1;
          _Str = _Str + 1;
        } while (*pcVar6 != '\0');
        return pcVar5;
      }
    }
    else {
      _LpDestStr = (LPSTR)__crtLCMapStringA(DAT_78042438,(LPCWSTR)0x200,(DWORD)_Str,
                                            (LPCSTR)0xffffffff,0,(LPSTR)0x0,0,1,unaff_EDI);
      if (((_LpDestStr != (LPSTR)0x0) &&
          (pcVar5 = malloc((size_t)_LpDestStr), pcVar5 != (char *)0x0)) &&
         (iVar2 = __crtLCMapStringA(DAT_78042438,(LPCWSTR)0x200,(DWORD)_Str,(LPCSTR)0xffffffff,
                                    (int)pcVar5,_LpDestStr,0,1,unaff_EDI), iVar2 != 0)) {
        uVar3 = 0xffffffff;
        pcVar6 = pcVar5;
        do {
          pcVar7 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar7 + -uVar3;
        pcVar7 = _Str;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      if (bVar8) {
        _unlock(0x13);
        free(pcVar5);
        return _Str;
      }
      InterlockedDecrement(&__unguarded_readlc_active);
      free(pcVar5);
    }
  }
  return _Str;
}


