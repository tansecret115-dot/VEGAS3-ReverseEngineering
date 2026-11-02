/* Module: encn3260.dll
   Function: FUN_664becb0
   Address: 664becb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664becb0(char *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  undefined4 local_80 [5];
  int local_6c [7];
  char *local_50 [3];
  char *local_44 [3];
  char *local_38 [3];
  char *local_2c [3];
  char *local_20 [3];
  int local_14 [3];
  int local_8;
  
  iVar5 = -1;
  pcVar9 = param_1;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    return 0;
  }
  uVar6 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_664c45c0(local_80,(undefined4 *)param_1,~uVar6 - 1);
  FUN_664c4750(local_6c,local_80);
  puVar8 = (undefined4 *)0x0;
  FUN_664c4790(local_6c,local_14,&DAT_664ef924);
  while( true ) {
    bVar2 = false;
    iVar5 = 0;
    if (0 < *(int *)(local_14[0] + -8)) {
      do {
        iVar3 = isspace((int)*(char *)(iVar5 + local_14[0]));
        if (iVar3 == 0) {
          bVar2 = true;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(local_14[0] + -8));
    }
    if (!bVar2) break;
    if (puVar8 == (undefined4 *)0x0) {
      FUN_664bb2e0(local_20,local_14);
      puVar8 = operator_new(0x1c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = FUN_664be170(puVar8);
      }
      if ((char)local_8 == '=') {
        piVar4 = FUN_664c4790(local_6c,local_90,&DAT_664ef7c4);
        FUN_664bb570(local_14,piVar4);
        local_8 = piVar4[3];
        FUN_664bb3e0(local_90);
        FUN_664bb2e0(local_38,local_14);
        FUN_664be210(puVar8,local_20[0],local_38[0]);
        FUN_664bb3e0((int *)local_38);
        ppcVar7 = local_20;
      }
      else {
        FUN_664be260(puVar8,local_20[0]);
        ppcVar7 = local_20;
      }
    }
    else if ((char)local_8 == '=') {
      FUN_664bb2e0(local_44,local_14);
      piVar4 = FUN_664c4790(local_6c,local_a0,&DAT_664ef7c4);
      FUN_664bb570(local_14,piVar4);
      local_8 = piVar4[3];
      FUN_664bb3e0(local_a0);
      FUN_664bb2e0(local_50,local_14);
      FUN_664be210(puVar8,local_44[0],local_50[0]);
      FUN_664bb3e0((int *)local_50);
      ppcVar7 = local_44;
    }
    else {
      FUN_664bb2e0(local_2c,local_14);
      FUN_664be210(puVar8,local_2c[0],&DAT_664f05c4);
      ppcVar7 = local_2c;
    }
    FUN_664bb3e0((int *)ppcVar7);
    piVar4 = FUN_664c4790(local_6c,local_b0,&DAT_664ef920);
    FUN_664bb570(local_14,piVar4);
    local_8 = piVar4[3];
    FUN_664bb3e0(local_b0);
  }
  if (puVar8 != (undefined4 *)0x0) {
    FUN_664be450(param_2,puVar8);
  }
  FUN_664bb3e0(local_14);
  FUN_664c4770(local_6c);
  FUN_664c0180(local_80);
  return 0;
}


