/* Module: sfcdi.dll
   Function: FUN_5bf503c0
   Address: 5bf503c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf503c0(int param_1,char *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *local_4;
  
  iVar2 = param_3;
  iVar8 = 0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar1[1] * iVar4 + piVar1[2];
  }
  piVar1 = *(int **)(*(int *)(iVar4 + 0x14) + 0x350);
  if (*piVar1 == 0xb) {
    iVar3 = piVar1[1];
  }
  else {
    if (*piVar1 != 0xc) {
      iVar8 = -0x7ff8ffa9;
      goto LAB_5bf50510;
    }
    iVar3 = piVar1[1];
  }
  pcVar5 = (char *)(iVar3 * 0x914);
  if (pcVar5 == (char *)0x0) goto LAB_5bf50510;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar8 = FUN_5bf3be50((undefined4 *)(param_1 + 0x4c),(LPCSTR)(*(int *)(iVar4 + 0x14) + 0x224));
    if (iVar8 < 0) goto LAB_5bf50510;
    iVar8 = FUN_5bf3bd40((undefined4 *)(param_1 + 0x4c));
    if (iVar8 < 0) goto LAB_5bf50510;
  }
  pcVar7 = param_2 + 8;
  pcVar6 = param_2;
  while( true ) {
    param_2 = pcVar5 + -*(int *)(param_1 + 0x40);
    if ((char *)0x913 < param_2) {
      param_2 = (char *)0x914;
    }
    iVar8 = FUN_5bf47d70(param_1,pcVar6,pcVar7,(uint *)&local_4);
    if ((iVar8 < 0) || (local_4 != param_2)) break;
    iVar4 = *(int *)(param_1 + 0x40);
    pcVar6 = pcVar6 + 0x91c;
    pcVar7 = pcVar7 + 0x91c;
    param_3 = param_3 + -0x91c;
    *(char **)(param_1 + 0x40) = local_4 + iVar4;
    if ((param_3 == 0) || (local_4 + iVar4 == pcVar5)) break;
  }
  if (*(char **)(param_1 + 0x40) == pcVar5) {
    FUN_5bf3bdf0((undefined4 *)(param_1 + 0x4c));
  }
  else {
    iVar8 = 1;
  }
LAB_5bf50510:
  *param_4 = iVar2 - param_3;
  return iVar8;
}


