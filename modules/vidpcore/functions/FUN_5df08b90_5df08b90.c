/* Module: vidpcore.dll
   Function: FUN_5df08b90
   Address: 5df08b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5df08b90(int param_1,int *param_2,undefined4 *param_3)

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
  piVar6 = &DAT_5df17970;
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
    piVar6 = &DAT_5df17980;
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
      piVar1 = &DAT_5df34890;
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
          local_20 = DAT_5df34820;
          local_1c = DAT_5df34824;
          local_18 = DAT_5df34828;
          local_14 = DAT_5df3482c;
          puVar5 = (undefined4 *)(param_1 + 0x478);
        }
        else {
          local_20 = DAT_5df34810;
          local_1c = DAT_5df34814;
          local_18 = DAT_5df34818;
          local_14 = DAT_5df3481c;
          puVar5 = (undefined4 *)(param_1 + 0x474);
        }
      }
      goto LAB_5df08ce0;
    }
  }
  puVar7 = (undefined4 *)0x1c;
  if (param_3 == (undefined4 *)0x1) {
    local_20 = DAT_5df176e0;
    local_1c = DAT_5df176e4;
    local_18 = DAT_5df176e8;
    local_14 = DAT_5df176ec;
    puVar5 = (undefined4 *)(param_1 + 0x470);
  }
  else {
    local_20 = DAT_5df176d0;
    local_1c = DAT_5df176d4;
    local_18 = DAT_5df176d8;
    local_14 = DAT_5df176dc;
    puVar5 = (undefined4 *)(param_1 + 0x46c);
  }
LAB_5df08ce0:
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
  iVar3 = FUN_5deca500(param_1,puVar7,*(int *)(param_1 + 0x494) - *(int *)(param_1 + 0x48c),
                       *(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x490),0,0,&local_18);
  if (iVar3 < 0) {
    return 0;
  }
  (**(code **)(*(int *)*puVar5 + 0x10))((int *)*puVar5,&stack0xffffffd4);
  *(undefined4 *)(param_1 + 0x488) = unaff_EDI;
  if ((*(int *)(param_1 + 0x484) != 0) && (local_1c != 0)) {
    uVar2 = FUN_5df08b60(&uStack_34,param_1 + 0x500,*(undefined4 *)(param_1 + 0x54c));
    *(undefined4 *)(param_1 + 0x488) = uVar2;
  }
  FUN_5df08a40(param_1 + 0x428,param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x56c) = unaff_ESI;
  *(int *)(param_1 + 0x568) = param_1;
  return 1;
}


