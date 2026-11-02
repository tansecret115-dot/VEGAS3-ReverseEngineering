/* Module: rmme3260.dll
   Function: FUN_66230d60
   Address: 66230d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66230d60(int param_1,char *param_2,undefined2 param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if (*(void **)(param_1 + 0x77) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x77));
      *(undefined4 *)(param_1 + 0x77) = 0;
    }
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    *(char **)(param_1 + 0x77) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      return 0x8007000e;
    }
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
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
    *(undefined2 *)(param_1 + 0x75) = param_3;
  }
  return 0;
}


