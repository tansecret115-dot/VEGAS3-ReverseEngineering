/* Module: vidpcore.dll
   Function: FUN_5de75500
   Address: 5de75500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de75500(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  double local_18;
  double local_10;
  double local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_10 = modf((double)param_2,(double *)&local_20);
  local_18 = modf((double)param_3,(double *)&local_20);
  local_8 = local_18 * local_10;
  ceil((double)(param_2 + (float)_DAT_5df1eec0));
  ceil((double)(param_3 + (float)_DAT_5df1eec0));
  iVar1 = ftol();
  iVar7 = iVar1 + 1;
  iVar2 = ftol();
  iVar6 = iVar2 + 1;
  *param_1 = iVar1 + 2;
  iVar1 = (iVar1 + 2) * 4;
  param_1[2] = iVar1;
  param_1[1] = iVar2 + 2;
  pvVar3 = GlobalAlloc(0x40,iVar1 * (iVar2 + 2));
  pvVar4 = GlobalLock(pvVar3);
  param_1[3] = (int)pvVar4;
  pvVar3 = GlobalAlloc(0x40,param_1[2] * param_1[1]);
  pvVar4 = GlobalLock(pvVar3);
  param_1[4] = (int)pvVar4;
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = *param_1;
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = iVar2 * iVar1 + iVar5;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(param_1[3] + iVar2 * 4) = 0;
          iVar2 = *param_1;
        } while (iVar5 < iVar2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  iVar1 = 0;
  if (0 < iVar6) {
    do {
      iVar2 = 0;
      if (0 < iVar7) {
        do {
          iVar5 = *param_1 * iVar1 + iVar2;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(param_1[3] + iVar5 * 4) = 0x3f800000;
        } while (iVar2 < iVar7);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar6);
  }
  iVar1 = 0;
  if (0 < iVar7) {
    do {
      iVar2 = *param_1 * iVar6 + iVar1;
      iVar1 = iVar1 + 1;
      *(float *)(param_1[3] + iVar2 * 4) = (float)local_18;
    } while (iVar1 < iVar7);
  }
  *(float *)(param_1[3] + (*param_1 * iVar6 + iVar7) * 4) = (float)local_8;
  iVar1 = 0;
  if (0 < iVar6) {
    do {
      iVar2 = *param_1 * iVar1;
      iVar1 = iVar1 + 1;
      *(float *)(param_1[3] + (iVar2 + iVar7) * 4) = (float)local_10;
    } while (iVar1 < iVar6);
  }
  iVar2 = *param_1 + -1;
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = *param_1 * iVar1 + iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(param_1[4] + iVar7 * 4) =
               *(float *)(param_1[3] + iVar7 * 4) - *(float *)(param_1[3] + 4 + iVar7 * 4);
        } while (iVar6 < iVar2);
      }
      iVar6 = *param_1 * iVar1 + iVar2;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(param_1[4] + iVar6 * 4) = *(undefined4 *)(param_1[3] + iVar6 * 4);
    } while (iVar1 < param_1[1]);
  }
  return 1;
}


