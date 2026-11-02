/* Module: pncrt.dll
   Function: _mbctolower
   Address: 780206b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbctolower(uint _Ch)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  BOOL unaff_EBX;
  uint local_8 [2];
  
                    /* 0x206b0  348  _mbctolower */
  uVar1 = _Ch;
  if (_Ch < 0x100) {
    if ((*(byte *)((int)&_mbctype + _Ch + 1) & 0x10) == 0x10) {
      return (uint)(byte)(&_mbcasemap)[_Ch];
    }
  }
  else {
    bVar2 = (byte)(_Ch >> 8);
    _Ch = CONCAT31(CONCAT21(_Ch._2_2_,(char)_Ch),bVar2);
    if ((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) != 0) {
      iVar3 = __crtLCMapStringA(DAT_78042404,(LPCWSTR)0x100,(DWORD)&_Ch,(LPCSTR)0x2,(int)local_8,
                                (LPSTR)0x2,DAT_78042400,1,unaff_EBX);
      if (iVar3 != 0) {
        return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
      }
    }
  }
  return uVar1;
}


