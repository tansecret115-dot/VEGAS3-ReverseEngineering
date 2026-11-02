/* Module: sftrans1.dll
   Function: FUN_0052ecb0
   Address: 0052ecb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0052ecb0(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 unaff_EDI;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_34;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar3 = 4;
  bVar8 = true;
  piVar1 = param_2;
  piVar6 = &DAT_00554a90;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *piVar1 == *piVar6;
    piVar1 = piVar1 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar3 = 4;
    bVar8 = true;
    piVar1 = param_2;
    piVar6 = &DAT_00554aa0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *piVar1 == *piVar6;
      piVar1 = piVar1 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar3 = 4;
      bVar8 = true;
      piVar1 = &DAT_0056b200;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *param_2 == *piVar1;
        param_2 = param_2 + 1;
        piVar1 = piVar1 + 1;
      } while (bVar8);
      puVar5 = param_3;
      puVar7 = param_3;
      if (bVar8) {
        puVar7 = (undefined4 *)0x20;
        if (param_3 == (undefined4 *)0x1) {
          local_20 = DAT_0056b190;
          local_1c = DAT_0056b194;
          local_18 = DAT_0056b198;
          local_14 = DAT_0056b19c;
          puVar5 = (undefined4 *)(param_1 + 0x478);
        }
        else {
          local_20 = DAT_0056b180;
          local_1c = DAT_0056b184;
          local_18 = DAT_0056b188;
          local_14 = DAT_0056b18c;
          puVar5 = (undefined4 *)(param_1 + 0x474);
        }
      }
      goto LAB_0052ee00;
    }
  }
  puVar7 = (undefined4 *)0x1c;
  if (param_3 == (undefined4 *)0x1) {
    local_20 = DAT_00554800;
    local_1c = DAT_00554804;
    local_18 = DAT_00554808;
    local_14 = DAT_0055480c;
    puVar5 = (undefined4 *)(param_1 + 0x470);
  }
  else {
    local_20 = DAT_005547f0;
    local_1c = DAT_005547f4;
    local_18 = DAT_005547f8;
    local_14 = DAT_005547fc;
    puVar5 = (undefined4 *)(param_1 + 0x46c);
  }
LAB_0052ee00:
  if ((*(int *)(param_1 + 0x484) == 0) || (param_3 == (undefined4 *)0x0)) {
    piVar1 = *(int **)(param_1 + 0x468);
    iVar4 = *piVar1;
    iVar3 = param_1 + 0x4a0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x468);
    iVar4 = *piVar1;
    iVar3 = param_1 + 0x500;
  }
  uStack_34 = 0;
  iVar3 = (**(code **)(iVar4 + 0x28))(piVar1,iVar3,0,param_3 == (undefined4 *)0x1,&local_20,puVar5);
  if (iVar3 < 0) {
    *puVar5 = 0;
    return 0;
  }
  iVar3 = FUN_004de3f0(param_1,puVar7,*(int *)(param_1 + 0x494) - *(int *)(param_1 + 0x48c),
                       *(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x490),0,0,&local_18);
  if (iVar3 < 0) {
    return 0;
  }
  (**(code **)(*(int *)*puVar5 + 0x10))((int *)*puVar5,&stack0xffffffd4);
  *(undefined4 *)(param_1 + 0x488) = unaff_EDI;
  if ((*(int *)(param_1 + 0x484) != 0) && (local_1c != 0)) {
    uVar2 = FUN_0052ec80(&uStack_34,param_1 + 0x500,*(undefined4 *)(param_1 + 0x54c));
    *(undefined4 *)(param_1 + 0x488) = uVar2;
  }
  FUN_0052eb60(param_1 + 0x428,param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x56c) = unaff_ESI;
  *(int *)(param_1 + 0x568) = param_1;
  return 1;
}


