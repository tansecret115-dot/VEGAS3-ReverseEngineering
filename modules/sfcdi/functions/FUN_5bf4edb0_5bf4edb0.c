/* Module: sfcdi.dll
   Function: FUN_5bf4edb0
   Address: 5bf4edb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4edb0(int param_1,uint param_2,int param_3,int *param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint local_c;
  char *local_8;
  int local_4;
  
  iVar7 = 0;
  local_4 = param_3;
  piVar2 = *(int **)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar2[1] * iVar4 + piVar2[2];
  }
  iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x14) + 0x350) + 4) * 0x914;
  iVar3 = param_3;
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar7 = FUN_5bf3be50((undefined4 *)(param_1 + 0x4c),(LPCSTR)(*(int *)(iVar4 + 0x14) + 0x224));
      if ((iVar7 < 0) || (iVar7 = FUN_5bf3bd40((undefined4 *)(param_1 + 0x4c)), iVar7 < 0))
      goto LAB_5bf4eef3;
    }
    pcVar8 = (char *)(param_2 + 0x10);
    while( true ) {
      param_2 = iVar5 - *(int *)(param_1 + 0x40);
      pcVar1 = pcVar8 + 8;
      if (0x913 < param_2) {
        param_2 = 0x914;
      }
      local_8 = pcVar8;
      iVar7 = FUN_5bf47d70(param_1,pcVar8,pcVar1,&local_c);
      if ((iVar7 < 0) || (local_c != param_2)) break;
      iVar4 = *(int *)(param_1 + 0x40) + local_c;
      pcVar8 = pcVar8 + 0x930;
      param_3 = param_3 + -0x930;
      *(int *)(param_1 + 0x40) = iVar4;
      if ((param_3 == 0) || (iVar4 == iVar5)) break;
    }
    if (*(int *)(param_1 + 0x40) == iVar5) {
      if (local_c != 0x914) {
        pcVar8 = pcVar1 + local_c;
        for (uVar6 = 0x914 - local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = 0x914 - local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = '\0';
          pcVar8 = pcVar8 + 1;
        }
      }
      local_8[2] = local_8[2] | 0x81;
      FUN_5bf3bdf0((undefined4 *)(param_1 + 0x4c));
      iVar3 = local_4;
    }
    else {
      iVar7 = 1;
      iVar3 = local_4;
    }
  }
LAB_5bf4eef3:
  *param_4 = iVar3 - param_3;
  return iVar7;
}


