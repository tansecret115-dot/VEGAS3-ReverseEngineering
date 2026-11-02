/* Module: erv13260.dll
   Function: FUN_635fb150
   Address: 635fb150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635fb150(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7,
            int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int *local_c;
  
  iVar2 = param_2;
  iVar8 = param_2 + (int)param_3 * 0x2a;
  bVar11 = *(int *)(*(int *)(param_1 + -4 + iVar8 * 4) + 0x14) == 2;
  bVar12 = *(int *)(*(int *)(param_1 + -0xa8 + iVar8 * 4) + 0x14) == 2;
  bVar13 = *(int *)(*(int *)(param_1 + -0xa4 + iVar8 * 4) + 0x14) == 2;
  switch(param_6) {
  case 0:
  case 1:
    uVar6 = -(uint)bVar11 & 2;
    uVar3 = -(uint)bVar12 & 3;
    local_c = (int *)((int)param_3 + -1);
    uVar1 = -(uint)bVar13 & 3;
    iVar8 = param_2 + 1;
    param_2 = param_2 + -1;
    goto LAB_635fb27f;
  case 2:
    uVar3 = -(uint)bVar12 & 4;
    local_c = (int *)((int)param_3 + -1);
    uVar1 = -(uint)bVar13 & 3;
    uVar6 = 1;
    iVar8 = param_2 + 1;
    goto LAB_635fb27f;
  case 3:
    param_2 = param_2 + -1;
    uVar6 = -(uint)bVar11 & 4;
    break;
  case 4:
    uVar6 = 3;
    break;
  default:
    fprintf((FILE *)(_iob_exref + 0x20),s_Illegal_block_number_in_FindPMV___636066e8);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar3 = 1;
  uVar1 = 2;
  local_c = param_3;
  iVar8 = iVar2;
LAB_635fb27f:
  if (param_8 == 0) {
    param_3 = (int *)(param_1 + (param_2 + (uVar6 * 0x1f + (int)param_3) * 0x2a) * 4);
    iVar5 = *(int *)*param_3 << 1;
    iVar2 = iVar2 + (uVar3 * 0x1f + (int)local_c) * 0x2a;
    iVar7 = **(int **)(param_1 + iVar2 * 4) << 1;
    piVar4 = (int *)(param_1 + (iVar8 + (uVar1 * 0x1f + (int)local_c) * 0x2a) * 4);
    iVar8 = *(int *)*piVar4 << 1;
  }
  else {
    param_3 = (int *)(param_1 + (param_2 + (uVar6 * 0x1f + (int)param_3) * 0x2a) * 4);
    iVar5 = ((int *)*param_3)[2] + *(int *)*param_3 * 2;
    iVar2 = iVar2 + (uVar3 * 0x1f + (int)local_c) * 0x2a;
    piVar4 = *(int **)(param_1 + iVar2 * 4);
    iVar7 = piVar4[2] + *piVar4 * 2;
    piVar4 = (int *)(param_1 + (iVar8 + (uVar1 * 0x1f + (int)local_c) * 0x2a) * 4);
    iVar8 = ((int *)*piVar4)[2] + *(int *)*piVar4 * 2;
  }
  piVar9 = (int *)(param_1 + iVar2 * 4);
  if ((param_7 != 0) && (((param_6 == 0 || (param_6 == 1)) || (param_6 == 2)))) {
    iVar7 = 0x7ce;
  }
  if (iVar7 == 0x7ce) {
    iVar8 = iVar5;
    iVar7 = iVar5;
  }
  iVar2 = iVar7;
  if (iVar7 <= iVar8) {
    iVar2 = iVar8;
  }
  param_1 = iVar5;
  if ((iVar5 <= iVar2) && (param_1 = iVar7, iVar7 <= iVar8)) {
    param_1 = iVar8;
  }
  iVar2 = iVar7;
  if (iVar8 <= iVar7) {
    iVar2 = iVar8;
  }
  iVar10 = iVar5;
  if ((iVar2 <= iVar5) && (iVar10 = iVar7, iVar8 <= iVar7)) {
    iVar10 = iVar8;
  }
  *param_4 = ((iVar8 + iVar7 + iVar5) - param_1) - iVar10;
  if (param_8 == 0) {
    iVar8 = *(int *)(*param_3 + 4) << 1;
    iVar2 = *(int *)(*piVar9 + 4) << 1;
    iVar5 = *(int *)(*piVar4 + 4) << 1;
  }
  else {
    iVar2 = *piVar9;
    iVar8 = *(int *)(*param_3 + 0xc) + *(int *)(*param_3 + 4) * 2;
    iVar2 = *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 4) * 2;
    iVar5 = *(int *)(*piVar4 + 0xc) + *(int *)(*piVar4 + 4) * 2;
  }
  if ((param_7 != 0) && (((param_6 == 0 || (param_6 == 1)) || (param_6 == 2)))) {
    iVar2 = 0x7ce;
  }
  if (iVar2 == 0x7ce) {
    iVar2 = iVar8;
    iVar5 = iVar8;
  }
  iVar7 = iVar2;
  if (iVar2 <= iVar5) {
    iVar7 = iVar5;
  }
  iVar10 = iVar8;
  if ((iVar8 <= iVar7) && (iVar10 = iVar2, iVar2 <= iVar5)) {
    iVar10 = iVar5;
  }
  iVar7 = iVar2;
  if (iVar5 <= iVar2) {
    iVar7 = iVar5;
  }
  if (iVar7 <= iVar8) {
    iVar7 = iVar2;
    if (iVar5 <= iVar2) {
      iVar7 = iVar5;
    }
    *param_5 = ((iVar5 + iVar2 + iVar8) - iVar10) - iVar7;
    return;
  }
  *param_5 = (iVar5 + iVar2) - iVar10;
  return;
}


