/* Module: pncrt.dll
   Function: _strcmpi
   Address: 7800fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _strcmpi(char *_Str1,char *_Str2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar9;
  uint uVar10;
  uint uVar8;
  
                    /* 0xfdd0  455  _strcmpi
                       0xfdd0  459  _stricmp */
  iVar3 = __unguarded_readlc_active;
  if (DAT_78042438 == 0) {
    bVar6 = 0xff;
    do {
      do {
        cVar7 = '\0';
        if (bVar6 == 0) goto LAB_7800fe1e;
        bVar6 = *_Str2;
        _Str2 = _Str2 + 1;
        bVar5 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (bVar5 == bVar6);
      bVar4 = bVar6 + 0xbf + (-((byte)(bVar6 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar5 = bVar5 + 0xbf;
      bVar6 = bVar5 + (-(bVar5 < 0x1a) & 0x20U) + 0x41;
    } while (bVar6 == bVar4);
    cVar7 = (bVar6 < bVar4) * -2 + '\x01';
LAB_7800fe1e:
    uVar8 = (uint)cVar7;
  }
  else {
    LOCK();
    __unguarded_readlc_active = __unguarded_readlc_active + 1;
    UNLOCK();
    bVar2 = 0 < __setlc_active;
    if (bVar2) {
      LOCK();
      UNLOCK();
      __unguarded_readlc_active = iVar3;
      _lock(0x13);
    }
    uVar10 = (uint)bVar2;
    uVar8 = 0xff;
    uVar9 = 0;
    do {
      do {
        if ((char)uVar8 == '\0') goto LAB_7800fe7f;
        cVar7 = *_Str2;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar7);
        _Str2 = _Str2 + 1;
        cVar1 = *_Str1;
        uVar9 = CONCAT31((int3)(uVar9 >> 8),cVar1);
        _Str1 = _Str1 + 1;
      } while (cVar7 == cVar1);
      uVar9 = FUN_780109c0(uVar9);
      uVar8 = FUN_780109c0(uVar8);
    } while ((byte)uVar9 == (byte)uVar8);
    uVar9 = (uint)((byte)uVar9 < (byte)uVar8);
    uVar8 = (1 - uVar9) - (uint)(uVar9 != 0);
LAB_7800fe7f:
    if (uVar10 == 0) {
      LOCK();
      __unguarded_readlc_active = __unguarded_readlc_active + -1;
      UNLOCK();
    }
    else {
      _unlock(0x13);
    }
  }
  return uVar8;
}


