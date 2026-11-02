/* Module: encn3260.dll
   Function: FUN_664cd8c0
   Address: 664cd8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __fastcall FUN_664cd8c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  ushort uVar8;
  
  pcVar4 = *(char **)(param_1 + 0x54);
  if (pcVar4 == (char *)0x0) {
    uVar8 = 1;
    puVar3 = FUN_66481080();
    pcVar4 = (char *)FUN_664cbdc0(puVar3,uVar8);
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
      pcVar4 = (char *)FUN_664cd770(param_1);
      uVar8 = 1;
      puVar3 = FUN_66481080();
      FUN_664cbd30(puVar3,uVar8,pcVar4);
      uVar8 = 1;
      puVar3 = FUN_66481080();
      pcVar4 = (char *)FUN_664cbdc0(puVar3,uVar8);
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        return (char *)0x0;
      }
    }
    uVar5 = 0xffffffff;
    pcVar2 = pcVar4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar4 = pcVar7 + -uVar5;
    pcVar7 = pcVar2;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    return pcVar2;
  }
  uVar5 = 0xffffffff;
  pcVar2 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar7 + -uVar5;
  pcVar7 = pcVar2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return pcVar2;
}


