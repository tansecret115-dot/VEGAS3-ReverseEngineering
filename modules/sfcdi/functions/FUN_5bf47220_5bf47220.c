/* Module: sfcdi.dll
   Function: FUN_5bf47220
   Address: 5bf47220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf47220(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int local_10;
  
  iVar4 = FUN_5bf3e580(*(int *)(param_2 + 0x21c),"VIDEO_TS.IFO");
  if (iVar4 == 0) {
    return 0x80070057;
  }
  iVar7 = 0;
  piVar1 = *(int **)(*(int *)(param_2 + 0x21c) + 0x214);
  local_10 = 0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (iVar5 <= local_10) break;
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if ((local_10 < 0) || (iVar5 + -1 < local_10)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar1[2] + local_10 * 4);
    }
    if (param_2 == iVar5) break;
    uVar2 = *(uint *)(iVar5 + 0x330);
    uVar9 = FUN_5bf532a0(0xb,*(uint *)(iVar5 + 0x334));
    iVar7 = iVar7 + (int)uVar9 + (uint)((uVar2 & 0x7ff) != 0);
    if ((*(uint *)(iVar5 + 0x218) & 8) != 0) {
      iVar7 = iVar7 + *(int *)(iVar5 + 0x340);
    }
    local_10 = local_10 + 1;
  }
  pcVar3 = *(char **)(*(int *)(param_2 + 0x34c) + 0x150);
  iVar4 = *(int *)(*(int *)(iVar4 + 0x34c) + 0x150);
  iVar5 = *(int *)(iVar4 + 0x14);
  FUN_5bf4a4b0(iVar5);
  iVar8 = *(int *)(iVar5 + 0xc4);
  iVar6 = *(int *)(iVar4 + 0x14);
  FUN_5bf4a4b0(iVar5);
  iVar5 = iVar8 * 0x800 + iVar6 + 8;
  iVar8 = 0;
  while( true ) {
    iVar6 = 0;
    if (*(int **)(iVar4 + 0x24) != (int *)0x0) {
      iVar6 = **(int **)(iVar4 + 0x24);
    }
    if (iVar6 <= iVar8) break;
    FUN_5bf4a520(iVar5);
    if (*pcVar3 == *(char *)(iVar5 + 6)) {
      *(int *)(iVar5 + 8) = iVar7;
    }
    FUN_5bf4a520(iVar5);
    iVar8 = iVar8 + 1;
    iVar5 = iVar5 + 0xc;
  }
  return 0;
}


