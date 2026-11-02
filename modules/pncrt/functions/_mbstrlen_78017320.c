/* Module: pncrt.dll
   Function: _mbstrlen
   Address: 78017320
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _mbstrlen(char *_Str)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  bool bVar7;
  
                    /* 0x17320  392  _mbstrlen */
  if (__mb_cur_max != 1) {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar7 = __setlc_active != 0;
    if (bVar7) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    iVar4 = MultiByteToWideChar(__lc_codepage,9,_Str,-1,(LPWSTR)0x0,0);
    if (iVar4 != 0) {
      bVar3 = *_Str;
      sVar6 = 0;
      for (; (bVar3 != 0 &&
             (((_pctype[(uint)bVar3 * 2 + 1] & 0x80) == 0 ||
              (pcVar1 = _Str + 1, _Str = _Str + 1, *pcVar1 != '\0')))); _Str = _Str + 1) {
        bVar3 = _Str[1];
        sVar6 = sVar6 + 1;
      }
      if (bVar7) {
        _unlock(0x13);
        return sVar6;
      }
      InterlockedDecrement(&__unguarded_readlc_active);
      return sVar6;
    }
    if (bVar7) {
      _unlock(0x13);
      return 0xffffffff;
    }
    InterlockedDecrement(&__unguarded_readlc_active);
    return 0xffffffff;
  }
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *_Str;
    _Str = _Str + 1;
  } while (cVar2 != '\0');
  return ~uVar5 - 1;
}


