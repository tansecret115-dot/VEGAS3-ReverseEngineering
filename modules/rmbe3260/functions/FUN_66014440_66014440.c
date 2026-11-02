/* Module: rmbe3260.dll
   Function: FUN_66014440
   Address: 66014440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66014440(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar5 = 0xffffffff;
  pcVar7 = PTR_s_sipr2_sipr0_sipr1_sipr3_cook7_co_6606c097_1_6606cd38;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  pcVar7 = PTR_s_sipr2_sipr0_sipr1_sipr3_cook7_co_6606c097_1_6606cd38;
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
      FUN_660143a0((undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x30c) * 8),
                   (undefined4 *)pcVar7);
      uVar5 = *(int *)(param_1 + 0x30c) + 1;
      *(uint *)(param_1 + 0x30c) = uVar5;
      if ((0x4f < uVar5) || (pcVar7 = pcVar4, pcVar4 == (char *)0x0)) break;
    }
  }
  operator_delete(pcVar2);
  return 0;
}


