/* Module: rmbe3260.dll
   Function: FUN_6602a7a0
   Address: 6602a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_6602a7a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_10 [3];
  
  puVar2 = FUN_66016940(local_10,*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar3 = 0xffffffff;
  pcVar5 = (char *)*puVar2;
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
  pcVar6 = (char *)(param_1 + 0x10);
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
  FUN_6605b770(local_10);
  return (char *)(param_1 + 0x10);
}


