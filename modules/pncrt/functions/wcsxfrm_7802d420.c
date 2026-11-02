/* Module: pncrt.dll
   Function: wcsxfrm
   Address: 7802d420
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl wcsxfrm(wchar_t *_Dst,wchar_t *_Src,size_t _MaxCount)

{
  LPWSTR _Memory;
  int iVar1;
  UINT UVar2;
  size_t sVar3;
  bool bVar4;
  WCHAR local_10 [8];
  
                    /* 0x2d420  765  wcsxfrm */
  sVar3 = 0x7fffffff;
  if (DAT_78042434 != 0) {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar4 = __setlc_active != 0;
    if (bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    if (DAT_78042434 != 0) {
      _Memory = malloc(_MaxCount);
      if ((_Memory != (LPWSTR)0x0) &&
         (iVar1 = __crtGetLocaleInfoW(DAT_78042434,0xb,local_10,8,0), iVar1 != 0)) {
        UVar2 = wcstol(local_10,(wchar_t **)0x0,10);
        sVar3 = FUN_7800d530(DAT_78042434,0x400,_Src,(char *)0xffffffff,_Memory,_MaxCount,UVar2);
        if (sVar3 == 0) {
          sVar3 = FUN_7800d530(DAT_78042434,0x400,_Src,(char *)0xffffffff,(LPWSTR)0x0,0,UVar2);
          if (sVar3 == 0) {
            sVar3 = 0x7fffffff;
            goto LAB_7802d57f;
          }
        }
        else {
          iVar1 = 0;
          if (0 < (int)sVar3) {
            do {
              *_Dst = (ushort)*(byte *)(iVar1 + (int)_Memory);
              iVar1 = iVar1 + 1;
              _Dst = _Dst + 1;
            } while (iVar1 < (int)sVar3);
          }
        }
        sVar3 = sVar3 - 1;
      }
LAB_7802d57f:
      if (!bVar4) {
        InterlockedDecrement(&__unguarded_readlc_active);
        free(_Memory);
        return sVar3;
      }
      _unlock(0x13);
      free(_Memory);
      return sVar3;
    }
    if (bVar4) {
      _unlock(0x13);
    }
    else {
      InterlockedDecrement(&__unguarded_readlc_active);
    }
  }
  wcsncpy(_Dst,_Src,_MaxCount);
  sVar3 = wcslen(_Src);
  return sVar3;
}


