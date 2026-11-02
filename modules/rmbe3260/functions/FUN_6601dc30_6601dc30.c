/* Module: rmbe3260.dll
   Function: FUN_6601dc30
   Address: 6601dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6601dc30(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_38 [5];
  char *local_24 [3];
  int local_18 [3];
  int local_c;
  char *local_8;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    return -0x7ffbfff9;
  }
  local_c = param_1;
  FUN_6605b650(local_24);
  iVar3 = FUN_6604f5a0(*(void **)(param_1 + 0x1b4),(int *)0x0,local_24,0);
  FUN_6605b650(local_18);
  if ((-1 < iVar3) && (*(int *)(local_24[0] + -8) != 0)) {
    uVar5 = 0xffffffff;
    pcVar4 = local_24[0];
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = local_24[0];
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = local_24[0] + 1;
      cVar1 = *local_24[0];
      local_24[0] = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = pcVar4;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_8 = pcVar4;
    FUN_660522e0(local_38);
    pcVar7 = pcVar4;
    while ((pcVar8 = pcVar4, pcVar8 != (char *)0x0 && (pcVar7 = local_8, *pcVar8 != '\0'))) {
      iVar3 = isspace((int)*pcVar8);
      while (iVar3 != 0) {
        pcVar4 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        iVar3 = isspace((int)*pcVar4);
      }
      pcVar4 = strchr(pcVar8,0x3b);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + 1;
      }
      pcVar7 = local_8;
      if (((*pcVar8 != '\0') &&
          (bVar2 = FUN_6604e620(pcVar8), pcVar7 = local_8, CONCAT31(extraout_var,bVar2) != 0)) &&
         (iVar3 = FUN_66052ae0(local_38,pcVar8), pcVar7 = local_8, iVar3 == 0)) {
        FUN_6605bba0(local_18,pcVar8);
        FUN_6605bba0(local_18,&DAT_6606dbdc);
        pcVar7 = local_8;
      }
    }
    operator_delete(pcVar7);
    iVar3 = FUN_6604f6a0(*(void **)(local_c + 0x1b4),0,local_18,0);
    FUN_66052300(local_38);
  }
  FUN_6605b770(local_18);
  FUN_6605b770((int *)local_24);
  return iVar3;
}


