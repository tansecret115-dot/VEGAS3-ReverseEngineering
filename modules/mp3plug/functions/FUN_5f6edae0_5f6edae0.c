/* Module: mp3plug.dll
   Function: FUN_5f6edae0
   Address: 5f6edae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6edae0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  float10 fVar12;
  uint local_2c;
  uint local_28;
  
  *param_1 = param_3;
  uVar1 = FUN_5f705910(*(int *)(param_2 + 8),2);
  uVar2 = FUN_5f705910(*(int *)(param_2 + 8),1);
  pfVar3 = (float *)FUN_5f705910(*(int *)(param_2 + 8),0);
  FUN_5f707c30(uVar1,uVar2,pfVar3,*(uint *)(*(int *)param_1[1] + 0xc),
               *(undefined4 *)(*(int *)param_1[1] + 0x10),
               *(float *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0xe0),
               *(int *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0x1dc),(float *)param_1[4]);
  local_28 = 7;
  uVar2 = 8;
  uVar1 = 6;
  piVar10 = param_1;
  do {
    uVar4 = FUN_5f705910(*(int *)(param_2 + 0xc),uVar2);
    uVar5 = FUN_5f705910(*(int *)(param_2 + 0xc),local_28);
    pfVar3 = (float *)FUN_5f705910(*(int *)(param_2 + 0xc),uVar1);
    iVar6 = *(int *)(*(int *)(param_1[2] + 4) + 0x1c);
    FUN_5f707c30(uVar4,uVar5,pfVar3,*(uint *)(*(int *)(param_1[1] + 4) + 0xc),
                 *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x10),*(float *)(iVar6 + 0xe0),
                 *(int *)(iVar6 + 0x1dc),(float *)piVar10[10]);
    uVar1 = uVar1 - 1;
    local_28 = local_28 - 1;
    uVar2 = uVar2 - 1;
    piVar10 = piVar10 + 6;
  } while (3 < (int)uVar1);
  FUN_5f6d8bb0(0,param_1[0x22],**(uint **)param_1[1]);
  piVar10 = (int *)param_1[1];
  FUN_5f708960(param_1[4],param_1 + 10,*(int *)(*piVar10 + 0xc),*(int *)(piVar10[1] + 0xc),
               piVar10[2]);
  iVar6 = FUN_5f705910(*(int *)(param_2 + 8),0);
  FUN_5f708a50(iVar6,param_1[4],**(int **)param_1[1],(*(int **)param_1[1])[1],
               *(int *)param_1[1] + 0x14,*(float *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0xe0),
               param_1[5],param_1[6]);
  FUN_5f708e00(param_1[5],param_1[6],**(int **)param_1[1],(int *)(*(int *)param_1[1] + 0x3cc),
               (float *)param_1[7],param_1[8]);
  FUN_5f708ff0((float *)param_1[7],(float *)param_1[8],**(uint **)param_1[1],(float *)param_1[9]);
  if (param_1[0x99] != 0) {
    FUN_5f709230(*(uint **)param_1[1],param_1[7],
                 *(float *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0x158),(float *)param_1[0x22]);
    FUN_5f7057c0((uint *)param_1[0x1c],(undefined4 *)param_1[0x22]);
  }
  FUN_5f709070(*(uint **)param_1[1],param_1[9],param_1[7],
               *(float *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0x158),
               *(undefined4 *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0x15c),(float *)param_1[0x22]);
  if (param_1[0x99] == 0) {
    FUN_5f7057c0((uint *)param_1[0x1c],(undefined4 *)param_1[0x22]);
  }
  iVar6 = FUN_5f705910(param_1[0x1c],1);
  iVar7 = FUN_5f705910(param_1[0x1c],2);
  FUN_5f709340(param_1[0x22],iVar6,iVar7,*(float *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0x16c),
               (*(int **)param_1[1])[0xee],*(float *)(*(int *)(*(int *)param_1[2] + 0x1c) + 0x1d4),
               **(int **)param_1[1],param_1[0x22]);
  fVar12 = FUN_5f7093c0(param_1[5],param_1[0x22],**(int **)param_1[1],*(int *)param_1[1] + 0x14);
  iVar6 = 0;
  param_1[0x1e] = (int)(float)fVar12;
  local_28 = 6;
  do {
    FUN_5f6d8bb0(0,param_1[iVar6 + 0x23],**(uint **)(param_1[1] + 4));
    iVar7 = FUN_5f705910(*(int *)(param_2 + 0xc),local_28);
    FUN_5f708a50(iVar7,param_1[iVar6 * 6 + 10],**(int **)(param_1[1] + 4),
                 (*(int **)(param_1[1] + 4))[1],*(int *)(param_1[1] + 4) + 0x14,
                 *(float *)(*(int *)(*(int *)(param_1[2] + 4) + 0x1c) + 0xe0),
                 param_1[iVar6 * 6 + 0xb],param_1[iVar6 * 6 + 0xc]);
    FUN_5f708e00(param_1[iVar6 * 6 + 0xb],param_1[iVar6 * 6 + 0xc],**(int **)(param_1[1] + 4),
                 (int *)(*(int *)(param_1[1] + 4) + 0x3cc),(float *)param_1[iVar6 * 6 + 0xd],
                 param_1[iVar6 * 6 + 0xe]);
    FUN_5f708ff0((float *)param_1[iVar6 * 6 + 0xd],(float *)param_1[iVar6 * 6 + 0xe],
                 **(uint **)(param_1[1] + 4),(float *)param_1[iVar6 * 6 + 0xf]);
    if (param_1[0x99] != 0) {
      FUN_5f709230(*(uint **)(param_1[1] + 4),param_1[iVar6 * 6 + 0xd],
                   *(float *)(*(int *)(*(int *)(param_1[2] + 4) + 0x1c) + 0x158),
                   (float *)param_1[iVar6 + 0x23]);
      FUN_5f7057c0((uint *)param_1[0x1d],(undefined4 *)param_1[iVar6 + 0x23]);
    }
    iVar7 = *(int *)(*(int *)(param_1[2] + 4) + 0x1c);
    FUN_5f709070(*(uint **)(param_1[1] + 4),param_1[iVar6 * 6 + 0xf],param_1[iVar6 * 6 + 0xd],
                 *(float *)(iVar7 + 0x158),*(undefined4 *)(iVar7 + 0x15c),
                 (float *)param_1[iVar6 + 0x23]);
    if (param_1[0x99] == 0) {
      FUN_5f7057c0((uint *)param_1[0x1d],(undefined4 *)param_1[iVar6 + 0x23]);
    }
    iVar8 = FUN_5f705910(param_1[0x1d],1);
    iVar9 = FUN_5f705910(param_1[0x1d],2);
    iVar7 = *(int *)(*(int *)(param_1[2] + 4) + 0x1c);
    FUN_5f709340(param_1[iVar6 + 0x23],iVar8,iVar9,*(float *)(iVar7 + 0x16c),
                 (*(int **)(param_1[1] + 4))[0xee],*(float *)(iVar7 + 0x1d4),
                 **(int **)(param_1[1] + 4),param_1[iVar6 + 0x23]);
    fVar12 = FUN_5f7093c0(param_1[iVar6 * 6 + 0xb],param_1[iVar6 + 0x23],**(int **)(param_1[1] + 4),
                          *(int *)(param_1[1] + 4) + 0x14);
    param_1[iVar6 + 0x1f] = (int)(float)fVar12;
    local_28 = local_28 - 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  iVar6 = param_1[1];
  if ((*(int *)(iVar6 + 0x1d8) != 0) && (0 < *(int *)(*(int *)(iVar6 + 4) + 0x930))) {
    iVar7 = 0;
    do {
      iVar6 = *(int *)(iVar6 + 0xc + iVar7 * 4);
      FUN_5f7091c0(iVar7,*(float *)(param_1[0x22] + iVar6 * 4),*(float *)(param_1[7] + iVar6 * 4),
                   param_1 + 0x23,(int)(param_1 + 10));
      iVar6 = param_1[1];
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(int *)(iVar6 + 4) + 0x930));
  }
  if ((((param_3 == 0) || (param_3 == 1)) || (param_3 == 3)) || ((param_3 == 4 || (param_3 == 6))))
  {
    iVar6 = FUN_5f705910(*(int *)(param_2 + 8),0);
    FUN_5f7094b0(*(uint **)param_1[3],param_1[0x22],param_1[5],iVar6,*(int *)param_1[1] + 0x14,
                 (float *)param_1[0x9a],(float *)param_1[0x9e],(float *)param_1[0xa2]);
  }
  else if (param_3 == 2) {
    local_2c = 6;
    piVar10 = param_1;
    piVar11 = param_1;
    do {
      iVar6 = FUN_5f705910(*(int *)(param_2 + 0xc),local_2c);
      FUN_5f7094b0(*(uint **)(param_1[3] + 4),piVar10[0x23],piVar11[0xb],iVar6,
                   *(int *)(param_1[1] + 4) + 0x14,(float *)piVar10[0x9b],(float *)piVar10[0x9f],
                   (float *)piVar10[0xa3]);
      piVar10 = piVar10 + 1;
      local_2c = local_2c - 1;
      piVar11 = piVar11 + 6;
    } while ((int)piVar10 < (int)(param_1 + 3));
  }
  else if (param_3 == 5) {
    iVar6 = FUN_5f705910(*(int *)(param_2 + 8),0);
    FUN_5f7094b0(*(uint **)param_1[3],param_1[0x22],param_1[5],iVar6,*(int *)param_1[1] + 0x14,
                 (float *)param_1[0x9a],(float *)param_1[0x9e],(float *)param_1[0xa2]);
    local_2c = 6;
    piVar10 = param_1;
    piVar11 = param_1;
    do {
      iVar6 = FUN_5f705910(*(int *)(param_2 + 0xc),local_2c);
      FUN_5f7094b0(*(uint **)(param_1[3] + 4),piVar10[0x23],piVar11[0xb],iVar6,
                   *(int *)(param_1[1] + 4) + 0x14,(float *)piVar10[0x9b],(float *)piVar10[0x9f],
                   (float *)piVar10[0xa3]);
      piVar10 = piVar10 + 1;
      local_2c = local_2c - 1;
      piVar11 = piVar11 + 6;
    } while ((int)piVar10 < (int)(param_1 + 3));
  }
  return 0;
}


