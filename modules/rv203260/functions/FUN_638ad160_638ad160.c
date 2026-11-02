/* Module: rv203260.dll
   Function: FUN_638ad160
   Address: 638ad160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_638ad160(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar4 = ~uVar3 - 1;
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = param_2;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  while ((iVar4 != 0 && (iVar1 = iVar4 + -1, iVar4 = iVar4 + -1, param_2[iVar1] != '.'))) {
    param_2[iVar4] = '\0';
  }
  param_2[iVar4] = '\0';
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_1 + 1;
      cVar2 = *param_1;
      param_1 = pcVar6;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    pcVar7 = param_2;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_638b5098;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  do {
    pcVar6 = param_2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar6;
  } while (cVar2 != '\0');
  pcVar7 = pcVar7 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}


