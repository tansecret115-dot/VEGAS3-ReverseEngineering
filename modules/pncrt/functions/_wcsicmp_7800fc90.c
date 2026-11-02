/* Module: pncrt.dll
   Function: _wcsicmp
   Address: 7800fc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  uint extraout_EAX;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
                    /* 0xfc90  500  _wcsicmp */
  if (DAT_78042438 == 0) {
    do {
      wVar1 = *_Str1;
      uVar2 = (uint)(ushort)wVar1;
      if (((ushort)wVar1 < 0x5b) && (0x40 < (ushort)wVar1)) {
        uVar2 = uVar2 + 0x20;
      }
      wVar1 = *_Str2;
      uVar3 = (uint)(ushort)wVar1;
      if (((ushort)wVar1 < 0x5b) && (0x40 < (ushort)wVar1)) {
        uVar3 = uVar3 + 0x20;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    } while (((short)uVar2 != 0) && ((short)uVar2 == (short)uVar3));
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar4 = __setlc_active == 0;
    if (bVar4) {
      uVar3 = 0;
    }
    else {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
      uVar3 = extraout_EAX;
    }
    do {
      wVar1 = *_Str1;
      _Str1 = _Str1 + 1;
      uVar2 = FUN_780108a0(CONCAT22((short)(uVar3 >> 0x10),wVar1));
      wVar1 = *_Str2;
      _Str2 = _Str2 + 1;
      uVar3 = FUN_780108a0(CONCAT22((short)(uVar2 >> 0x10),wVar1));
      if ((short)uVar2 == 0) break;
    } while ((short)uVar2 == (short)uVar3);
    if (bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
    }
    else {
      _unlock(0x13);
    }
  }
  return (uVar2 & 0xffff) - (uVar3 & 0xffff);
}


