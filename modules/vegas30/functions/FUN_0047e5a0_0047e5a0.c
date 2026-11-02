/* Module: vegas30.exe
   Function: FUN_0047e5a0
   Address: 0047e5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047e5a0(int param_1,uint *param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int local_14;
  uint local_8;
  uint local_4;
  
  *param_3 = 0;
  param_3[1] = 0;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar10 = 0;
  iVar12 = 0;
  uVar11 = 0x7fffffff;
  local_8 = 0xffffffff;
  local_4 = 0x7fffffff;
  local_14 = 0;
  if (0 < *piVar1) {
    do {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if ((local_14 < 0) || (iVar6 + -1 < local_14)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar1[2] + local_14 * 4);
      }
      if ((iVar6 != 0) && ((param_4 < 0 || (param_4 == *(int *)(iVar6 + 0x10))))) {
        iVar9 = **(int **)(iVar6 + 0x30);
        if (iVar9 != 0) {
          puVar7 = (uint *)(*(int **)(iVar6 + 0x30))[2];
          uVar8 = puVar7[1];
          uVar2 = *puVar7;
          uVar4 = local_8;
          uVar5 = local_4;
          if ((((int)uVar8 <= (int)uVar11) &&
              (bVar3 = (int)uVar11 <= (int)uVar8, uVar11 = uVar8, uVar4 = uVar2, uVar5 = uVar8,
              bVar3)) && (local_8 <= uVar2)) {
            uVar11 = local_4;
            uVar4 = local_8;
            uVar5 = local_4;
          }
          local_4 = uVar5;
          local_8 = uVar4;
          uVar8 = puVar7[iVar9 * 4 + -4] + 1;
          iVar6 = puVar7[iVar9 * 4 + -3] + (uint)(0xfffffffe < puVar7[iVar9 * 4 + -4]);
          if ((iVar12 <= iVar6) && ((iVar12 < iVar6 || (uVar10 < uVar8)))) {
            uVar10 = uVar8;
            iVar12 = iVar6;
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *piVar1);
    if (((int)uVar11 <= iVar12) && (((int)uVar11 < iVar12 || (local_8 < uVar10)))) {
      uVar8 = *param_2;
      *param_2 = uVar8 + local_8;
      param_2[1] = param_2[1] + uVar11 + (uint)CARRY4(uVar8,local_8);
      *param_3 = uVar10 - local_8;
      param_3[1] = (iVar12 - uVar11) - (uint)(uVar10 < local_8);
      iVar6 = 0;
      iVar12 = **(int **)(param_1 + 0x18);
      if (0 < iVar12) {
        do {
          piVar1 = *(int **)(param_1 + 0x18);
          if (piVar1 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar1;
          }
          if ((iVar6 < 0) || (iVar9 + -1 < iVar6)) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(piVar1[2] + iVar6 * 4);
          }
          if ((iVar9 != 0) && ((param_4 < 0 || (param_4 == *(int *)(iVar9 + 0x10))))) {
            puVar7 = (uint *)(*(int **)(iVar9 + 0x30))[2];
            for (iVar9 = **(int **)(iVar9 + 0x30); iVar9 != 0; iVar9 = iVar9 + -1) {
              uVar10 = *puVar7;
              *puVar7 = uVar10 - local_8;
              puVar7[1] = (puVar7[1] - uVar11) - (uint)(uVar10 < local_8);
              puVar7 = puVar7 + 4;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar12);
      }
    }
  }
  return 0;
}


