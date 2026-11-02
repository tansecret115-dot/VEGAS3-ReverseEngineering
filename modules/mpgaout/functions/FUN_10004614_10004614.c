/* Module: mpgaout.dll
   Function: FUN_10004614
   Address: 10004614
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10004614(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *local_40;
  int local_20;
  int local_10;
  
  iVar12 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  iVar2 = *(int *)(param_4 + 0x18);
  iVar3 = *(int *)(param_4 + 0x14);
  iVar7 = 0;
  iVar4 = *(int *)(param_4 + 8);
  if (0 < iVar3) {
    do {
      iVar9 = iVar12 * 0x100;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + iVar1 * *(int *)(iVar4 + 4 + iVar9);
    } while (iVar12 < iVar3);
  }
  for (iVar12 = iVar3; iVar12 < iVar2; iVar12 = iVar12 + 1) {
    iVar7 = iVar7 + *(int *)(iVar4 + 4 + iVar12 * 0x100);
  }
  iVar12 = 0;
  local_20 = iVar7 + *(int *)(param_1 + 0xc550) + *(int *)(param_1 + 0xc554);
  if (iVar2 < 1) {
    return local_20;
  }
LAB_1000469c:
  local_10 = 0;
  iVar7 = iVar12 + 1;
  iVar9 = local_10;
LAB_10004849:
  local_10 = iVar9;
  if (iVar12 < iVar3) {
    if (iVar1 <= local_10) goto LAB_1000486b;
  }
  else if (0 < local_10) goto LAB_1000486b;
  iVar5 = iVar12 * 0x100;
  iVar10 = 0;
  iVar9 = 1 << ((byte)*(undefined4 *)(iVar4 + 4 + iVar5) & 0x1f);
  if (iVar9 != 2 && -1 < iVar9 + -2) {
    piVar8 = (int *)(iVar5 + 0xc + iVar4);
    do {
      if (iVar10 < 1) {
        pdVar6 = (double *)(*(int *)(param_1 + 0xc560) + *piVar8 * 8);
      }
      else {
        pdVar6 = (double *)(*(int *)(param_1 + 0xc560) + 8 + *piVar8 * 8);
      }
      if (0.0 <= -*(double *)(param_2 + local_10 * 0x100 + iVar12 * 8) + *pdVar6) break;
      piVar8 = piVar8 + 4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9 + -2);
  }
  if (((iVar1 == 2) && (iVar3 <= iVar12)) && (iVar10 < iVar9 + -2)) {
    local_40 = (int *)(iVar10 * 0x10 + iVar5 + 0xc + iVar4);
    do {
      if (iVar10 < 1) {
        pdVar6 = (double *)(*(int *)(param_1 + 0xc560) + *local_40 * 8);
      }
      else {
        pdVar6 = (double *)(*(int *)(param_1 + 0xc560) + 8 + *local_40 * 8);
      }
      if (0.0 <= -*(double *)(param_2 + (1 - local_10) * 0x100 + iVar12 * 8) + *pdVar6) break;
      local_40 = local_40 + 4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9 + -2);
  }
  iVar9 = local_10 + 1;
  if (0 < iVar10) {
    iVar5 = iVar5 + iVar10 * 0x10;
    iVar11 = 2;
    iVar10 = *(int *)(&DAT_1001df00 + *(int *)(param_3 + local_10 * 0x80 + iVar12 * 4) * 4) * 6;
    if ((iVar1 == 2) && (iVar3 <= iVar12)) {
      iVar11 = 4;
      iVar10 = iVar10 + *(int *)(&DAT_1001df00 +
                                *(int *)(param_3 + (1 - local_10) * 0x80 + iVar12 * 4) * 4) * 6;
    }
    local_20 = local_20 +
               *(int *)(iVar4 + 8 + iVar5) * *(int *)(iVar4 + 4 + iVar5) * 0xc + iVar11 + iVar10;
  }
  goto LAB_10004849;
LAB_1000486b:
  iVar12 = iVar7;
  if (iVar2 <= iVar7) {
    return local_20;
  }
  goto LAB_1000469c;
}


