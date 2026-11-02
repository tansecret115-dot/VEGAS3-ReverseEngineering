/* Module: vegas30k.dll
   Function: FUN_01088700
   Address: 01088700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01088700(int param_1,tagVMGM_PGCI_UTI *param_2)

{
  tagVMGM_PGCI_SRP *ptVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  tagVMGM_LU_SRP *ptVar7;
  tagVMGM_LU_SRP *ptVar8;
  tagVMGM_PGCI_SRP *ptVar9;
  tagVMGM_LUI *ptVar10;
  tagSFIFO_PGCI *local_28;
  int local_24;
  tagVMGM_LU_SRP *local_20;
  uint local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  tagSFIFO_PGCI *local_4;
  
  SfCdiSwap_VMGM_PGCI_UTI(param_2);
  local_24 = 0;
  ptVar8 = (tagVMGM_LU_SRP *)param_2;
  if (*(short *)param_2 == 0) {
    iVar2 = 0;
  }
  else {
    while( true ) {
      ptVar7 = ptVar8 + 8;
      local_20 = ptVar7;
      SfCdiSwap_VMGM_LU_SRP(ptVar7);
      local_18 = 0;
      local_14 = (int *)0x0;
      local_1c = *(uint *)ptVar7 & 0x80ffffff;
      iVar2 = _SfList_CreateExZ_32(&local_18,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
      if ((iVar2 < 0) ||
         (iVar2 = _SfList_CreateExZ_32(&local_14,4,0xffffffff,0xffffffff,0x40000002,0,0,0),
         iVar2 < 0)) break;
      ptVar10 = (tagVMGM_LUI *)(param_2 + *(int *)(ptVar8 + 0xc));
      SfCdiSwap_VMGM_LUI(ptVar10);
      uVar6 = 0;
      ptVar8 = ptVar7;
      ptVar1 = (tagVMGM_PGCI_SRP *)ptVar10;
      if (*(short *)ptVar10 != 0) {
        do {
          ptVar9 = ptVar1 + 8;
          SfCdiSwap_VMGM_PGCI_SRP(ptVar9);
          local_4 = (tagSFIFO_PGCI *)0x0;
          local_10 = (uint)((byte)*ptVar9 >> 7);
          local_c = (uint)(CONCAT12((byte)ptVar1[9] >> 6,CONCAT11((byte)ptVar1[9] >> 4,*ptVar9)) &
                          0xff030f);
          local_8 = (uint)*(ushort *)(ptVar1 + 10);
          iVar2 = 0;
          while( true ) {
            if (local_14 == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *local_14;
            }
            if (iVar3 <= iVar2) break;
            if (local_14 == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *local_14;
            }
            if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = *(undefined4 **)(local_14[2] + iVar2 * 4);
            }
            local_28 = (tagSFIFO_PGCI *)*puVar4;
            if (*(int *)local_28 == *(int *)(ptVar1 + 0xc)) goto LAB_01088882;
            iVar2 = iVar2 + 1;
          }
          lVar5 = SfCdiAllocateProgramChainInfo(&local_28);
          ptVar8 = local_20;
          if (lVar5 < 0) break;
          SfCdiGetProgramChainInfo
                    ((tagPGCI_GI *)(ptVar10 + *(ulong *)(ptVar1 + 0xc)),*(ulong *)(ptVar1 + 0xc),
                     uVar6,local_28);
          iVar2 = _SfList_AllocAndInsertItem_20(local_14,&local_28,4,0xffffffff,0);
          ptVar8 = local_20;
          if (iVar2 < 0) break;
LAB_01088882:
          local_4 = local_28;
          iVar2 = _SfList_AllocAndInsertItem_20(local_18,&local_10,0x10,0xffffffff,0);
          ptVar8 = local_20;
        } while ((-1 < iVar2) &&
                (uVar6 = uVar6 + 1, ptVar1 = ptVar9, (int)uVar6 < (int)(uint)*(ushort *)ptVar10));
      }
      iVar2 = _SfList_AllocAndInsertItem_20
                        (*(undefined4 *)(param_1 + 0x28),&local_1c,0xc,0xffffffff,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      local_24 = local_24 + 1;
      if ((int)(uint)*(ushort *)param_2 <= local_24) {
        return iVar2;
      }
    }
  }
  return iVar2;
}


