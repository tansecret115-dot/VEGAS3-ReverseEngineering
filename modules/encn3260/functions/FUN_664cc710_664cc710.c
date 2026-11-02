/* Module: encn3260.dll
   Function: FUN_664cc710
   Address: 664cc710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664cc710(int param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  void *this;
  int iVar10;
  int local_34 [3];
  int local_28;
  int *local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  int local_8;
  
  *param_4 = 0;
  iVar2 = *param_2;
  if (((((iVar2 == DAT_664dd960) && (iVar10 = param_2[1], iVar10 == DAT_664dd964)) &&
       (iVar9 = param_2[2], iVar9 == DAT_664dd968)) &&
      ((iVar8 = param_2[3], iVar8 == DAT_664dd96c && (*(int *)(param_1 + 0x14) != 0)))) ||
     (((iVar2 == DAT_664dced0 &&
       ((iVar10 = param_2[1], iVar10 == DAT_664dced4 && (iVar9 = param_2[2], iVar9 == DAT_664dced8))
       )) && ((iVar8 = param_2[3], iVar8 == DAT_664dcedc && (*(int *)(param_1 + 0xc) != 0)))))) {
    if ((((iVar2 == DAT_664dd960) && (iVar10 == DAT_664dd964)) && (iVar9 == DAT_664dd968)) &&
       (iVar8 == DAT_664dd96c)) {
      this = *(void **)(param_1 + 0x14);
    }
    else {
      this = *(void **)(param_1 + 0xc);
    }
    uVar3 = FUN_664cdc80((int)this);
    if (param_3 < uVar3) {
      local_28 = 0;
      local_24 = (int *)0x0;
      FUN_664cdd10(this,param_3,&local_10,&local_14,&local_18,&local_1c,&local_20,(int *)&param_2,
                   &local_8,&local_c);
      puVar4 = operator_new(0x6c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = &PTR_LAB_664ddfd0;
        puVar4[1] = 0;
        FUN_664bdbb0(puVar4 + 2,10);
        FUN_664bdbb0(puVar4 + 9,10);
        FUN_664bdbb0(puVar4 + 0x10,10);
        puVar4[0x17] = 0;
        puVar4[0x18] = 0;
        puVar4[0x19] = 0;
        puVar4[0x1a] = 0;
        *puVar4 = &PTR_FUN_664ddf90;
      }
      (**(code **)*puVar4)(puVar4,&DAT_664dcf90,param_4);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar4);
      }
      uVar3 = 0xffffffff;
      param_1 = 0;
      pcVar7 = local_10;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*piVar5 + 0x10))(piVar5,local_10,~uVar3);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgPath_664f0098,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar4);
      }
      uVar3 = 0xffffffff;
      pcVar7 = local_14;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*piVar5 + 0x10))(piVar5,local_14,~uVar3);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgDesc_664f0090,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar4);
      }
      uVar3 = 0xffffffff;
      pcVar7 = local_18;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*piVar5 + 0x10))(piVar5,local_18,~uVar3);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgCopy_664f0088,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar4);
      }
      uVar3 = 0xffffffff;
      pcVar7 = local_1c;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*piVar5 + 0x10))(piVar5,local_1c,~uVar3);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      puVar4 = param_4;
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgMore_664f0080,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      FUN_664bb2c0(local_34);
      local_28 = param_2[1];
      local_24 = param_2;
      while (local_28 != 0) {
        if (local_28 != param_2[1]) {
          FUN_664bb810(local_34,&DAT_664e2358);
        }
        pcVar7 = (char *)0x0;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)FUN_664bab80(local_28);
          pcVar7 = (char *)*puVar6;
        }
        FUN_664bb810(local_34,pcVar7);
        FUN_664bab40(&local_28);
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar6);
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,local_34[0],*(int *)(local_34[0] + -8) + 1);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      (**(code **)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,s_PlgMime_664f0078,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      FUN_664bb5e0(local_34,&DAT_664f05c4);
      local_28 = *(int *)(local_8 + 4);
      while (local_28 != 0) {
        if (local_28 != *(int *)(local_8 + 4)) {
          FUN_664bb810(local_34,&DAT_664e2358);
        }
        pcVar7 = (char *)0x0;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)FUN_664bab80(local_28);
          pcVar7 = (char *)*puVar6;
        }
        FUN_664bb810(local_34,pcVar7);
        FUN_664bab40(&local_28);
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar6);
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,local_34[0],*(int *)(local_34[0] + -8) + 1);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      (**(code **)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,s_PlgExt_664f0070,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      FUN_664bb5e0(local_34,&DAT_664f05c4);
      local_28 = *(int *)(local_c + 4);
      while (local_28 != 0) {
        if (local_28 != *(int *)(local_c + 4)) {
          FUN_664bb810(local_34,&DAT_664e2358);
        }
        pcVar7 = (char *)0x0;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)FUN_664bab80(local_28);
          pcVar7 = (char *)*puVar6;
        }
        FUN_664bb810(local_34,pcVar7);
        FUN_664bab40(&local_28);
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_664bad50(puVar6);
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,local_34[0],*(int *)(local_34[0] + -8) + 1);
      (**(code **)*piVar5)(piVar5,&DAT_664dcf60,&param_1);
      (**(code **)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,s_PlgOpen_664f0068,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,s_PlgMult_664f0060,local_20);
      FUN_664bb3e0(local_34);
      return 0;
    }
  }
  return 0x80004005;
}


