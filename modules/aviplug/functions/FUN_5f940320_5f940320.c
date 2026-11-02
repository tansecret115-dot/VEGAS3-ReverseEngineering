/* Module: aviplug.dll
   Function: FUN_5f940320
   Address: 5f940320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f940320(DWORD param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x94) == -1) {
    return -0x7fff0001;
  }
  if (((int)param_2 < 0) || (*(uint *)(*(int *)(param_1 + 0x1c) + 0x20) <= param_2)) {
    return -0x7ff8ffa9;
  }
  piVar9 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) * param_2 +
                  *(int *)(*(int *)(param_1 + 0x40) + 8));
  if (*(int *)(*piVar9 + 8) != 0x73646976) {
    return -0x7fff0001;
  }
  if ((piVar9[0x10] == 0) && (piVar9[0x11] == 0)) {
    return 0;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar5 = *(int *)(*(int *)(param_1 + 0x34) + 4) + 0x17 + *(int *)(param_1 + 0x90) &
            ~(*(int *)(param_1 + 0x90) - 1U);
  }
  bVar4 = false;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(piVar9[5] + 0xc) == piVar9[8])) {
    uVar5 = uVar5 + 0x7e00;
    bVar4 = true;
  }
  iVar6 = *(int *)(param_1 + 0x7c) + (uint)CARRY4(uVar5,*(uint *)(param_1 + 0x78));
  if ((*(int *)(param_1 + 0x8c) <= iVar6) &&
     ((*(int *)(param_1 + 0x8c) < iVar6 ||
      (*(uint *)(param_1 + 0x88) <= uVar5 + *(uint *)(param_1 + 0x78))))) {
    if (*(int *)(param_1 + 8) == 0) {
      return -0x7ffb1fc6;
    }
    iVar6 = FUN_5f93fd50(param_1);
    if (iVar6 < 0) {
      return iVar6;
    }
  }
  if (bVar4) {
    iVar6 = FUN_5f93f0f0(param_1,param_2);
    if (iVar6 < 0) {
      return iVar6;
    }
    iVar6 = FUN_5f93f580(param_1,param_2);
    if (iVar6 < 0) {
      return iVar6;
    }
  }
  iVar6 = FUN_5f93ffa0(param_1,1);
  if (-1 < iVar6) {
    if ((*(int *)(param_1 + 0x70) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
      *(int *)(*piVar9 + 0x28) = *(int *)(*piVar9 + 0x28) + 1;
    }
    if (param_2 == *(uint *)(param_1 + 0x44)) {
      if (*(int *)(param_1 + 8) != 0) {
        piVar1 = (int *)(*(int *)(param_1 + 0x20) + 8);
        *piVar1 = *piVar1 + 1;
      }
      if (*(int *)(param_1 + 0x70) == 0) {
        piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x18);
        *piVar1 = *piVar1 + 1;
      }
    }
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = piVar9[5];
      if ((*(int *)(iVar7 + 0x14) == 0) && (*(int *)(iVar7 + 0x18) == 0)) {
        *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(param_1 + 0x7c);
      }
      iVar7 = piVar9[5];
      iVar3 = *(int *)(iVar7 + 0xc);
      *(undefined4 *)(iVar7 + 0x24 + iVar3 * 8) = 0x80000000;
      *(undefined4 *)(iVar7 + 0x20 + iVar3 * 8) = 0;
      *(int *)(piVar9[5] + 0xc) = *(int *)(piVar9[5] + 0xc) + 1;
      uVar5 = piVar9[0x10];
      piVar9[0x10] = uVar5 + 1;
      piVar9[0x11] = piVar9[0x11] + (uint)(0xfffffffe < uVar5);
      iVar7 = (*(int *)(piVar9[3] + 0xc) + 1) * 0x10 + piVar9[3];
      *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1;
      piVar9[7] = 1;
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 5;
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar7 = *(int *)(param_1 + 0x34);
      puVar2 = (undefined4 *)(*(int *)(iVar7 + 4) + 8 + iVar7);
      puVar8 = puVar2;
      if ((undefined4 *)(iVar7 + 8) != puVar2) {
        do {
          piVar1 = puVar8 + -4;
          puVar8 = puVar8 + -4;
          if (piVar9[0xd] == *piVar1) break;
        } while ((undefined4 *)(iVar7 + 8) != puVar8);
      }
      *puVar2 = *puVar8;
      puVar2[3] = puVar8[3];
      puVar2[1] = puVar8[1];
      puVar2[2] = puVar8[2];
      *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(*(int *)(param_1 + 0x34) + 4) + 0x10;
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 2;
      return iVar6;
    }
  }
  return iVar6;
}


