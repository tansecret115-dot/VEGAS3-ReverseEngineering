/* Module: vegas30.exe
   Function: FUN_004cada0
   Address: 004cada0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004cada0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_2;
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 != 0)) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      iVar7 = 0;
      if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar8 = 0;
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = *(int **)(iVar5 + 8);
        do {
          uVar2 = *(uint *)(*piVar4 + 0x10);
          iVar5 = iVar6;
          if ((uVar2 & 4) == 0) {
            if ((*(byte *)(param_1 + 0x1a) & 8) == 0) {
              iVar7 = 0x18;
              if ((uVar2 & 0x10000) == 0) {
                iVar7 = *(int *)(*piVar4 + 0x694);
              }
            }
            else {
              iVar7 = *(int *)(param_1 + 0xbac);
            }
            iVar5 = iVar7 + iVar6;
            if (iVar1 < iVar5) break;
          }
          iVar8 = iVar8 + 1;
          piVar4 = piVar4 + 1;
          iVar6 = iVar5;
        } while (iVar8 < iVar3);
      }
      *param_2 = iVar6;
      *param_3 = iVar7;
      return iVar8;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}


