/* Module: vegas30k.dll
   Function: FUN_010879b0
   Address: 010879b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_010879b0(int param_1,tagVMGM_LUI *param_2,int *param_3)

{
  tagVMGM_PGCI_SRP tVar1;
  int *piVar2;
  tagVMGM_PGCI_SRP *ptVar3;
  tagVMGM_LUI *ptVar4;
  tagVMGM_PGCI_SRP tVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  tagVMGM_PGCI_SRP *ptVar10;
  long lVar11;
  char *pcVar12;
  uint local_8;
  tagVMGM_LUI *local_4;
  
  ptVar4 = param_2;
  lVar11 = 0;
  iVar9 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar9 = **(int **)(param_1 + 4);
  }
  iVar9 = iVar9 * 8 + 8;
  param_2 = (tagVMGM_LUI *)0x0;
  ptVar3 = (tagVMGM_PGCI_SRP *)ptVar4;
  while( true ) {
    ptVar10 = ptVar3 + 8;
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if (iVar8 <= (int)param_2) break;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if (((int)param_2 < 0) || (iVar8 + -1 < (int)param_2)) {
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar12 = *(char **)(piVar2[2] + (int)param_2 * 4);
    }
    tVar5 = (tagVMGM_PGCI_SRP)((byte)*ptVar10 & 0x7f | *pcVar12 << 7);
    tVar1 = ptVar3[9];
    *ptVar10 = tVar5;
    *ptVar10 = (tagVMGM_PGCI_SRP)((pcVar12[4] ^ (byte)tVar5) & 0xf ^ (byte)tVar5);
    bVar6 = (pcVar12[5] & 3U) << 4;
    local_4 = ptVar4 + iVar9;
    ptVar3[9] = (tagVMGM_PGCI_SRP)(bVar6 | (byte)tVar1 & 0xcf);
    ptVar3[9] = (tagVMGM_PGCI_SRP)(pcVar12[6] << 6 | bVar6 | (byte)tVar1 & 0xf);
    *(undefined2 *)(ptVar3 + 10) = *(undefined2 *)(pcVar12 + 8);
    *(int *)(ptVar3 + 0xc) = iVar9;
    SfCdiGetProgramChainSize(*(tagSFIFO_PGCI **)(pcVar12 + 0xc),&local_8);
    lVar11 = SfCdiCreateProgramChain
                       (*(tagSFIFO_PGCI **)(pcVar12 + 0xc),(tagPGCI_GI **)&local_4,&local_8);
    if (lVar11 < 0) break;
    SfCdiSwap_VMGM_PGCI_SRP(ptVar10);
    iVar9 = iVar9 + local_8;
    param_2 = (tagVMGM_LUI *)((int)param_2 + 1);
    ptVar3 = ptVar10;
  }
  uVar7 = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    uVar7 = (undefined2)**(undefined4 **)(param_1 + 4);
  }
  *(undefined2 *)ptVar4 = uVar7;
  *(int *)(ptVar4 + 4) = iVar9 + -1;
  SfCdiSwap_VMGM_LUI(ptVar4);
  *param_3 = iVar9;
  return lVar11;
}


