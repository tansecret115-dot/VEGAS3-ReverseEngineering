/* Module: vegas30.exe
   Function: FUN_004cb480
   Address: 004cb480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004cb480(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = param_1;
  iVar7 = 0;
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
      piVar4 = (int *)(param_1 + 0xbc8);
      param_1 = 0;
      if (*piVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_005b87b0(*piVar4);
      }
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = *(int **)(iVar5 + 8);
        do {
          uVar1 = *(uint *)(*piVar4 + 0x10);
          if ((uVar1 & 4) == 0) {
            if ((*(uint *)(iVar2 + 0x18) & 0x80000) == 0) {
              iVar7 = 0x18;
              if ((uVar1 & 0x10000) == 0) {
                iVar7 = *(int *)(*piVar4 + 0x694);
              }
            }
            else {
              iVar7 = *(int *)(iVar2 + 0xbac);
            }
            if (iVar6 == param_2) break;
            param_1 = param_1 + iVar7;
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < iVar3);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar7;
      }
      return param_1;
    }
  }
  *param_3 = 0;
  return 0;
}


