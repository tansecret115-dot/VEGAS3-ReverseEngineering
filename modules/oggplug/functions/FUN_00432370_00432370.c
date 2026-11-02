/* Module: oggplug.dll
   Function: FUN_00432370
   Address: 00432370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00432370(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  piVar1 = param_1 + 1;
  iVar2 = *(int *)(param_1[0x10] + 4);
  iVar3 = *(int *)(param_1[0x10] + 0x68);
  iVar4 = *(int *)(iVar2 + 0x1c);
  FUN_00430f40((int)param_1);
  FUN_00441de0(piVar1,*param_2,param_2[1]);
  uVar5 = FUN_00442100(piVar1,1);
  if (uVar5 != 0) {
    return 0xffffff79;
  }
  uVar5 = FUN_00442100(piVar1,*(int *)(iVar3 + 0x34));
  if (uVar5 == 0xffffffff) {
    return 0xffffff78;
  }
  param_1[10] = uVar5;
  iVar7 = **(int **)(iVar4 + 0x24 + uVar5 * 4);
  param_1[7] = iVar7;
  if (iVar7 == 0) {
    param_1[6] = 0;
    param_1[8] = 0;
  }
  else {
    uVar6 = FUN_00442100(piVar1,1);
    param_1[6] = uVar6;
    uVar6 = FUN_00442100(piVar1,1);
    param_1[8] = uVar6;
    if (uVar6 == 0xffffffff) {
      return 0xffffff78;
    }
  }
  param_1[0xc] = param_2[4];
  param_1[0xd] = param_2[5];
  uVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[0xe] = uVar6 - 3;
  param_1[0xf] = iVar7 - (uint)(uVar6 < 3);
  param_1[0xb] = param_2[3];
  param_1[9] = *(int *)(iVar4 + param_1[7] * 4);
  iVar7 = FUN_00430ed0((int)param_1,*(int *)(iVar2 + 4) << 2);
  *param_1 = iVar7;
  iVar7 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    do {
      iVar8 = FUN_00430ed0((int)param_1,param_1[9] << 2);
      *(int *)(*param_1 + iVar7 * 4) = iVar8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar2 + 4));
  }
  uVar9 = (**(code **)((&PTR_PTR_00452c60)
                       [*(int *)(iVar4 + 0x124 +
                                *(int *)(*(int *)(iVar4 + 0x24 + uVar5 * 4) + 0xc) * 4)] + 0x1c))
                    (param_1,*(undefined4 *)(*(int *)(iVar3 + 0x38) + uVar5 * 4));
  return uVar9;
}


