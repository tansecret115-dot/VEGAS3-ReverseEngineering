/* Module: encn3260.dll
   Function: FUN_664ad680
   Address: 664ad680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664ad680(int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (param_3 == (char *)0x0) {
    return 0x80004005;
  }
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[10] = 0;
  }
  param_1[10] = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  uVar5 = 0xffffffff;
  pcVar3 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = pcVar3;
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
  param_1[0xb] = (int)pcVar3;
  param_1[9] = 2;
  uVar4 = FUN_664ad730(param_1);
  return uVar4;
}


