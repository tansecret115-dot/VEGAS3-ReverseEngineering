/* Module: 14_43260.dll
   Function: FUN_100022b0
   Address: 100022b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_100022b0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_3c [10];
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  piVar2 = local_3c;
  local_10 = piVar2;
  local_8 = param_2;
  local_14 = 0;
  piVar7 = param_2;
  do {
    iVar6 = local_14;
    iVar1 = local_14 * 4;
    iVar5 = local_14 + -1;
    local_10 = piVar2;
    local_8 = piVar7;
    piVar2[local_14] = *(int *)(param_1 + iVar1) << 4;
    piVar4 = piVar2;
    piVar8 = piVar7;
    if (-1 < iVar5) {
      local_c = iVar6;
      piVar3 = piVar2;
      iVar5 = iVar1;
      do {
        iVar6 = iVar5 + -4;
        iVar5 = iVar5 + -4;
        *piVar3 = (*(int *)((int)piVar8 + iVar6) * *(int *)(param_1 + iVar1) >> 0xc) +
                  *(int *)((int)piVar7 + (-4 - (int)piVar2) + (int)(piVar3 + 1));
        local_c = local_c + -1;
        piVar4 = local_10;
        piVar3 = piVar3 + 1;
        iVar6 = local_14;
        piVar8 = local_8;
      } while (local_c != 0);
    }
    piVar2 = piVar8;
    local_10 = piVar2;
    local_8 = piVar4;
    local_14 = iVar6 + 1;
    piVar7 = piVar4;
  } while (iVar6 + 1 < 10);
  iVar5 = 10;
  do {
    *param_2 = *param_2 >> 4;
    iVar5 = iVar5 + -1;
    param_2 = param_2 + 1;
  } while (iVar5 != 0);
  return 0;
}


