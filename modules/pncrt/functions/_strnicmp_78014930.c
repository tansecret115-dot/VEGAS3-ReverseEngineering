/* Module: pncrt.dll
   Function: _strnicmp
   Address: 78014930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
                    /* 0x14930  463  _strnicmp */
  iVar2 = __unguarded_readlc_active;
  iVar6 = 0;
  if (_MaxCount != 0) {
    if (DAT_78042438 == 0) {
      do {
        bVar3 = *_Str1;
        cVar1 = *_Str2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_7801498f;
        _MaxCount = _MaxCount - 1;
      } while (_MaxCount != 0);
      iVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_7801498f:
        iVar6 = -1;
        if (!bVar8) {
          iVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      __unguarded_readlc_active = __unguarded_readlc_active + 1;
      UNLOCK();
      bVar8 = 0 < __setlc_active;
      if (bVar8) {
        LOCK();
        UNLOCK();
        __unguarded_readlc_active = iVar2;
        _lock(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar7 = 0;
      uVar5 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*_Str1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*_Str2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        uVar7 = FUN_780109c0(uVar7);
        uVar5 = FUN_780109c0(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_78014a05;
        _MaxCount = _MaxCount - 1;
      } while (_MaxCount != 0);
      iVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_78014a05:
        iVar6 = -1;
        if (!bVar8) {
          iVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        __unguarded_readlc_active = __unguarded_readlc_active + -1;
        UNLOCK();
      }
      else {
        _unlock(0x13);
      }
    }
  }
  return iVar6;
}


