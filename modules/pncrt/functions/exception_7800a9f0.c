/* Module: pncrt.dll
   Function: exception
   Address: 7800a9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall exception::exception(char const * const &) */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
                    /* 0xa9f0  7  ??0exception@@QAE@ABQBD@Z */
  uVar3 = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  pcVar2 = *param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar3);
  *(char **)(this + 4) = pcVar2;
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = *param_1;
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
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


