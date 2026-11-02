/* Module: pncrt.dll
   Function: _mbbtype
   Address: 78020470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbbtype(uchar _Ch,int _CType)

{
  byte bVar1;
  int iVar2;
  
                    /* 0x20470  340  _mbbtype */
  iVar2 = _CType + 1;
  switch(iVar2) {
  case 0:
  case 1:
  case 3:
    bVar1 = *(byte *)((int)&_mbctype + _Ch + 1);
    if ((bVar1 & 4) != 0) {
      return 1;
    }
    if (((*(ushort *)(&DAT_7803f56a + (uint)_Ch * 2) & 0x157) == 0) && ((bVar1 & 3) == 0)) {
      return -1;
    }
    iVar2 = 0;
    break;
  case 2:
    return (-(uint)((*(byte *)((int)&_mbctype + _Ch + 1) & 8) != 0) & 3) - 1;
  }
  return iVar2;
}


