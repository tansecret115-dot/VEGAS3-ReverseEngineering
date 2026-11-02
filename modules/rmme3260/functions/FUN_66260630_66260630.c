/* Module: rmme3260.dll
   Function: FUN_66260630
   Address: 66260630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66260630(int param_1,int *param_2,uint param_3,undefined4 *param_4)

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
  if (((((iVar2 == DAT_6626b0d8) && (iVar10 = param_2[1], iVar10 == DAT_6626b0dc)) &&
       (iVar9 = param_2[2], iVar9 == DAT_6626b0e0)) &&
      ((iVar8 = param_2[3], iVar8 == DAT_6626b0e4 && (*(int *)(param_1 + 0x14) != 0)))) ||
     (((iVar2 == DAT_6626aa88 &&
       ((iVar10 = param_2[1], iVar10 == DAT_6626aa8c && (iVar9 = param_2[2], iVar9 == DAT_6626aa90))
       )) && ((iVar8 = param_2[3], iVar8 == DAT_6626aa94 && (*(int *)(param_1 + 0xc) != 0)))))) {
    if ((((iVar2 == DAT_6626b0d8) && (iVar10 == DAT_6626b0dc)) && (iVar9 == DAT_6626b0e0)) &&
       (iVar8 == DAT_6626b0e4)) {
      this = *(void **)(param_1 + 0x14);
    }
    else {
      this = *(void **)(param_1 + 0xc);
    }
    uVar3 = FUN_66261cc0((int)this);
    if (param_3 < uVar3) {
      local_28 = 0;
      local_24 = (int *)0x0;
      FUN_66261d50(this,param_3,&local_10,&local_14,&local_18,&local_1c,&local_20,(int *)&param_2,
                   &local_8,&local_c);
      puVar4 = operator_new(0x6c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = &PTR_LAB_6626b730;
        puVar4[1] = 0;
        FUN_66252680(puVar4 + 2,10);
        FUN_66252680(puVar4 + 9,10);
        FUN_66252680(puVar4 + 0x10,10);
        puVar4[0x17] = 0;
        puVar4[0x18] = 0;
        puVar4[0x19] = 0;
        puVar4[0x1a] = 0;
        *puVar4 = &PTR_FUN_6626b6f0;
      }
      (**(code **)*puVar4)(puVar4,&DAT_6626a628,param_4);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar4);
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
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgPath_6627ca08,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar4);
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
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgDesc_6627ca00,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar4);
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
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgCopy_6627c9f8,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar4);
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
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      puVar4 = param_4;
      (**(code **)(*(int *)*param_4 + 0x2c))((int *)*param_4,s_PlgMore_6627c9f0,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      FUN_662500f0(local_34);
      local_28 = param_2[1];
      local_24 = param_2;
      while (local_28 != 0) {
        if (local_28 != param_2[1]) {
          FUN_66250640(local_34,&DAT_6627c9ec);
        }
        pcVar7 = (char *)0x0;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)FUN_66250c10(local_28);
          pcVar7 = (char *)*puVar6;
        }
        FUN_66250640(local_34,pcVar7);
        FUN_66250bf0(&local_28);
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar6);
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,local_34[0],*(int *)(local_34[0] + -8) + 1);
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      (**(code **)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,s_PlgMime_6627c9e4,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      FUN_66250410(local_34,&DAT_6627cf3c);
      local_28 = *(int *)(local_8 + 4);
      while (local_28 != 0) {
        if (local_28 != *(int *)(local_8 + 4)) {
          FUN_66250640(local_34,&DAT_6627c9ec);
        }
        pcVar7 = (char *)0x0;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)FUN_66250c10(local_28);
          pcVar7 = (char *)*puVar6;
        }
        FUN_66250640(local_34,pcVar7);
        FUN_66250bf0(&local_28);
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar6);
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,local_34[0],*(int *)(local_34[0] + -8) + 1);
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      (**(code **)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,s_PlgExt_6627c9dc,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      FUN_66250410(local_34,&DAT_6627cf3c);
      local_28 = *(int *)(local_c + 4);
      while (local_28 != 0) {
        if (local_28 != *(int *)(local_c + 4)) {
          FUN_66250640(local_34,&DAT_6627c9ec);
        }
        pcVar7 = (char *)0x0;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)FUN_66250c10(local_28);
          pcVar7 = (char *)*puVar6;
        }
        FUN_66250640(local_34,pcVar7);
        FUN_66250bf0(&local_28);
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_662522d0(puVar6);
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,local_34[0],*(int *)(local_34[0] + -8) + 1);
      (**(code **)*piVar5)(piVar5,&DAT_6626a5f8,&param_1);
      (**(code **)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,s_PlgOpen_6627c9d4,param_1);
      (**(code **)(*piVar5 + 8))(piVar5);
      (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,s_PlgMult_6627c9cc,local_20);
      FUN_66250210(local_34);
      return 0;
    }
  }
  return 0x80004005;
}


