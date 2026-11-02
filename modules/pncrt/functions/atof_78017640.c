/* Module: pncrt.dll
   Function: atof
   Address: 78017640
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl atof(char *_String)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint local_18 [6];
  
  while( true ) {
    if (__mb_cur_max < 2) {
      uVar2 = (byte)_pctype[(uint)(byte)*_String * 2] & 8;
    }
    else {
      uVar2 = _isctype((uint)(byte)*_String,8);
    }
    if (uVar2 == 0) break;
    _String = _String + 1;
  }
  iVar3 = -1;
  pbVar4 = (byte *)_String;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  iVar3 = FUN_780300d0(local_18,(byte *)_String);
  return *(double *)(iVar3 + 0x10);
}


