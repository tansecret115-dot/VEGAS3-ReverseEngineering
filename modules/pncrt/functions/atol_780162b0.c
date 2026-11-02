/* Module: pncrt.dll
   Function: atol
   Address: 780162b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl atol(char *_Str)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint _C;
  int iVar4;
  byte *pbVar5;
  
  while( true ) {
    if (__mb_cur_max < 2) {
      uVar2 = (byte)_pctype[(uint)(byte)*_Str * 2] & 8;
    }
    else {
      uVar2 = _isctype((uint)(byte)*_Str,8);
    }
    if (uVar2 == 0) break;
    _Str = _Str + 1;
  }
  uVar2 = (uint)(byte)*_Str;
  pbVar5 = (byte *)(_Str + 1);
  if ((uVar2 == 0x2d) || (_C = uVar2, uVar2 == 0x2b)) {
    _C = (uint)*pbVar5;
    pbVar5 = (byte *)(_Str + 2);
  }
  iVar4 = 0;
  while( true ) {
    if (__mb_cur_max < 2) {
      uVar3 = (byte)_pctype[_C * 2] & 4;
    }
    else {
      uVar3 = _isctype(_C,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    iVar4 = (_C - 0x30) + iVar4 * 10;
    _C = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


