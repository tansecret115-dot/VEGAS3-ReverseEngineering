/* Module: pncrt.dll
   Function: _mbcjistojms
   Address: 78020500
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbcjistojms(uint _Ch)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x20500  343  _mbcjistojms */
  if (DAT_78042400 != 0x3a4) {
    return _Ch;
  }
  uVar2 = _Ch >> 8 & 0xff;
  uVar1 = _Ch & 0xff;
  if ((((0x20 < uVar2) && (uVar2 < 0x7f)) && (0x20 < uVar1)) && (uVar1 < 0x7f)) {
    if ((_Ch & 0x100) == 0) {
      uVar1 = uVar1 + 0x7e;
    }
    else if (uVar1 < 0x60) {
      uVar1 = uVar1 + 0x1f;
    }
    else {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = uVar2 - 0x21 >> 1;
    uVar3 = uVar2 + 0x81;
    if (0x9f < uVar3) {
      uVar3 = uVar2 + 0xc1;
    }
    return uVar3 << 8 | uVar1;
  }
  return 0;
}


