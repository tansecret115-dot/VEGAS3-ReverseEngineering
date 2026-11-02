/* Module: pncrt.dll
   Function: strtok
   Address: 7802cdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strtok(char *_Str,char *_Delim)

{
  byte bVar1;
  byte bVar2;
  DWORD *pDVar3;
  int iVar4;
  byte *pbVar5;
  byte local_20 [32];
  
                    /* 0x2cdc0  721  strtok */
  pDVar3 = FUN_78009cc0();
  pbVar5 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + 4;
  }
  do {
    bVar1 = *_Delim;
    _Delim = _Delim + 1;
    local_20[bVar1 >> 3] = local_20[bVar1 >> 3] | '\x01' << (bVar1 & 7);
  } while (bVar1 != 0);
  if (_Str == (char *)0x0) {
    _Str = (char *)pDVar3[6];
  }
  bVar1 = *_Str;
  bVar2 = local_20[bVar1 >> 3] & (byte)(1 << (bVar1 & 7));
  while ((bVar2 != 0 && (bVar1 != 0))) {
    bVar1 = _Str[1];
    _Str = _Str + 1;
    bVar2 = local_20[bVar1 >> 3] & (byte)(1 << (bVar1 & 7));
  }
  bVar1 = *_Str;
  pbVar5 = (byte *)_Str;
  do {
    if (bVar1 == 0) {
LAB_7802ce8f:
      pDVar3[6] = (DWORD)pbVar5;
      return (char *)(-(uint)((byte *)_Str != pbVar5) & (uint)_Str);
    }
    if ((local_20[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      goto LAB_7802ce8f;
    }
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
  } while( true );
}


