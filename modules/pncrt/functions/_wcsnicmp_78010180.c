/* Module: pncrt.dll
   Function: _wcsnicmp
   Address: 78010180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  wchar_t wVar1;
  int iVar2;
  size_t extraout_EAX;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
                    /* 0x10180  504  _wcsnicmp */
  iVar2 = 0;
  if (_MaxCount != 0) {
    if (DAT_78042438 == 0) {
      do {
        wVar1 = *_Str1;
        uVar4 = (uint)(ushort)wVar1;
        if (((ushort)wVar1 < 0x5b) && (0x40 < (ushort)wVar1)) {
          uVar4 = uVar4 + 0x20;
        }
        wVar1 = *_Str2;
        uVar5 = (uint)(ushort)wVar1;
        if (((ushort)wVar1 < 0x5b) && (0x40 < (ushort)wVar1)) {
          uVar5 = uVar5 + 0x20;
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        _MaxCount = _MaxCount - 1;
      } while (((_MaxCount != 0) && ((short)uVar4 != 0)) && ((short)uVar4 == (short)uVar5));
    }
    else {
      InterlockedIncrement(&__unguarded_readlc_active);
      bVar6 = __setlc_active == 0;
      if (bVar6) {
        sVar3 = 0;
      }
      else {
        InterlockedDecrement(&__unguarded_readlc_active);
        _lock(0x13);
        sVar3 = extraout_EAX;
      }
      do {
        wVar1 = *_Str1;
        _Str1 = _Str1 + 1;
        uVar4 = FUN_780108a0(CONCAT22((short)(sVar3 >> 0x10),wVar1));
        wVar1 = *_Str2;
        _Str2 = _Str2 + 1;
        uVar5 = FUN_780108a0(CONCAT22((short)(uVar4 >> 0x10),wVar1));
        sVar3 = _MaxCount - 1;
        if ((sVar3 == 0) || ((short)uVar4 == 0)) break;
        _MaxCount = sVar3;
      } while ((short)uVar4 == (short)uVar5);
      if (bVar6) {
        InterlockedDecrement(&__unguarded_readlc_active);
      }
      else {
        _unlock(0x13);
      }
    }
    iVar2 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
  }
  return iVar2;
}


