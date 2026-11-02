/* Module: sftrans1.dll
   Function: FUN_00542e20
   Address: 00542e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00542e20(int *param_1,HDC param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  
  iVar10 = 0;
  if (param_1[4] == 0) {
    if (*param_1 != 0) {
      iVar10 = FUN_004dce40(param_1[1],0,&LAB_005430f0);
      if (iVar10 < 0) {
        return iVar10;
      }
      iVar5 = *param_1;
      if ((0 < iVar5) && (iVar5 < *(int *)param_1[1])) {
        FUN_004dc400((int *)param_1[1],iVar5,0xffffffff,1);
      }
    }
    param_1[4] = 1;
  }
  iVar5 = FUN_004dc8e0(param_1[1],0,0xffffffff,param_3,FUN_00542d70);
  if (-1 < iVar5) {
    piVar1 = (int *)(*(int *)(*(int *)(param_1[1] + 8) + iVar5 * 4) + 0x40);
    if ((*piVar1 == 0) &&
       (iVar10 = FUN_004dd740(piVar1,8,0xffffffff,0xffffffff,0x80000004,0,0,0), iVar10 < 0)) {
      return iVar10;
    }
    piVar4 = (int *)*piVar1;
    if (*piVar4 != 0) {
      param_1[2] = (int)piVar4;
      return iVar10;
    }
    DVar6 = GetKerningPairsA(param_2,0,(LPKERNINGPAIR)0x0);
    if (DVar6 == 0) {
      param_1[2] = *piVar1;
      return -0x7fffbffb;
    }
    iVar10 = FUN_004dc350(piVar4,DVar6,0);
    if ((-1 < iVar10) &&
       (DVar7 = GetKerningPairsA(param_2,DVar6,(LPKERNINGPAIR)piVar4[2]), DVar7 == DVar6)) {
      iVar10 = 1;
      if (1 < *piVar4) {
        puVar9 = (ushort *)piVar4[2];
        do {
          puVar8 = (ushort *)((int)puVar9 + piVar4[1]);
          if ((*puVar8 < *puVar9) ||
             ((*puVar8 <= *puVar9 &&
              ((puVar8[1] < puVar9[1] || (puVar9[1] < puVar8[1] == 0xffffffff)))))) {
            iVar10 = FUN_004dce40(piVar4,0,&LAB_005430a0);
            if (-1 < iVar10) goto LAB_00542fa2;
            goto LAB_00542f96;
          }
          iVar10 = iVar10 + 1;
          puVar9 = puVar8;
        } while (iVar10 < *piVar4);
      }
      param_1[2] = *piVar1;
      return 0;
    }
LAB_00542f96:
    FUN_004dc400(piVar4,0,0xffffffff,0);
LAB_00542fa2:
    param_1[2] = *piVar1;
    return iVar10;
  }
  piVar1 = (int *)param_1[3];
  DVar6 = GetKerningPairsA(param_2,0,(LPKERNINGPAIR)0x0);
  if (DVar6 == 0) {
    param_1[2] = param_1[3];
    return -0x7fffbffb;
  }
  iVar10 = FUN_004dc350(piVar1,DVar6,0);
  if ((-1 < iVar10) &&
     (DVar7 = GetKerningPairsA(param_2,DVar6,(LPKERNINGPAIR)piVar1[2]), DVar7 == DVar6)) {
    iVar10 = 1;
    if (1 < *piVar1) {
      puVar9 = (ushort *)piVar1[2];
      do {
        puVar8 = (ushort *)((int)puVar9 + piVar1[1]);
        if ((*puVar8 < *puVar9) ||
           ((*puVar8 <= *puVar9 &&
            ((uVar2 = puVar9[1], uVar3 = puVar8[1], uVar2 >= uVar3 && uVar2 != uVar3 ||
             (uVar2 < uVar3 == 0xffffffff)))))) {
          iVar10 = FUN_004dce40(piVar1,0,&LAB_005430a0);
          if (-1 < iVar10) goto LAB_0054307e;
          goto LAB_00543072;
        }
        iVar10 = iVar10 + 1;
        puVar9 = puVar8;
      } while (iVar10 < *piVar1);
    }
    param_1[2] = param_1[3];
    return 0;
  }
LAB_00543072:
  FUN_004dc400(piVar1,0,0xffffffff,0);
LAB_0054307e:
  param_1[2] = param_1[3];
  return iVar10;
}


