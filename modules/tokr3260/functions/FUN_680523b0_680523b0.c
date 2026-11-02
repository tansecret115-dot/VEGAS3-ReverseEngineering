/* Module: tokr3260.dll
   Function: FUN_680523b0
   Address: 680523b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_680523b0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint *puVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 local_2020 [2045];
  undefined4 uStackY_2c;
  undefined *puVar14;
  
  piVar3 = param_3;
  FUN_6805a6a0();
  iVar11 = 0;
  param_3[8] = 0;
  if (0 < param_4) {
    puVar14 = &DAT_6805d030;
    do {
      iVar7 = *(int *)(param_3[0x12] + iVar11 * 4);
      iVar5 = *(int *)(iVar7 + 0xf21c);
      FUN_68053cc0(iVar5);
      *(undefined4 *)(iVar5 + 0xf218) = *(undefined4 *)(param_3[0x12] + iVar11 * 4);
      *(undefined4 *)(iVar5 + 0xf21c) = *(undefined4 *)(iVar7 + 0xf218);
      iVar7 = 0x61a4;
      do {
        iVar4 = iVar7 + 4;
        *(undefined4 *)(iVar5 + -0x24 + iVar4) = *(undefined4 *)(iVar7 + *(int *)(iVar5 + 0xf218));
        iVar7 = iVar4;
      } while (iVar4 < 0x61b4);
      iVar11 = iVar11 + 1;
      *(undefined4 *)(iVar5 + 0x61b4) = *(undefined4 *)(*(int *)(iVar5 + 0xf218) + 0x61bc);
      iVar7 = param_3[0x12];
      *(undefined **)(&stack0xffffffec + iVar11 * 4) = puVar14;
      puVar14 = puVar14 + 0x1000;
      *(int *)(iVar7 + -4 + iVar11 * 4) = iVar5;
    } while (iVar11 < param_4);
  }
  iVar11 = 0;
  *param_3 = param_5;
  if (0 < param_4) {
    do {
      iVar7 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      *(int *)(*(int *)(param_3[0x12] + iVar7) + 0xf210) = *param_3;
    } while (iVar11 < param_4);
  }
  iVar11 = param_3[5];
  iVar7 = 0;
  if (0 < param_4) {
    do {
      iVar5 = *(int *)(param_3[0x12] + iVar7 * 4);
      if (((param_3[2] == 2) && (param_3[3] == 0x12)) && (*(int *)(iVar5 + 0xf214) == 1)) {
        *(undefined4 *)(iVar5 + 0x6180) = 1;
      }
      else {
        *(undefined4 *)(iVar5 + 0x6180) = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_4);
  }
  iVar7 = 0;
  if (0 < param_4) {
    do {
      iVar5 = *(int *)(param_3[0x12] + iVar7 * 4);
      *(int *)(iVar5 + 0xf1f8) = param_5 % iVar11;
      iVar4 = param_3[5];
      *(int *)(iVar5 + 0xf200) = iVar4;
      *(int *)(iVar5 + 0xf204) = *(int *)(iVar5 + 0xf1d8) * iVar4 * 8;
      if (param_5 % iVar11 == 0) {
        *(undefined4 *)(iVar5 + 0xf208) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0xf208) = *(undefined4 *)(*(int *)(iVar5 + 0xf218) + 0xf208);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_4);
  }
  iVar11 = 0;
  if (0 < param_4) {
    do {
      iVar11 = iVar11 + 1;
      puVar10 = *(undefined4 **)(param_3[0x12] + -4 + iVar11 * 4);
      *puVar10 = puVar10[0x3c7a];
      puVar10[1] = puVar10[0x3c7b];
    } while (iVar11 < param_4);
  }
  uStackY_2c = 0x68052551;
  iVar11 = FUN_68059e20(param_1,(int)&stack0xfffffff0,(int *)param_3[0x12],(int *)param_3[0x13],
                        param_4,param_3[3]);
  if (iVar11 == -999999) {
    return 0xfff0bdc1;
  }
  param_5 = 0;
  if (0 < param_4) {
    param_1 = 0;
    do {
      iVar11 = *(int *)(param_3[0x12] + param_5 * 4);
      iVar7 = 0;
      bVar2 = false;
      piVar9 = (int *)(iVar11 + 0x10);
      piVar8 = piVar9;
      do {
        if ((*piVar8 != 0) || (*(int *)(*(int *)(iVar11 + 0xf218) + 0x10 + iVar7) != 0)) {
          bVar2 = true;
          break;
        }
        iVar7 = iVar7 + 0x40;
        piVar8 = piVar8 + 0x10;
      } while (iVar7 < 0x100);
      iVar7 = 0;
      do {
        if ((*piVar9 != 0) || (*(int *)(*(int *)(iVar11 + 0xf218) + 0x10 + iVar7) != 0)) {
          bVar2 = true;
          break;
        }
        iVar7 = iVar7 + 0x40;
        piVar9 = piVar9 + 0x10;
      } while (iVar7 < 0x100);
      iVar11 = param_3[0x13];
      iVar7 = param_3[0x14];
      iVar5 = 0;
      piVar9 = (int *)&stack0xffffffe0;
      do {
        iVar4 = *(int *)(*(int *)(iVar11 + param_5 * 4) + 8) + 0x400 + iVar5;
        iVar5 = iVar5 + 0xc00;
        *piVar9 = iVar4;
        piVar9 = piVar9 + 1;
      } while (iVar5 < 0x3000);
      if (bVar2) {
        uStackY_2c = 0x68052633;
        iVar11 = FUN_68059bf0((int *)&stack0xffffffe0,(int)local_2020 + param_1,(int *)&DAT_6805cf30
                              ,0x6805cf30,4,*(int **)(iVar7 + param_5 * 4));
        if (iVar11 == -999999) {
          return 0xfff0bdc1;
        }
      }
      else {
        puVar10 = (undefined4 *)(&DAT_6805d030 + param_1);
        puVar12 = (undefined4 *)((int)local_2020 + param_1);
        for (iVar11 = 0x400; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        iVar11 = 0;
        puVar10 = (undefined4 *)&stack0xffffffe0;
        do {
          iVar5 = iVar11 + 0x400;
          puVar12 = (undefined4 *)*puVar10;
          puVar13 = (undefined4 *)(iVar11 + **(int **)(iVar7 + param_5 * 4));
          for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          iVar11 = iVar5;
          puVar10 = puVar10 + 1;
        } while (iVar5 < 0x1000);
      }
      param_5 = param_5 + 1;
      param_1 = param_1 + 0x1000;
    } while (param_5 < param_4);
  }
  iVar11 = 0;
  if (param_4 < 1) {
    return 0;
  }
  param_3 = (int *)0x0;
  while( true ) {
    puVar1 = (uint *)((uint *)piVar3[0x12])[iVar11];
    puVar1[0x3c88] = *(uint *)piVar3[0x12];
    if ((int)puVar1[0x3c76] < 0x15) {
      puVar1[0x186d] = 0xf;
      puVar1[0x1861] = 3;
      puVar1[0x1862] = 3;
      puVar1[0x1863] = 3;
      puVar1[0x1864] = 3;
      puVar1[1] = 1;
      puVar1[4] = 0;
      puVar1[0x44] = 0;
      *puVar1 = 1;
      puVar1[3] = 0;
      puVar1[0x141f] = 0;
      iVar7 = FUN_68053d90((int *)puVar1);
    }
    else {
      iVar7 = FUN_68054780((int)local_2020 + (int)param_3,(int)(param_3 + 0x1a01740c),(int *)puVar1)
      ;
    }
    if (((iVar7 == -999999) || (uVar6 = FUN_68056ab0(puVar1,iVar7,param_2), uVar6 == 0xfff0bdc1)) ||
       (uVar6 = puVar1[0x3c82] + puVar1[0x3c77] * 8, puVar1[0x3c82] = uVar6,
       (int)puVar1[0x3c81] < (int)uVar6)) break;
    iVar11 = iVar11 + 1;
    param_3 = param_3 + 0x400;
    if (param_4 <= iVar11) {
      return 0;
    }
  }
  return 0xfff0bdc1;
}


