/* Module: rmme3260.dll
   Function: FUN_66246b00
   Address: 66246b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66246b00(void *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  void *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  tagRECT local_8c;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  double local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  double local_44;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)((int)param_1 + 0x3a) != 0) &&
     (iVar2 = *(int *)(*(int *)((int)param_1 + 0x3a) + 0x6c), iVar2 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0xb4));
  }
  local_64 = FUN_662409f0(*(void **)((int)param_1 + 0x3a),param_3,param_2,param_5);
  iVar2 = ftol();
  *param_4 = iVar2;
  iVar2 = ftol();
  param_4[2] = iVar2;
  iVar2 = ftol();
  param_4[1] = iVar2;
  local_70 = ftol();
  param_4[3] = local_70;
  this = *(void **)((int)param_1 + 0x3a);
  local_7c = *param_4 + *(int *)((int)this + 0xd4);
  local_30 = (int *)((int)this + 0xd4);
  local_74 = *local_30 + param_4[2];
  local_78 = param_4[1] + *(int *)((int)this + 0xd8);
  local_70 = *(int *)((int)this + 0xd8) + local_70;
  piVar3 = FUN_6623db00(this,(undefined4 *)&local_44);
  local_6c = *piVar3;
  local_68 = piVar3[1];
  local_10 = (int *)0x0;
  local_48 = 0;
  local_34 = 0;
  local_2c = 0;
  local_60 = ((double)param_4[2] - (double)*param_4) / ((double)param_5[2] - (double)*param_5);
  local_44 = ((double)param_4[3] - (double)param_4[1]) / ((double)param_5[3] - (double)param_5[1]);
  iVar2 = (**(code **)**(undefined4 **)((int)param_1 + 0x3a))
                    (*(undefined4 **)((int)param_1 + 0x3a),&DAT_6626a628,&local_10);
  if (iVar2 == 0) {
    (**(code **)(*local_10 + 0x10))(local_10,s_ScrollingSite_6627044c,&local_48);
    if (local_48 != 0) {
      FUN_6623f390(*(void **)((int)param_1 + 0x3a),&local_8c);
      local_24 = local_8c.bottom - local_8c.top;
      if (local_8c.right - local_8c.left < param_4[2] - *param_4) {
        local_8 = (param_4[2] - *param_4) + -1;
        FUN_66241200(*(void **)((int)param_1 + 0x3a),local_8);
        iVar2 = FUN_6623f170(*(int *)((int)param_1 + 0x3a));
        local_c = FUN_6623f0b0(*(int *)((int)param_1 + 0x3a));
        if ((iVar2 != 0) && (local_c != 0)) {
          local_34 = ftol();
        }
        local_7c = *local_30;
        local_74 = *local_30 + (local_8c.right - local_8c.left);
      }
      if (local_24 < param_4[3] - param_4[1]) {
        local_8 = (param_4[3] - param_4[1]) + -1;
        FUN_66241290(*(void **)((int)param_1 + 0x3a),local_8);
        iVar2 = FUN_6623f180(*(int *)((int)param_1 + 0x3a));
        local_c = FUN_6623f0c0(*(int *)((int)param_1 + 0x3a));
        if ((iVar2 != 0) && (local_c != 0)) {
          local_2c = ftol();
        }
        param_4[1] = local_30[1];
        param_4[3] = local_24 + local_30[1];
      }
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
  }
  local_c = 0;
  *(undefined4 *)((int)param_1 + 0x4b6) = 0;
  if ((*(int *)((int)param_1 + 0x4a2) == 1) &&
     ((local_60 < _DAT_6626c830 || (local_44 < _DAT_6626c830)))) {
    *(undefined4 *)((int)param_1 + 0x4a2) = 0;
    local_c = 1;
    *(undefined4 *)((int)param_1 + 0x4b6) = 1;
  }
LAB_66246d84:
  param_4 = (int *)0x0;
  if (*(int *)((int)param_1 + 0x4a2) == 0) {
    param_4 = (int *)FUN_662406e0(*(int *)((int)param_1 + 0x3a));
    if (param_4 == (int *)0x0) {
LAB_66247026:
      if ((*(int *)((int)param_1 + 0x3a) != 0) &&
         (iVar2 = *(int *)(*(int *)((int)param_1 + 0x3a) + 0x6c), iVar2 != 0)) {
LAB_662470b2:
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0xb4));
      }
      return 0;
    }
    iVar2 = 0;
    iVar4 = FUN_662488d0(param_4);
    while (iVar4 != 0) {
      Sleep(10);
      iVar2 = iVar2 + 1;
      if (5 < iVar2) goto LAB_66247026;
      iVar4 = FUN_662488d0(param_4);
    }
  }
  local_3c = *(int *)((int)param_1 + 0x4fe);
  local_38 = (int)param_1 + 0x4fa;
  do {
    if (local_3c == 0) {
      iVar2 = *(int *)((int)param_1 + 0x3a);
      puVar7 = (uint *)(iVar2 + 0x144);
      if ((*(int *)(iVar2 + 0x144) == 0) && (puVar7 = (uint *)0x0, *(int *)(iVar2 + 0x6c) != 0)) {
        puVar7 = (uint *)(*(int *)(iVar2 + 0x6c) + 0x144);
      }
      if (param_4 != (int *)0x0) {
        FUN_66248920(param_4,0,puVar7);
      }
      if (local_c == 1) {
        *(undefined4 *)((int)param_1 + 0x4a2) = 1;
      }
      if (local_64 != 0) {
        *(undefined1 *)(*(int *)(param_3 + 4) * param_5[1] + *param_5 + param_2) = 1;
      }
      if (*(int *)((int)param_1 + 0x3a) == 0) {
        return 0;
      }
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x3a) + 0x6c);
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_662470b2;
    }
    puVar5 = (undefined4 *)FUN_66250c10(local_3c);
    FUN_66247fa0(&local_20,(int *)*puVar5,&local_7c);
    piVar3 = local_30;
    if ((((local_20 != 0) || (local_18 != 0)) || (local_1c != 0)) || (local_14 != 0)) {
      iVar2 = *local_30;
      iVar4 = *param_5;
      local_8 = local_20 - iVar2;
      iVar6 = ftol();
      iVar1 = piVar3[1];
      local_24 = local_1c - iVar1;
      local_58 = iVar6 + local_34 + iVar4;
      local_8 = param_5[1];
      iVar6 = ftol();
      local_54 = iVar6 + local_2c + local_8;
      local_24 = local_18 - iVar2;
      iVar2 = ftol();
      local_24 = local_14 - iVar1;
      iVar4 = iVar2 + local_34 + iVar4;
      local_50 = iVar4;
      iVar2 = ftol();
      local_4c = iVar2 + local_2c + local_8;
      if ((param_5[3] != 0) && (local_4c < 1)) {
        local_4c = 1;
      }
      if ((param_5[2] != 0) && (iVar4 < 1)) {
        iVar4 = 1;
        local_50 = 1;
      }
      if (*(int *)(param_3 + 4) < iVar4) {
        local_50 = *(int *)(param_3 + 4);
      }
      if (*(int *)(param_3 + 8) < local_4c) {
        local_4c = *(int *)(param_3 + 8);
      }
      local_1c = local_1c + local_68;
      local_20 = local_20 + local_6c;
      local_18 = local_18 + local_6c;
      local_14 = local_14 + local_68;
      iVar2 = *(int *)((int)param_1 + 0x4a2);
      if (iVar2 == 0) {
        if (param_4 == (int *)0x0) {
          param_4 = (int *)FUN_662406e0(*(int *)((int)param_1 + 0x3a));
          FUN_662488d0(param_4);
        }
        (**(code **)(*param_4 + 0x10))(param_4,param_2,param_3,&local_20,&local_58);
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_66247540(param_1,param_2,param_3,param_5,param_5);
        if ((iVar2 != 0) || (iVar2 = FUN_662478c0(param_1,&local_20,&local_58,0,0), iVar2 != 0)) {
          *(undefined4 *)((int)param_1 + 0x4a2) = 0;
        }
        if (*(int *)((int)param_1 + 0x4a2) != 1) goto LAB_66246d84;
      }
      else if (iVar2 == 2) {
        iVar2 = *(int *)(*(int *)((int)param_1 + 0x3a) + 0x68);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x68) != 0)) {
          *(undefined4 *)((int)param_1 + 0x4a2) = 0;
          goto LAB_66246d84;
        }
        iVar2 = FUN_66247540(param_1,param_2,param_3,param_5,param_5);
        if ((iVar2 != 0) || (iVar2 = FUN_662474d0(param_1,&local_20,&local_58), iVar2 != 0)) {
          *(undefined4 *)((int)param_1 + 0x4a2) = 0;
        }
        if (*(int *)((int)param_1 + 0x4a2) != 2) goto LAB_66246d84;
      }
    }
    FUN_66250bf0(&local_3c);
  } while( true );
}


