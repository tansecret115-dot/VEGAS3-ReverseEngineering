/* Module: pncrt.dll
   Function: _memicmp
   Address: 7802b500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _memicmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar7;
  
                    /* 0x2b500  395  _memicmp */
  iVar5 = __unguarded_readlc_active;
  iVar9 = 0;
  if (_Size != 0) {
    if (DAT_78042438 == 0) {
      do {
        bVar6 = *(byte *)_Buf1;
        _Buf1 = (void *)((int)_Buf1 + 1);
        bVar1 = *(byte *)_Buf2;
        uVar8 = (uint)CONCAT11(bVar6,bVar1);
        _Buf2 = (void *)((int)_Buf2 + 1);
        if (bVar6 != bVar1) {
          if ((0x40 < bVar6) && (bVar6 < 0x5b)) {
            uVar8 = (uint)CONCAT11(bVar6 + 0x20,bVar1);
          }
          uVar7 = (undefined2)uVar8;
          bVar6 = (byte)uVar8;
          if ((0x40 < bVar6) && (bVar6 < 0x5b)) {
            uVar7 = (undefined2)CONCAT31((int3)(uVar8 >> 8),bVar6 + 0x20);
          }
          bVar6 = (byte)((ushort)uVar7 >> 8);
          if (bVar6 != (byte)uVar7) {
            if (bVar6 < (byte)uVar7) {
              return -1;
            }
            return 1;
          }
        }
        _Size = _Size - 1;
      } while (_Size != 0);
      iVar9 = 0;
    }
    else {
      LOCK();
      __unguarded_readlc_active = __unguarded_readlc_active + 1;
      UNLOCK();
      bVar4 = 0 < __setlc_active;
      if (bVar4) {
        LOCK();
        UNLOCK();
        __unguarded_readlc_active = iVar5;
        _lock(0x13);
      }
      uVar11 = (uint)bVar4;
      uVar10 = 0;
      uVar8 = 0;
      do {
        cVar2 = *(char *)_Buf1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar2);
        _Buf1 = (void *)((int)_Buf1 + 1);
        cVar3 = *(char *)_Buf2;
        uVar10 = CONCAT31((int3)(uVar10 >> 8),cVar3);
        _Buf2 = (void *)((int)_Buf2 + 1);
        if (cVar2 != cVar3) {
          uVar10 = FUN_780109c0(uVar10);
          uVar8 = FUN_780109c0(uVar8);
          if ((byte)uVar8 != (byte)uVar10) {
            iVar9 = -1;
            if ((byte)uVar10 <= (byte)uVar8) {
              iVar9 = 1;
            }
            goto LAB_7802b5ce;
          }
        }
        _Size = _Size - 1;
      } while (_Size != 0);
      iVar9 = 0;
LAB_7802b5ce:
      if (uVar11 == 0) {
        LOCK();
        __unguarded_readlc_active = __unguarded_readlc_active + -1;
        UNLOCK();
      }
      else {
        _unlock(0x13);
      }
    }
  }
  return iVar9;
}


