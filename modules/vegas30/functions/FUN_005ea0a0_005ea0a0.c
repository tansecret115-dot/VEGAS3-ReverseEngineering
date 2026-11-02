/* Module: vegas30.exe
   Function: FUN_005ea0a0
   Address: 005ea0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ea0a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *unaff_ESI;
  int iVar8;
  int *piVar9;
  int iStack_8;
  
  iVar7 = -0x7ff8fff2;
  piVar3 = calloc(1,param_2 * 4);
  if (piVar3 != (int *)0x0) {
    iVar7 = (**(code **)(*param_1 + 0xc))(param_1,piVar3,param_2 * 4,param_4);
    piVar9 = piVar3;
    if ((-1 < iVar7) && (iVar8 = 0, param_2 != 1 && -1 < param_2 + -1)) {
      piVar6 = piVar3;
      do {
        iVar1 = piVar3[2];
        iVar2 = *(int *)(iVar1 + iVar8 * 4);
        piVar9 = unaff_ESI;
        if (*piVar6 != *(int *)(iVar2 + 0x1c)) {
          iVar4 = iVar8 + 1;
          iVar7 = -0x7fff0001;
          if (iStack_8 <= iVar4) break;
          piVar5 = (int *)((int)piVar6 + iVar1 + (4 - (int)piVar3));
          while (*piVar6 != *(int *)(*piVar5 + 0x1c)) {
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 1;
            if (iStack_8 <= iVar4) goto LAB_005ea17f;
          }
          *(int *)(iVar1 + iVar8 * 4) = *piVar5;
          iVar7 = 0;
          *(int *)(piVar3[2] + iVar4 * 4) = iVar2;
        }
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar8 < iStack_8 + -1);
    }
LAB_005ea17f:
    free(piVar9);
  }
  return iVar7;
}


