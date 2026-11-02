/* Module: pncrt.dll
   Function: name
   Address: 78008330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: char const * __thiscall type_info::name(void)const  */

char * __thiscall type_info::name(type_info *this)

{
  char cVar1;
  char *_Memory;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
                    /* 0x8330  41  ?name@type_info@@QBEPBDXZ */
  if (*(int *)(this + 4) == 0) {
    _Memory = __unDName((undefined1 *)0x0,(char *)(this + 9),0,0x7800ade0,free,0x2800);
    uVar3 = 0xffffffff;
    pcVar2 = _Memory;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = _Memory + (~uVar3 - 2);
    cVar1 = _Memory[~uVar3 - 2];
    while (cVar1 == ' ') {
      *pcVar2 = '\0';
      pcVar5 = pcVar2 + -1;
      pcVar2 = pcVar2 + -1;
      cVar1 = *pcVar5;
    }
    _lock(0x1b);
    uVar3 = 0xffffffff;
    pcVar2 = _Memory;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = malloc(~uVar3);
    uVar3 = 0xffffffff;
    *(char **)(this + 4) = pcVar2;
    pcVar5 = _Memory;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar2 = pcVar2 + 1;
    }
    free(_Memory);
    _unlock(0x1b);
  }
  return *(char **)(this + 4);
}


