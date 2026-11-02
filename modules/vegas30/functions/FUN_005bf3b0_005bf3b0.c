/* Module: vegas30.exe
   Function: FUN_005bf3b0
   Address: 005bf3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005bf3b0(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_14 = param_1;
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
  local_18 = 0;
  iVar1 = FUN_005be910(param_2,param_5);
  iVar2 = FUN_005be790(param_2,param_5,&local_1c);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      if ((param_1 != -0x80) && (iVar2 = FUN_00522a00(local_1c), iVar2 != 0)) {
        FUN_005bec40(param_2,*param_3,param_5,0,&local_10,0,0,0);
        iVar4 = FUN_0050c870(param_1 + 0x80,param_6,param_7,local_1c);
        if (iVar4 < 0) {
          iVar4 = FUN_0050c410(iVar2,&local_14,param_6,param_7);
        }
        iVar5 = FUN_005be910(param_2,param_5);
        if (((int)param_7 <= local_c) &&
           ((((int)param_7 < local_c || (param_6 < local_10)) && (iVar1 != iVar5)))) {
          *param_3 = *param_3 + 1;
        }
        puVar10 = (uint *)(*param_3 * *(int *)(iVar2 + 4) + *(int *)(iVar2 + 8));
        puVar11 = (uint *)(*(int *)(iVar2 + 4) * iVar4 + *(int *)(iVar2 + 8));
        if (((puVar10 != (uint *)0x0) && (puVar11 != (uint *)0x0)) && (puVar10 != puVar11)) {
          uVar9 = *puVar10;
          puVar12 = puVar11;
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)puVar12 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          puVar11[1] = param_6;
          puVar11[2] = param_7;
        }
        local_18 = 1;
        iVar1 = iVar5;
      }
      goto LAB_005bf67a;
    }
    if (iVar2 != 3) goto LAB_005bf67a;
  }
  if (iVar2 == 1) {
    piVar3 = *(int **)(param_1 + 0x78);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x7c);
  }
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  if ((local_1c < 0) || (iVar2 + -1 < local_1c)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar3[2] + local_1c * 4);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x60) != 0)) {
    FUN_005bec40(param_2,*param_3,param_5,0,&local_8,0,0,0);
    iVar4 = _SfVideoKeyframe_InsertSmart_20(iVar2,param_6,param_7,0xffffffff,0xffffffff);
    if (iVar4 < 0) {
      iVar4 = _SfVideoKeyframe_Find_24(iVar2,&local_10,param_6,param_7,0xffffffff,0xffffffff);
    }
    iVar5 = FUN_005be910(param_2,param_5);
    if (((int)param_7 <= local_4) &&
       ((((int)param_7 < local_4 || (param_6 < local_8)) && (iVar1 != iVar5)))) {
      *param_3 = *param_3 + 1;
    }
    iVar1 = *(int *)(iVar2 + 0x60);
    puVar11 = (uint *)(*(int *)(iVar1 + 4) * *param_3 + *(int *)(iVar1 + 8));
    puVar10 = (uint *)(*(int *)(iVar1 + 4) * iVar4 + *(int *)(iVar1 + 8));
    iVar1 = iVar5;
    if (((puVar11 != (uint *)0x0) && (puVar10 != (uint *)0x0)) && (puVar11 != puVar10)) {
      if ((LPCVOID)puVar10[5] != (LPCVOID)0x0) {
        pvVar6 = GlobalHandle((LPCVOID)puVar10[5]);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle((LPCVOID)puVar10[5]);
        GlobalFree(pvVar6);
      }
      puVar12 = puVar11;
      puVar14 = puVar10;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      pvVar6 = GlobalAlloc(2,puVar11[4]);
      puVar7 = GlobalLock(pvVar6);
      puVar10[5] = (uint)puVar7;
      param_1 = local_14;
      if (puVar7 == (undefined4 *)0x0) goto LAB_005bf67a;
      uVar9 = puVar11[4];
      puVar13 = (undefined4 *)puVar11[5];
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar7 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *puVar10 = param_6;
      puVar10[1] = param_7;
    }
    local_18 = 1;
    param_1 = local_14;
  }
LAB_005bf67a:
  param_5 = iVar1;
  if (param_4 != (int *)0x0) {
    *param_4 = param_5;
  }
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return local_18;
}


