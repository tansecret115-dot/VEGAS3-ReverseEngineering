/* Module: pncrt.dll
   Function: _atoi64
   Address: 78016360
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl _atoi64(char *_String)

{
  uint uVar1;
  uint uVar2;
  uint _C;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  
  while( true ) {
    if (__mb_cur_max < 2) {
      uVar1 = (byte)_pctype[(uint)(byte)*_String * 2] & 8;
    }
    else {
      uVar1 = _isctype((uint)(byte)*_String,8);
    }
    if (uVar1 == 0) break;
    _String = _String + 1;
  }
  uVar1 = (uint)(byte)*_String;
  pbVar5 = (byte *)(_String + 1);
  if ((uVar1 == 0x2d) || (_C = uVar1, uVar1 == 0x2b)) {
    _C = (uint)*pbVar5;
    pbVar5 = (byte *)(_String + 2);
  }
  lVar6 = 0;
  while( true ) {
    iVar4 = (int)((ulonglong)lVar6 >> 0x20);
    uVar3 = (uint)lVar6;
    if (__mb_cur_max < 2) {
      uVar2 = (byte)_pctype[_C * 2] & 4;
    }
    else {
      uVar2 = _isctype(_C,4);
    }
    if (uVar2 == 0) break;
    lVar6 = __allmul(uVar3,iVar4,10,0);
    lVar6 = lVar6 + (int)(_C - 0x30);
    _C = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    return CONCAT44(-(iVar4 + (uint)(uVar3 != 0)),-uVar3);
  }
  return lVar6;
}


