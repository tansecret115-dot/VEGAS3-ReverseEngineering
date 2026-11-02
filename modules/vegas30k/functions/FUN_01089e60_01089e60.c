/* Module: vegas30k.dll
   Function: FUN_01089e60
   Address: 01089e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01089e60(int param_1,tagVTS_PGCITI *param_2)

{
  int *piVar1;
  tagVTS_PGCI_SRP *ptVar2;
  tagVTS_PGCITI *ptVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  tagVTS_PGCI_SRP *ptVar9;
  uint uVar10;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  tagVTS_PGCITI *local_4;
  
  ptVar3 = param_2;
  SfCdiSwap_VTS_PGCITI(param_2);
  uVar7 = 0;
  ptVar2 = (tagVTS_PGCI_SRP *)ptVar3;
  if (*(short *)ptVar3 == 0) {
    return 0;
  }
  do {
    ptVar9 = ptVar2 + 8;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = (tagVTS_PGCITI *)0x0;
    SfCdiSwap_VTS_PGCI_SRP(ptVar9);
    uVar10 = *(uint *)ptVar9;
    local_14 = CONCAT13((char)(uVar10 >> 0xe),
                        CONCAT12((char)(uVar10 >> 0xc),(short)(uVar10 >> 0x10))) & 0x303ffff;
    local_c = uVar10 >> 7 & 1;
    local_10 = CONCAT22(local_10._2_2_,(ushort)((byte)uVar10 & 0x7f));
    piVar1 = *(int **)(param_1 + 0x4c);
    uVar10 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar1;
      }
      uVar4 = uVar10 & 0xffff;
      if (iVar8 <= (int)uVar4) {
        lVar6 = SfCdiAllocateProgramChainInfo((tagSFIFO_PGCI **)&param_2);
        if (lVar6 < 0) {
          return lVar6;
        }
        lVar6 = SfCdiGetProgramChainInfo
                          ((tagPGCI_GI *)(ptVar3 + *(ulong *)(ptVar2 + 0xc)),
                           *(ulong *)(ptVar2 + 0xc),(uint)uVar7,(tagSFIFO_PGCI *)param_2);
        if (lVar6 < 0) {
          return lVar6;
        }
        iVar8 = _SfList_AllocAndInsertItem_20
                          (*(undefined4 *)(param_1 + 0x4c),&param_2,4,0xffffffff,0);
        if (iVar8 < 0) {
          return iVar8;
        }
        goto LAB_01089f86;
      }
      if (piVar1 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar1;
      }
      if (iVar8 + -1 < (int)uVar4) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(piVar1[2] + uVar4 * 4);
      }
      param_2 = (tagVTS_PGCITI *)*piVar5;
      if (*(int *)param_2 == *(int *)(ptVar2 + 0xc)) break;
      uVar10 = uVar10 + 1;
    }
    local_8 = *(int *)(param_2 + 4);
LAB_01089f86:
    local_4 = param_2;
    iVar8 = _SfList_AllocAndInsertItem_20
                      (*(undefined4 *)(param_1 + 0x48),&local_14,0x14,0xffffffff,0);
    if (iVar8 < 0) {
      return iVar8;
    }
    uVar7 = uVar7 + 1;
    ptVar2 = ptVar9;
    if (*(ushort *)ptVar3 <= uVar7) {
      return iVar8;
    }
  } while( true );
}


