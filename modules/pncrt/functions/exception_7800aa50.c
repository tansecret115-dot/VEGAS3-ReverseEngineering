/* Module: pncrt.dll
   Function: exception
   Address: 7800aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall exception::exception(class exception const &) */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
                    /* 0xaa50  8  ??0exception@@QAE@ABV0@@Z */
  *(undefined ***)this = &_vftable_;
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar4 = 0xffffffff;
    pcVar3 = *(char **)(param_1 + 4);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = operator_new(~uVar4);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar6 = *(char **)(param_1 + 4);
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar3 + 1;
      }
      return this;
    }
  }
  return this;
}


