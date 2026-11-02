/* Module: vegas30.exe
   Function: FUN_004ba860
   Address: 004ba860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ba860(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint local_8;
  uint local_4;
  
  iVar3 = param_1;
  param_2 = *(int **)((int)param_2 + 0x3c);
  iVar8 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = *(int **)(param_1 + 0xc38);
  }
  if (param_2 == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *param_2;
  }
  if (0 < param_1) {
    do {
      puVar1 = *(uint **)(param_2[2] + iVar8 * 4);
      local_8 = *puVar1;
      local_4 = puVar1[1];
      iVar4 = _SfList_FindSortedInsertIndexRange_20
                        (*(undefined4 *)(iVar3 + 0xc50),&local_8,0,0xffffffff,&LAB_004ba800);
      if ((iVar4 == -1) || (piVar7 = *(int **)(iVar3 + 0xc50), *piVar7 + -1 < iVar4)) {
        piVar7 = *(int **)(iVar3 + 0xc50);
LAB_004ba922:
        _SfList_InsertList_16(piVar7,0xffffffff,&local_8,1);
      }
      else {
        puVar5 = (uint *)(piVar7[1] * iVar4 + piVar7[2]);
        if ((puVar5 != (uint *)0x0) && ((*puVar5 != *puVar1 || (puVar5[1] != puVar1[1]))))
        goto LAB_004ba922;
      }
      if ((puVar1[8] & 1) != 0) {
        uVar2 = puVar1[2];
        if (uVar2 != 0 || puVar1[3] != 0) {
          local_8 = *puVar1 + uVar2;
          local_4 = puVar1[1] + puVar1[3] + (uint)CARRY4(*puVar1,uVar2);
          iVar4 = _SfList_FindSortedInsertIndexRange_20
                            (*(undefined4 *)(iVar3 + 0xc50),&local_8,0,0xffffffff,&LAB_004ba800);
          if ((iVar4 == -1) || (piVar7 = *(int **)(iVar3 + 0xc50), *piVar7 + -1 < iVar4)) {
            piVar7 = *(int **)(iVar3 + 0xc50);
          }
          else {
            piVar6 = (int *)(piVar7[1] * iVar4 + piVar7[2]);
            if ((piVar6 == (int *)0x0) ||
               ((*piVar6 == *puVar1 + puVar1[2] &&
                (piVar6[1] == puVar1[1] + puVar1[3] + (uint)CARRY4(*puVar1,puVar1[2])))))
            goto LAB_004ba9c5;
          }
          _SfList_InsertList_16(piVar7,0xffffffff,&local_8,1);
        }
      }
LAB_004ba9c5:
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  return;
}


