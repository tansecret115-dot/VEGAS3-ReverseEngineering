/* Module: rmbe3260.dll
   Function: FUN_6602aab0
   Address: 6602aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_6602aab0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_18 [3];
  int local_c;
  undefined4 local_8;
  
  pcVar1 = (char *)(param_1 + 0x3c);
  *pcVar1 = '\0';
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    local_c = *(int *)(iVar3 + 0x10);
    local_8 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = FUN_66004760();
    if (iVar3 != 0) {
      FUN_66051690(&local_c);
    }
    puVar4 = FUN_66016940(local_18,local_c,local_8);
    uVar5 = 0xffffffff;
    pcVar7 = (char *)*puVar4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = pcVar1;
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
    FUN_6605b770(local_18);
  }
  return pcVar1;
}


