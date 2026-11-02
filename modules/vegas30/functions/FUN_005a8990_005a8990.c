/* Module: vegas30.exe
   Function: FUN_005a8990
   Address: 005a8990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005a8990(undefined4 param_1,int param_2,uint param_3,int param_4,float *param_5,
                  float *param_6,undefined4 *param_7)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  uint local_8;
  int local_4;
  
  *param_5 = 0.0;
  param_5[1] = 0.0;
  piVar9 = (int *)0x0;
  *param_6 = 0.0;
  param_6[1] = 0.0;
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
    param_7[1] = 0;
  }
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar3 = *piVar2;
  local_8 = param_3;
  local_4 = param_4;
  iVar6 = _SfList_FindSortedInsertIndexRange_20(piVar2,&local_8,0,0xffffffff,&LAB_005c5a20);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -1;
  }
  if (iVar6 < iVar3 + -1) {
    iVar4 = *(int *)(param_2 + 0x28);
    iVar8 = iVar6;
    while( true ) {
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(int *)(iVar4 + 4) * iVar6 + *(int *)(iVar4 + 8));
      iVar10 = iVar8 * *(int *)(iVar4 + 4) + *(int *)(iVar4 + 8);
      if (((piVar9[5] <= param_4) && ((piVar9[5] < param_4 || ((uint)piVar9[4] <= param_3)))) &&
         ((param_4 < *(int *)(iVar10 + 0x14) ||
          ((param_4 <= *(int *)(iVar10 + 0x14) && (param_3 < *(uint *)(iVar10 + 0x10))))))) break;
      iVar6 = iVar6 + 1;
      if (iVar3 + -1 <= iVar6) {
        return piVar9;
      }
    }
    if (*piVar9 != 0) {
      uVar7 = piVar9[4];
      fVar11 = (float10)FUN_005a88a0(param_3 - uVar7,(param_4 - piVar9[5]) - (uint)(param_3 < uVar7)
                                     ,*(uint *)(iVar10 + 0x10) - uVar7,
                                     (*(int *)(iVar10 + 0x14) - piVar9[5]) -
                                     (uint)(*(uint *)(iVar10 + 0x10) < uVar7),piVar9[9],piVar9[0xc],
                                     piVar9[0xb]);
      *param_5 = (float)fVar11;
      if ((float)piVar9[0xc] <= (float)piVar9[0xb]) {
        fVar1 = (float)piVar9[0xb];
      }
      else {
        fVar1 = (float)piVar9[0xc];
      }
      param_5[1] = fVar1;
    }
    iVar6 = piVar9[1];
    if (iVar6 != 0) {
      uVar7 = *(uint *)(iVar6 + 0x20) + *(uint *)(iVar6 + 0x18);
      iVar3 = *(int *)(iVar10 + 0x14);
      iVar6 = *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x1c) +
              (uint)CARRY4(*(uint *)(iVar6 + 0x20),*(uint *)(iVar6 + 0x18));
      if ((iVar3 < iVar6) || ((iVar3 <= iVar6 && (*(uint *)(iVar10 + 0x10) <= uVar7)))) {
        uVar7 = *(uint *)(iVar10 + 0x10);
        iVar6 = iVar3;
      }
      uVar5 = piVar9[4];
      fVar11 = (float10)FUN_005a88a0(param_3 - uVar5,(param_4 - piVar9[5]) - (uint)(param_3 < uVar5)
                                     ,uVar7 - uVar5,(iVar6 - piVar9[5]) - (uint)(uVar7 < uVar5),
                                     piVar9[0x1f],piVar9[0x22],piVar9[0x21]);
      *param_6 = (float)fVar11;
      if (fVar11 <= (float10)_DAT_00610f20) {
        fVar11 = (float10)_DAT_00610f20;
      }
      *param_6 = (float)fVar11;
      if ((float)piVar9[0x22] <= (float)piVar9[0x21]) {
        fVar1 = (float)piVar9[0x21];
      }
      else {
        fVar1 = (float)piVar9[0x22];
      }
      param_6[1] = fVar1;
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)(iVar10 + 0x10);
      param_7[1] = *(undefined4 *)(iVar10 + 0x14);
    }
  }
  return piVar9;
}


