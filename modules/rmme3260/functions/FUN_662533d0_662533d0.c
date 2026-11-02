/* Module: rmme3260.dll
   Function: FUN_662533d0
   Address: 662533d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662533d0(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar2 = operator_new(0xc);
  puVar2[2] = 0;
  puVar2[1] = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  uVar4 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = operator_new(~uVar4);
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *puVar2 = pcVar3;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 **)(*(int *)(param_1 + 0x10) + 8) = puVar2;
    *(undefined4 **)(param_1 + 0x10) = puVar2;
    return 0;
  }
  **(undefined4 **)(param_1 + 0xc) = puVar2;
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  return 0;
}


