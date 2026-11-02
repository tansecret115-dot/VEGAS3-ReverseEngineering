/* Module: vegas30.exe
   Function: FUN_0049b050
   Address: 0049b050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0049b050(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_10;
  int local_c;
  
  iVar5 = param_1;
  iVar9 = 0;
  local_10 = 0;
  local_c = 0;
  puVar1 = (uint *)(param_1 + 0x20);
  puVar2 = (uint *)(param_1 + 0x18);
  piVar3 = (int *)(param_1 + 8);
  piVar4 = (int *)(param_1 + 0x24);
  param_1 = 0;
  iVar8 = *piVar4 + *(int *)(iVar5 + 0x1c) + (uint)CARRY4(*puVar1,*puVar2);
  piVar3 = *(int **)(*piVar3 + 0x24);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    if ((iVar9 < 0) || (iVar6 + -1 < iVar9)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar3[2] + iVar9 * 4);
    }
    iVar9 = iVar9 + 1;
    if ((iVar6 == iVar5) || (iVar6 == 0)) break;
    uVar10 = *(uint *)(iVar6 + 0x20) + *(uint *)(iVar6 + 0x18);
    iVar7 = *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x1c) +
            (uint)CARRY4(*(uint *)(iVar6 + 0x20),*(uint *)(iVar6 + 0x18));
    if (((iVar7 <= iVar8) &&
        (((iVar7 < iVar8 || (uVar10 < *puVar1 + *puVar2)) && (local_c <= iVar7)))) &&
       ((local_c < iVar7 || (local_10 < uVar10)))) {
      param_1 = iVar6;
      local_10 = uVar10;
      local_c = iVar7;
    }
  }
  return param_1;
}


