/* Module: vegas30.exe
   Function: FUN_004b7040
   Address: 004b7040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004b7040(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                    undefined4 *param_5)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  double local_28;
  undefined4 local_20 [7];
  
  *param_5 = 0;
  local_34 = 0;
  switch(*param_1) {
  case 0:
    local_28 = (double)(ulonglong)(uint)param_1[1];
    local_28 = (double)(longlong)local_28 * (double)CONCAT44(param_3,param_2) * _DAT_006106c8;
    fVar3 = (float10)FUN_004b74a0(local_28,param_5);
    local_28 = (double)(ulonglong)(uint)param_1[1];
    *param_4 = local_34;
    return (fVar3 / (float10)(longlong)local_28) * (float10)_DAT_006105d0;
  case 1:
    uVar8 = 0x408f4000;
    local_20[0] = 0;
    uVar6 = ZEXT48(local_20);
    uVar4 = ftol(local_20,0,0x408f4000);
    _SfNanoTimeToHMSF_20(uVar4,uVar6,uVar8);
    fVar3 = (float10)FUN_004b7540(local_20,0,0x408f4000,param_5);
    if ((float10)_DAT_006106d0 < fVar3) {
      local_34 = 1;
    }
    fVar2 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar3 * fVar2;
  case 2:
    fVar3 = (float10)FUN_004b74a0(param_2,param_3,param_5);
    if ((float10)_DAT_006105d0 < fVar3) {
      *param_4 = 1;
      return fVar3;
    }
    break;
  case 3:
    uVar8 = param_1[3];
    local_20[0] = 0;
    uVar7 = CONCAT44(param_1[2],local_20);
    uVar4 = ftol(local_20,param_1[2],uVar8);
    _SfNanoTimeToHMSF_20(uVar4,uVar7,uVar8);
    local_30 = ftol();
    fVar3 = (float10)FUN_004b7540(local_20,(double)local_30,param_5);
    if ((float10)_DAT_006106d0 < fVar3) {
      local_34 = 1;
    }
    fVar3 = fVar3 * (float10)_DAT_006105d0;
    if (fVar3 < (float10)_DAT_006106c0) {
      fVar3 = (float10)_DAT_006105d0;
      *param_4 = local_34;
      return fVar3;
    }
    break;
  case 4:
  case 0xf:
  case 0x10:
    local_28 = (double)CONCAT44(param_3,param_2) * *(double *)(param_1 + 2) * _DAT_006106c8;
    fVar3 = (float10)FUN_004b74a0(local_28,param_5);
    if ((float10)_DAT_006106d0 < fVar3) {
      local_34 = 1;
    }
    dVar1 = *(double *)(param_1 + 2);
    *param_4 = local_34;
    return (fVar3 / (float10)dVar1) * (float10)_DAT_006105d0;
  case 5:
  case 0xd:
  case 0xe:
    piVar9 = &local_30;
    uVar7 = CONCAT44(&local_2c,&local_28);
    puVar5 = param_1;
    uVar4 = ftol(param_1,&local_28,&local_2c,piVar9);
    _SfNanoTimeToMeasures_24(uVar4,puVar5,uVar7,piVar9);
    fVar2 = (float10)FUN_004b7920(local_28._0_4_,local_2c,local_30,param_1,&local_34,param_5);
    fVar3 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar2 * fVar3;
  case 6:
    puVar5 = local_20;
    local_20[0] = 5;
    uVar4 = ftol(puVar5);
    _SFSMPTE_NanoToSMPTE_12(uVar4,puVar5);
    fVar2 = (float10)FUN_004b7540(local_20,0xe2556b28,0x403df853,param_5);
    fVar3 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar2 * fVar3;
  case 7:
    puVar5 = local_20;
    local_20[0] = 1;
    uVar4 = ftol(puVar5);
    _SFSMPTE_NanoToSMPTE_12(uVar4,puVar5);
    fVar2 = (float10)FUN_004b7540(local_20,0,0x403e0000,param_5);
    fVar3 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar2 * fVar3;
  case 8:
    puVar5 = local_20;
    local_20[0] = 2;
    uVar4 = ftol(puVar5);
    _SFSMPTE_NanoToSMPTE_12(uVar4,puVar5);
    fVar2 = (float10)FUN_004b7540(local_20,0xe2556b28,0x403df853,param_5);
    fVar3 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar2 * fVar3;
  case 9:
    puVar5 = local_20;
    local_20[0] = 3;
    uVar4 = ftol(puVar5);
    _SFSMPTE_NanoToSMPTE_12(uVar4,puVar5);
    fVar2 = (float10)FUN_004b7540(local_20,0,0x40390000,param_5);
    fVar3 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar2 * fVar3;
  case 10:
    puVar5 = local_20;
    local_20[0] = 4;
    uVar4 = ftol(puVar5);
    _SFSMPTE_NanoToSMPTE_12(uVar4,puVar5);
    fVar2 = (float10)FUN_004b7540(local_20,0,0x40380000,param_5);
    fVar3 = (float10)_DAT_006105d0;
    *param_4 = local_34;
    return fVar2 * fVar3;
  case 0xb:
  default:
    fVar3 = (float10)FUN_004b74a0(CONCAT44(param_3,param_2),param_5);
    break;
  case 0xc:
    fVar2 = (float10)FUN_004b74a0((double)CONCAT44(param_3,param_2) * _DAT_00610800,param_5);
    fVar3 = (float10)_DAT_00612b00;
    *param_4 = local_34;
    return fVar2 * fVar3;
  }
  *param_4 = local_34;
  return fVar3;
}


