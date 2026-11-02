/* Module: vegas30.exe
   Function: FUN_005a1270
   Address: 005a1270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005a1270(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  
  iVar3 = FUN_0057c190(*param_2,param_1 + 8,0x10);
  iVar5 = *param_2;
  piVar1 = (int *)(param_1 + 0x18);
  *param_2 = iVar5 + iVar3;
  iVar3 = FUN_0057c190(iVar5 + iVar3,piVar1,4);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar3;
  iVar3 = FUN_0057c190(iVar5 + iVar3,*(undefined4 *)(param_1 + 0x1c),*piVar1);
  iVar5 = *param_2;
  piVar2 = (int *)(param_1 + 0x20);
  *param_2 = iVar5 + iVar3;
  iVar3 = FUN_0057c190(iVar5 + iVar3,piVar2,4);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar3;
  iVar4 = FUN_0057c190(iVar5 + iVar3,*(undefined4 *)(param_1 + 0x24),*piVar2);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar3 = *piVar2;
  iVar6 = *piVar1;
  if (iVar6 == iVar3) {
    if (iVar6 == 0) {
      if (iVar3 == 0) goto LAB_005a1318;
      goto LAB_005a1306;
    }
    bVar9 = true;
    pcVar7 = *(char **)(param_1 + 0x1c);
    pcVar8 = *(char **)(param_1 + 0x24);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (bVar9) goto LAB_005a1318;
  }
  else {
LAB_005a1306:
    if (iVar3 == 0) goto LAB_005a1318;
  }
  iVar5 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x28,8);
  *param_2 = *param_2 + iVar5;
LAB_005a1318:
  iVar3 = FUN_0057c190(*param_2,param_1 + 0x30,8);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar3;
  iVar3 = FUN_0057c190(iVar5 + iVar3,param_1 + 0x38,4);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar3;
  if ((*(byte *)(param_1 + 0x48) & 4) != 0) {
    iVar5 = FUN_0057c190(iVar5 + iVar3,param_1 + 0x40,8);
    *param_2 = *param_2 + iVar5;
  }
  return;
}


