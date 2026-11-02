/* Module: vegas30k.dll
   Function: FUN_0116efa0
   Address: 0116efa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0116efa0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
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
  iVar3 = FUN_0116f110(param_1,piVar11);
  if (*(int *)((int)param_1 + 0x96) == 3) {
    iVar8 = *param_1;
    *(int *)(iVar8 + 0x18) = iVar3;
    *(int *)(iVar8 + 0x1c) = *piVar11;
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar1 + 0x21);
    *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar1 + 0x25);
    *(undefined4 *)(*param_1 + 0x14) = 0x5d;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
    *(int *)(*param_1 + 0x18) = iVar3;
  }
  (**(code **)(*param_1 + 4))(param_1,1);
  piVar4 = (int *)(**(code **)(param_1[1] + 8))
                            (param_1,1,iVar3,*(undefined4 *)((int)param_1 + 0x96));
  iVar10 = 0;
  iVar8 = iVar3;
  piVar9 = piVar4;
  if (*(int *)((int)param_1 + 0x96) < 1) {
    *(int **)(iVar1 + 0x10) = piVar4;
    *(int *)(iVar1 + 0x14) = iVar3;
    return;
  }
  do {
    iVar1 = *piVar11;
    iVar5 = iVar3 / iVar1;
    iVar12 = 0;
    if (0 < iVar1) {
      iStack_14 = 0;
      do {
        uVar2 = FUN_0116f200(param_1,iVar10,iVar12,iVar1 + -1);
        iVar7 = iStack_14;
        if (iStack_14 < iVar8) {
          do {
            iVar6 = 0;
            if (0 < iVar5) {
              do {
                iVar8 = *piVar9 + iVar6;
                iVar6 = iVar6 + 1;
                *(undefined1 *)(iVar7 + iVar8) = uVar2;
                iVar8 = unaff_EBP;
              } while (iVar6 < iVar5);
            }
            iVar7 = iVar7 + iVar3;
          } while (iVar7 < iVar8);
        }
        iStack_14 = iStack_14 + iVar5;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar1);
    }
    piVar11 = piVar11 + 1;
    iVar10 = iVar10 + 1;
    iVar3 = iVar5;
    piVar9 = piVar9 + 1;
  } while (iVar10 < *(int *)((int)param_1 + 0x96));
  *(int *)(iStack_1c + 0x14) = iVar8;
  *(int **)(iStack_1c + 0x10) = piVar4;
  return;
}


