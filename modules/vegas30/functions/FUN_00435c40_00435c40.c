/* Module: vegas30.exe
   Function: FUN_00435c40
   Address: 00435c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00435c40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_4;
  
  bVar9 = false;
  local_4 = 0;
  FUN_004e9f70(param_1,0x12,0);
  FUN_004692e0(DAT_00647630);
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x10) & 0x10) != 0)) {
    piVar5 = (int *)FUN_005b87b0(param_1);
    if (piVar5 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar5;
    }
    iVar3 = iVar3 + -1;
    for (iVar8 = iVar3; -1 < iVar8; iVar8 = iVar8 + -1) {
      iVar1 = *(int *)(piVar5[2] + iVar8 * 4);
      if ((*(byte *)(iVar1 + 0x10) & 0x10) != 0) {
        FUN_004ea250(param_1,iVar1,0xc,0);
        piVar4 = *(int **)(iVar1 + 0x24);
        if (piVar4 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar4;
        }
        iVar6 = 0;
        if (0 < iVar7) {
          piVar4 = (int *)piVar4[2];
          do {
            iVar2 = *piVar4;
            piVar4 = piVar4 + 1;
            iVar6 = iVar6 + *(int *)(iVar2 + 0x38);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (iVar6 != 0) {
            FUN_004ea880(param_1);
          }
        }
        if (*(int *)(iVar1 + 4) == 3) {
          bVar9 = true;
        }
      }
    }
    while ((-1 < iVar3 &&
           ((iVar8 = *(int *)(piVar5[2] + iVar3 * 4), (*(byte *)(iVar8 + 0x10) & 0x10) == 0 ||
            (local_4 = FUN_005cb5d0(param_1,iVar8,0), -1 < local_4))))) {
      iVar3 = iVar3 + -1;
    }
  }
  else {
    FUN_004ea250(param_1,param_2,0xc,0);
    bVar9 = *(int *)(param_2 + 4) == 3;
    local_4 = FUN_005cb5d0(param_1,param_2,0);
  }
  FUN_00469280(DAT_00647630);
  if (-1 < local_4) {
    FUN_004eb2b0(param_1);
  }
  FUN_004ea040(param_1,0);
  piVar5 = (int *)FUN_005b87b0(param_1);
  if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
    *(uint *)(DAT_00647630 + 0x18) = *(uint *)(DAT_00647630 + 0x18) & 0xfff7ffff;
  }
  if (bVar9) {
    DAT_0064767c = DAT_0064767c | 0x1400;
  }
  return local_4;
}


