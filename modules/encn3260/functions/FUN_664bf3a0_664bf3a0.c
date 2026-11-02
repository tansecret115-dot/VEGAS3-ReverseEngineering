/* Module: encn3260.dll
   Function: FUN_664bf3a0
   Address: 664bf3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bf3a0(char *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_54 [7];
  undefined4 local_38 [5];
  int local_24 [4];
  char *local_14 [3];
  int local_8;
  
  uVar6 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_664c45c0(local_38,(undefined4 *)param_1,~uVar6 - 1);
  FUN_664c4750(local_54,local_38);
  FUN_664bb450(local_14,&DAT_664f05c4);
  local_8 = 0xffffffff;
  puVar3 = operator_new(0x1c);
  bVar2 = false;
  if (puVar3 == (undefined4 *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    param_1 = (char *)FUN_664be170(puVar3);
  }
  piVar4 = FUN_664c4790(local_54,local_24,&DAT_664ef7c4);
  FUN_664bb570(local_14,piVar4);
  local_8 = piVar4[3];
  FUN_664bb3e0(local_24);
  iVar7 = 0;
  if (0 < *(int *)(local_14[0] + -8)) {
    do {
      iVar5 = isspace((int)local_14[0][iVar7]);
      if (iVar5 == 0) {
        bVar2 = true;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(local_14[0] + -8));
  }
  if (bVar2) {
    FUN_664be210(param_1,local_14[0],&DAT_664f05c4);
  }
  piVar4 = FUN_664c4790(local_54,local_24,&DAT_664f05c4);
  FUN_664bb570(local_14,piVar4);
  local_8 = piVar4[3];
  FUN_664bb3e0(local_24);
  bVar2 = false;
  iVar7 = 0;
  if (0 < *(int *)(local_14[0] + -8)) {
    do {
      iVar5 = isspace((int)local_14[0][iVar7]);
      if (iVar5 == 0) {
        bVar2 = true;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(local_14[0] + -8));
  }
  if (bVar2) {
    FUN_664be210(param_1,local_14[0],&DAT_664f05c4);
  }
  FUN_664be450(param_2,param_1);
  FUN_664bb3e0((int *)local_14);
  FUN_664c4770(local_54);
  FUN_664c0180(local_38);
  return 0;
}


