/* Module: rmbe3260.dll
   Function: FUN_66012a00
   Address: 66012a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66012a00(int param_1,char *param_2,char *param_3,undefined4 *param_4,char *param_5,char *param_6
            ,int param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) || (param_4 == (undefined4 *)0x0)) ||
     ((param_5 == (char *)0x0 || (param_6 == (char *)0x0)))) {
    return 0x80004003;
  }
  if (((param_7 <= *(int *)(*(char **)(param_1 + 0x1c) + -8)) ||
      (param_7 <= *(int *)(*(int *)(param_1 + 0x28) + -8))) ||
     ((param_7 <= *(int *)(*(int *)(param_1 + 0x38) + -8) ||
      (param_7 <= *(int *)(*(int *)(param_1 + 0x44) + -8))))) {
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_66075004;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_66075004;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_3 = param_3 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_66075004;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_5 = param_5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_5 = param_5 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_66075004;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_6 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_6 = param_6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_6 = param_6 + 1;
    }
    return 0x8004000d;
  }
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(param_1 + 0x1c);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_2 = param_2 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(param_1 + 0x28);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_3 = param_3 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_3 = param_3 + 1;
  }
  *param_4 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(param_1 + 0x38);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_5 = param_5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_5 = param_5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(param_1 + 0x44);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_6 = param_6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_6 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_6 = param_6 + 1;
  }
  return 0;
}


