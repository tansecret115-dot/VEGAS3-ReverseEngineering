/* Module: rmme3260.dll
   Function: FUN_66230b70
   Address: 66230b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66230b70(int param_1,char *param_2,undefined2 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 in_stack_0000000e;
  
  *(undefined2 *)(param_1 + 0x34) = param_3;
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  uVar4 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar4);
  *(char **)(param_1 + 0x2c) = pcVar2;
  if (pcVar2 == (char *)0x0) {
    return -0x7ff8fff2;
  }
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  if (*(char **)(param_1 + 0x7b) != (char *)0x0) {
    param_3 = *(undefined2 *)(param_1 + 0x79);
    param_2 = *(char **)(param_1 + 0x7b);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                    (*(int **)(param_1 + 0x1c),param_2,CONCAT22(in_stack_0000000e,param_3));
  iVar3 = FUN_6622d650(iVar3);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))
                      (*(int **)(param_1 + 0x20),param_2,CONCAT22(in_stack_0000000e,param_3));
    iVar3 = FUN_6622d650(iVar3);
  }
  return iVar3;
}


