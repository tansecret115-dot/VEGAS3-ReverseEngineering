/* Module: oggplug.dll
   Function: FUN_004304d0
   Address: 004304d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004304d0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  iVar1 = param_1[7];
  if (iVar1 == 0) {
    return 0xffffff7f;
  }
  uVar2 = FUN_00442100(param_2,8);
  iVar6 = 0;
  *(uint *)(iVar1 + 0x1c) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    puVar7 = (undefined4 *)(iVar1 + 0x924);
    do {
      puVar3 = calloc(1,0x34);
      *puVar7 = puVar3;
      iVar4 = FUN_004361b0(param_2,puVar3);
      if (iVar4 != 0) goto LAB_0043075b;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0x1c));
  }
  uVar2 = FUN_00442100(param_2,6);
  iVar6 = 0;
  *(uint *)(iVar1 + 0x10) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar8 = (int *)(iVar1 + 0x424);
    do {
      uVar2 = FUN_00442100(param_2,0x10);
      piVar8[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (0 < (int)uVar2)) goto LAB_0043075b;
      iVar4 = (**(code **)((&PTR_PTR_00452c48)[uVar2] + 4))(param_1,param_2);
      *piVar8 = iVar4;
      if (iVar4 == 0) goto LAB_0043075b;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0x10));
  }
  uVar2 = FUN_00442100(param_2,6);
  iVar6 = 0;
  *(uint *)(iVar1 + 0x14) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar8 = (int *)(iVar1 + 0x624);
    do {
      uVar2 = FUN_00442100(param_2,0x10);
      piVar8[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (1 < (int)uVar2)) goto LAB_0043075b;
      iVar4 = (**(code **)((&PTR_PTR_00452c4c)[uVar2] + 4))(param_1,param_2);
      *piVar8 = iVar4;
      if (iVar4 == 0) goto LAB_0043075b;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0x14));
  }
  uVar2 = FUN_00442100(param_2,6);
  iVar6 = 0;
  *(uint *)(iVar1 + 0x18) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar8 = (int *)(iVar1 + 0x824);
    do {
      uVar2 = FUN_00442100(param_2,0x10);
      piVar8[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (2 < (int)uVar2)) goto LAB_0043075b;
      iVar4 = (**(code **)((&PTR_PTR_00452c54)[uVar2] + 4))(param_1,param_2);
      *piVar8 = iVar4;
      if (iVar4 == 0) goto LAB_0043075b;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0x18));
  }
  uVar2 = FUN_00442100(param_2,6);
  iVar6 = 0;
  *(uint *)(iVar1 + 0xc) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar8 = (int *)(iVar1 + 0x224);
    do {
      uVar2 = FUN_00442100(param_2,0x10);
      piVar8[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (0 < (int)uVar2)) goto LAB_0043075b;
      iVar4 = (**(code **)((&PTR_PTR_00452c60)[uVar2] + 4))(param_1,param_2);
      *piVar8 = iVar4;
      if (iVar4 == 0) goto LAB_0043075b;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0xc));
  }
  uVar2 = FUN_00442100(param_2,6);
  iVar6 = 0;
  *(uint *)(iVar1 + 8) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar8 = (int *)(iVar1 + 0x24);
    do {
      pvVar5 = calloc(1,0x10);
      *piVar8 = (int)pvVar5;
      uVar2 = FUN_00442100(param_2,1);
      *(uint *)*piVar8 = uVar2;
      uVar2 = FUN_00442100(param_2,0x10);
      *(uint *)(*piVar8 + 4) = uVar2;
      uVar2 = FUN_00442100(param_2,0x10);
      *(uint *)(*piVar8 + 8) = uVar2;
      uVar2 = FUN_00442100(param_2,8);
      *(uint *)(*piVar8 + 0xc) = uVar2;
      iVar4 = *piVar8;
      if (((0 < *(int *)(iVar4 + 4)) || (0 < *(int *)(iVar4 + 8))) ||
         (*(int *)(iVar1 + 0xc) <= *(int *)(iVar4 + 0xc))) goto LAB_0043075b;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(iVar1 + 8));
  }
  uVar2 = FUN_00442100(param_2,1);
  if (uVar2 == 1) {
    return 0;
  }
LAB_0043075b:
  FUN_00430070(param_1);
  return 0xffffff7b;
}


