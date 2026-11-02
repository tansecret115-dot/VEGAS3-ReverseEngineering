/* Module: pncrt.dll
   Function: _mbcjmstojis
   Address: 78020570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbcjmstojis(uint _Ch)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x20570  344  _mbcjmstojis */
  if (DAT_78042400 != 0x3a4) {
    return _Ch;
  }
  uVar2 = _Ch >> 8 & 0xff;
  uVar3 = _Ch & 0xff;
  if (((*(byte *)((int)&_mbctype + (_Ch >> 8 & 0xff) + 1) & 4) != 0) &&
     ((*(byte *)((int)&_mbctype + uVar3 + 1) & 8) != 0)) {
    iVar1 = uVar2 - ((-(uint)(uVar2 < 0xa0) & 0xffffffc0) + 0xc1);
    if (uVar3 < 0x9f) {
      uVar2 = uVar3 - ((0x7e < uVar3) + 0x1f) | iVar1 * 0x200 + 0x2100U;
    }
    else {
      uVar2 = (iVar1 + 0x11) * 0x200 | uVar3 - 0x7e;
    }
    if ((((uVar2 < 0x7e7f) && (0x2120 < uVar2)) && ((uVar2 & 0xff) < 0x7f)) &&
       (0x20 < (uVar2 & 0xff))) {
      return uVar2;
    }
  }
  return 0;
}


