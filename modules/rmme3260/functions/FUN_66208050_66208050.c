/* Module: rmme3260.dll
   Function: FUN_66208050
   Address: 66208050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66208050(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined4 *puVar5;
  size_t _NumOfElements;
  undefined4 *puVar6;
  int local_ac [3];
  int local_a0 [3];
  int local_94 [3];
  int local_88 [3];
  char *local_7c [3];
  char *local_70 [3];
  char *local_64 [3];
  int *local_58;
  char *local_54 [3];
  int local_48 [3];
  int local_3c [3];
  int local_30 [3];
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int *local_18;
  size_t local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  if (param_1[0x17] == 0) {
    return -0x7ffbfff9;
  }
  _NumOfElements = param_1[0x13];
  iVar4 = -0x7fffbffb;
  local_24 = 0;
  local_20 = 0;
  local_c = (int *)0x0;
  if ((int)_NumOfElements < 1) {
    return 0;
  }
  local_14 = _NumOfElements;
  local_1c = operator_new(_NumOfElements * 0x14);
  local_8 = 0;
  puVar5 = local_1c;
  if (0 < param_1[0x13]) {
    while( true ) {
      local_10 = puVar5;
      puVar5 = *(undefined4 **)(param_1[0x12] + local_8 * 4);
      iVar4 = (**(code **)(*param_1 + 0x58))
                        (param_1,CONCAT22((short)((uint)local_8 >> 0x10),*(undefined2 *)puVar5),
                         &local_24);
      if ((((iVar4 < 0) || (iVar4 == 0x40012)) ||
          (iVar4 = (**(code **)(*param_1 + 0x58))
                             (param_1,CONCAT22(extraout_var,*(undefined2 *)(puVar5 + 2)),&local_20),
          iVar4 < 0)) || (iVar4 == 0x40012)) break;
      iVar4 = (**(code **)(*param_1 + 0x68))(param_1,local_24,&local_c);
      _NumOfElements = local_14;
      if (iVar4 < 0) goto LAB_662081f0;
      if ((iVar4 != 0x40012) &&
         (iVar4 = (**(code **)(*local_c + 0x44))(local_c,(int)puVar5 + 6), local_c != (int *)0x0)) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
      _NumOfElements = local_14;
      if (((iVar4 < 0) || (iVar4 == 0x40012)) ||
         (iVar4 = (**(code **)(*param_1 + 0x68))(param_1,local_20,&local_c),
         _NumOfElements = local_14, iVar4 < 0)) goto LAB_662081f0;
      if ((iVar4 != 0x40012) &&
         (iVar4 = (**(code **)(*local_c + 0x44))(local_c,(int)puVar5 + 0xe), local_c != (int *)0x0))
      {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
      _NumOfElements = local_14;
      if ((iVar4 < 0) || (iVar4 == 0x40012)) goto LAB_662081f0;
      iVar3 = *(int *)(local_24 + 6);
      *(int *)((int)puVar5 + 2) = iVar3;
      iVar2 = *(int *)(local_20 + 6);
      puVar5[4] = iVar3 + iVar2;
      *(int *)((int)puVar5 + 10) = iVar2;
      puVar6 = local_10;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_8 = local_8 + 1;
      puVar5 = local_10 + 5;
      local_10 = local_10 + 5;
      if (param_1[0x13] <= local_8) goto LAB_662081f0;
    }
    iVar4 = -0x7fffbffb;
    _NumOfElements = local_14;
  }
LAB_662081f0:
  if (-1 < iVar4) {
    qsort(local_1c,_NumOfElements,0x14,FUN_662088f0);
    FUN_66250280(local_7c,s____Bandwidth_<__lu),_6626f44c);
    FUN_66250280(local_70,s____Bandwidth_>___lu_______Bandwi_6626f420);
    FUN_66250280(local_64,s____Bandwidth_>___lu___6626f408);
    FUN_66250280(local_54,s_Stream_uBandwidth____lu__Stream__6626f538);
    FUN_662500f0(local_3c);
    FUN_662500f0(local_30);
    FUN_662500f0(local_48);
    local_10 = (undefined4 *)0x0;
    if (0 < (int)_NumOfElements) {
      local_58 = param_1 + 0x1c;
      do {
        local_8 = *(int *)((int)local_1c + (int)local_10 * 0x14 + 10);
        if (local_10 == (undefined4 *)0x0) {
          if (local_14 == 1) {
            FUN_662508c0(local_3c,local_64[0]);
            FUN_662508c0(local_30,local_54[0]);
            piVar1 = FUN_662504a0(local_a0,local_3c,local_30);
            FUN_662503a0(local_48,piVar1);
            piVar1 = local_a0;
          }
          else {
            FUN_662508c0(local_3c,local_7c[0]);
            FUN_662508c0(local_30,local_54[0]);
            piVar1 = FUN_662504a0(local_88,local_3c,local_30);
            FUN_662503a0(local_48,piVar1);
            piVar1 = local_88;
          }
        }
        else if (local_10 == (undefined4 *)(local_14 - 1)) {
          FUN_662508c0(local_3c,local_64[0]);
          FUN_662508c0(local_30,local_54[0]);
          piVar1 = FUN_662504a0(local_94,local_3c,local_30);
          FUN_662503a0(local_48,piVar1);
          piVar1 = local_94;
        }
        else {
          FUN_662508c0(local_3c,local_70[0]);
          FUN_662508c0(local_30,local_54[0]);
          piVar1 = FUN_662504a0(local_ac,local_3c,local_30);
          FUN_662503a0(local_48,piVar1);
          piVar1 = local_ac;
        }
        FUN_66250210(piVar1);
        piVar1 = local_58;
        if (*(int *)(*local_58 + -8) == 0) {
          FUN_662503a0(local_58,local_48);
        }
        else {
          FUN_66250680(local_58,local_48);
        }
        FUN_66250640(piVar1,&DAT_6626f1e4);
        local_10 = (undefined4 *)((int)local_10 + 1);
      } while ((int)local_10 < (int)local_14);
    }
    local_18 = (int *)0x0;
    iVar4 = (**(code **)(*(int *)param_1[0x17] + 0xc))((int *)param_1[0x17],&DAT_6626a5f8,&local_18)
    ;
    if (-1 < iVar4) {
      iVar3 = *local_18;
      iVar4 = *(int *)(param_1[0x1c] + -8) + 1;
      iVar2 = FUN_662506b0(param_1 + 0x1c,*(int *)(param_1[0x1c] + -8));
      iVar4 = (**(code **)(iVar3 + 0x10))(local_18,iVar2,iVar4);
      FUN_66250730(param_1 + 0x1c,-1);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*(int *)param_1[0x18] + 0x2c))
                          ((int *)param_1[0x18],s_ASMRuleBook_6626f1d8,local_18);
      }
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
        local_18 = (int *)0x0;
      }
    }
    if (local_1c != (undefined4 *)0x0) {
      operator_delete(local_1c);
    }
    FUN_66250210(local_48);
    FUN_66250210(local_30);
    FUN_66250210(local_3c);
    FUN_66250210((int *)local_54);
    FUN_66250210((int *)local_64);
    FUN_66250210((int *)local_70);
    FUN_66250210((int *)local_7c);
    return iVar4;
  }
  return iVar4;
}


