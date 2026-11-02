/* Module: vegas30k.dll
   Function: FUN_010863d0
   Address: 010863d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_010863d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  tagTT_SRP *ptVar3;
  tagVMGI_MAT *ptVar4;
  tagDIR_ENTRY *ptVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  tagTT_SRP *ptVar10;
  int local_10;
  
  ptVar5 = DtGetLocalDirEntry(*(tagDIR_ENTRY **)(param_2 + 0x21c),"VIDEO_TS.IFO");
  if (ptVar5 == (tagDIR_ENTRY *)0x0) {
    return &DAT_80070057;
  }
  iVar9 = 0;
  piVar1 = *(int **)(*(int *)(param_2 + 0x21c) + 0x214);
  local_10 = 0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (iVar6 <= local_10) break;
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if ((local_10 < 0) || (iVar6 + -1 < local_10)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar1[2] + local_10 * 4);
    }
    if (param_2 == iVar6) break;
    uVar2 = *(uint *)(iVar6 + 0x330);
    iVar7 = __aullshr();
    iVar9 = iVar9 + iVar7 + (uint)((uVar2 & 0x7ff) != 0);
    if ((*(uint *)(iVar6 + 0x218) & 8) != 0) {
      iVar9 = iVar9 + *(int *)(iVar6 + 0x340);
    }
    local_10 = local_10 + 1;
  }
  ptVar3 = *(tagTT_SRP **)(*(int *)(param_2 + 0x34c) + 0x150);
  iVar6 = *(int *)(*(int *)(ptVar5 + 0x34c) + 0x150);
  ptVar4 = *(tagVMGI_MAT **)(iVar6 + 0x14);
  SfCdiSwap_VMGI_MAT(ptVar4);
  iVar7 = *(int *)(ptVar4 + 0xc4);
  iVar8 = *(int *)(iVar6 + 0x14);
  SfCdiSwap_VMGI_MAT(ptVar4);
  ptVar10 = (tagTT_SRP *)(iVar7 * 0x800 + iVar8 + 8);
  iVar7 = 0;
  while( true ) {
    iVar8 = 0;
    if (*(int **)(iVar6 + 0x24) != (int *)0x0) {
      iVar8 = **(int **)(iVar6 + 0x24);
    }
    if (iVar8 <= iVar7) break;
    SfCdiSwap_TT_SRP(ptVar10);
    if (*ptVar3 == ptVar10[6]) {
      *(int *)(ptVar10 + 8) = iVar9;
    }
    SfCdiSwap_TT_SRP(ptVar10);
    iVar7 = iVar7 + 1;
    ptVar10 = ptVar10 + 0xc;
  }
  return (undefined1 *)0x0;
}


