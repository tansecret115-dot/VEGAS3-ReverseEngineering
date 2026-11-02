/* Module: rmbe3260.dll
   Function: FUN_660107a0
   Address: 660107a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660107a0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar7 = param_2;
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  param_2 = (char *)0x1;
  do {
    pcVar4 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar4 + -uVar5;
  pcVar4 = pcVar2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar7 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    while (*pcVar7 != '\0') {
      iVar3 = isspace((int)*pcVar7);
      while (iVar3 != 0) {
        pcVar4 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        iVar3 = isspace((int)*pcVar4);
      }
      pcVar4 = strchr(pcVar7,0x3b);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + 1;
      }
      if (param_2 == (char *)0x1) {
        FUN_6605b970((void *)(param_1 + 4),pcVar7);
      }
      else {
        FUN_660143a0((undefined4 *)(param_1 + 0x10 + *(int *)(param_1 + 0x100) * 8),
                     (undefined4 *)pcVar7);
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      }
      param_2 = param_2 + 1;
      if ((0x1d < *(uint *)(param_1 + 0x100)) || (pcVar7 = pcVar4, pcVar4 == (char *)0x0)) break;
    }
  }
  operator_delete(pcVar2);
  return 0;
}


