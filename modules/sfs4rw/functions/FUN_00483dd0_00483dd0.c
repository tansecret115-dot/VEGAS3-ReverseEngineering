/* Module: sfs4rw.dll
   Function: FUN_00483dd0
   Address: 00483dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iStack_1c;
  int iStack_14;
  
  iVar1 = *(int *)((int)param_1 + 0x1d1);
  piVar11 = (int *)(iVar1 + 0x1d);
  iVar2 = FUN_00483f40(param_1,piVar11);
  if (*(int *)((int)param_1 + 0x96) == 3) {
    iVar8 = *param_1;
    *(int *)(iVar8 + 0x18) = iVar2;
    *(int *)(iVar8 + 0x1c) = *piVar11;
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar1 + 0x21);
    *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar1 + 0x25);
    *(undefined4 *)(*param_1 + 0x14) = 0x5d;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
    *(int *)(*param_1 + 0x18) = iVar2;
  }
  (**(code **)(*param_1 + 4))(param_1,1);
  piVar3 = (int *)(**(code **)(param_1[1] + 8))
                            (param_1,1,iVar2,*(undefined4 *)((int)param_1 + 0x96));
  iVar10 = 0;
  iVar8 = iVar2;
  piVar9 = piVar3;
  if (*(int *)((int)param_1 + 0x96) < 1) {
    *(int **)(iVar1 + 0x10) = piVar3;
    *(int *)(iVar1 + 0x14) = iVar2;
    return;
  }
  do {
    iVar1 = *piVar11;
    iVar4 = iVar2 / iVar1;
    iVar12 = 0;
    if (0 < iVar1) {
      iStack_14 = 0;
      do {
        iVar5 = FUN_00484030(param_1,iVar10,iVar12,iVar1 + -1);
        iVar7 = iStack_14;
        if (iStack_14 < iVar8) {
          do {
            iVar6 = 0;
            if (0 < iVar4) {
              do {
                iVar8 = *piVar9 + iVar6;
                iVar6 = iVar6 + 1;
                *(char *)(iVar7 + iVar8) = (char)iVar5;
                iVar8 = unaff_EBP;
              } while (iVar6 < iVar4);
            }
            iVar7 = iVar7 + iVar2;
          } while (iVar7 < iVar8);
        }
        iStack_14 = iStack_14 + iVar4;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar1);
    }
    piVar11 = piVar11 + 1;
    iVar10 = iVar10 + 1;
    iVar2 = iVar4;
    piVar9 = piVar9 + 1;
  } while (iVar10 < *(int *)((int)param_1 + 0x96));
  *(int *)(iStack_1c + 0x14) = iVar8;
  *(int **)(iStack_1c + 0x10) = piVar3;
  return;
}


