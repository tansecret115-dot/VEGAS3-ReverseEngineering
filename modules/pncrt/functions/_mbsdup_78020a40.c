/* Module: pncrt.dll
   Function: _mbsdup
   Address: 78020a40
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _mbsdup(char *_Src)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
                    /* 0x20a40  360  _mbsdup
                       0x20a40  457  _strdup */
  if (_Src != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar2 = _Src;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = malloc(~uVar3);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = _Src;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = _Src + 1;
        cVar1 = *_Src;
        _Src = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = pcVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return pcVar2;
    }
  }
  return (char *)0x0;
}


