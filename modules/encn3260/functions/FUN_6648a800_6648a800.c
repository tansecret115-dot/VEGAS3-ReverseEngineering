/* Module: encn3260.dll
   Function: FUN_6648a800
   Address: 6648a800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648a800(void *this,undefined4 *param_1,undefined2 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  *param_1 = 0;
  *param_2 = 0;
  if (*(int *)((int)this + 0x15e) != 0 || *(int *)((int)this + 0x15a) != 0) {
    pcVar5 = *(char **)((int)this + 0xcc);
    uVar3 = 0xffffffff;
    pcVar2 = pcVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    uVar3 = 0xffffffff;
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
    *param_1 = pcVar2;
    if (*(int *)((int)this + 0x162) != 0) {
      *param_2 = *(undefined2 *)((int)this + 0x192);
      return;
    }
    *param_2 = *(undefined2 *)((int)this + 0x58);
  }
  return;
}


