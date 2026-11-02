/* Module: vegas30k.dll
   Function: FUN_01089c20
   Address: 01089c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01089c20(int param_1,tagVTSM_PGCI_UTI *param_2)

{
  tagVTSM_LU_SRP tVar1;
  tagVTSM_PGCI_SRP *ptVar2;
  uint3 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  tagVTSM_LU_SRP *ptVar8;
  tagVTSM_LU_SRP *ptVar9;
  uint uVar10;
  tagVTSM_PGCI_SRP *ptVar11;
  tagVTSM_LUI *ptVar12;
  tagSFIFO_PGCI *local_28;
  int local_24;
  tagVTSM_LU_SRP *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  tagSFIFO_PGCI *local_4;
  
  SfCdiSwap_VTSM_PGCI_UTI(param_2);
  local_24 = 0;
  ptVar9 = (tagVTSM_LU_SRP *)param_2;
  if (*(short *)param_2 == 0) {
    iVar4 = 0;
  }
  else {
    while( true ) {
      ptVar8 = ptVar9 + 8;
      local_20 = ptVar8;
      SfCdiSwap_VTSM_LU_SRP(ptVar8);
      uVar3 = *(uint3 *)ptVar8;
      local_18 = 0;
      local_14 = (int *)0x0;
      tVar1 = ptVar9[0xb];
      local_1c = (uint)uVar3;
      if (((byte)tVar1 & 1) == 0) {
        if (((byte)tVar1 & 2) == 0) {
          if (((byte)tVar1 & 4) == 0) {
            if (((byte)tVar1 & 8) == 0) {
              if (((byte)tVar1 & 0x10) != 0) {
                local_1c = CONCAT13(8,uVar3);
              }
            }
            else {
              local_1c = CONCAT13(0x10,uVar3);
            }
          }
          else {
            local_1c = CONCAT13(0x20,uVar3);
          }
        }
        else {
          local_1c = CONCAT13(0x40,uVar3);
        }
      }
      else {
        local_1c = CONCAT13(0x80,uVar3);
      }
      iVar4 = _SfList_CreateExZ_32(&local_18,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
      if ((iVar4 < 0) ||
         (iVar4 = _SfList_CreateExZ_32(&local_14,4,0xffffffff,0xffffffff,0x40000002,0,0,0),
         iVar4 < 0)) break;
      ptVar12 = (tagVTSM_LUI *)(param_2 + *(int *)(ptVar9 + 0xc));
      SfCdiSwap_VTSM_LUI(ptVar12);
      uVar10 = 0;
      ptVar9 = ptVar8;
      ptVar2 = (tagVTSM_PGCI_SRP *)ptVar12;
      if (*(short *)ptVar12 != 0) {
        do {
          ptVar11 = ptVar2 + 8;
          SfCdiSwap_VTSM_PGCI_SRP(ptVar11);
          local_4 = (tagSFIFO_PGCI *)0x0;
          local_10 = (uint)((byte)*ptVar11 >> 7);
          local_c = (uint)(CONCAT12((byte)ptVar2[9] >> 6,CONCAT11((byte)ptVar2[9] >> 4,*ptVar11)) &
                          0xff030f);
          local_8 = (uint)*(ushort *)(ptVar2 + 10);
          iVar4 = 0;
          while( true ) {
            if (local_14 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *local_14;
            }
            if (iVar5 <= iVar4) break;
            if (local_14 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *local_14;
            }
            if ((iVar4 < 0) || (iVar5 + -1 < iVar4)) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = *(undefined4 **)(local_14[2] + iVar4 * 4);
            }
            local_28 = (tagSFIFO_PGCI *)*puVar6;
            if (*(int *)local_28 == *(int *)(ptVar2 + 0xc)) goto LAB_01089dd2;
            iVar4 = iVar4 + 1;
          }
          lVar7 = SfCdiAllocateProgramChainInfo(&local_28);
          ptVar9 = local_20;
          if (lVar7 < 0) break;
          SfCdiGetProgramChainInfo
                    ((tagPGCI_GI *)(ptVar12 + *(ulong *)(ptVar2 + 0xc)),*(ulong *)(ptVar2 + 0xc),
                     uVar10,local_28);
          iVar4 = _SfList_AllocAndInsertItem_20(local_14,&local_28,4,0xffffffff,0);
          ptVar9 = local_20;
          if (iVar4 < 0) break;
LAB_01089dd2:
          local_4 = local_28;
          iVar4 = _SfList_AllocAndInsertItem_20(local_18,&local_10,0x10,0xffffffff,0);
          ptVar9 = local_20;
        } while ((-1 < iVar4) &&
                (uVar10 = uVar10 + 1, ptVar2 = ptVar11, (int)uVar10 < (int)(uint)*(ushort *)ptVar12)
                );
      }
      iVar4 = _SfList_AllocAndInsertItem_20
                        (*(undefined4 *)(param_1 + 0x18),&local_1c,0xc,0xffffffff,0);
      if (iVar4 < 0) {
        return iVar4;
      }
      local_24 = local_24 + 1;
      if ((int)(uint)*(ushort *)param_2 <= local_24) {
        return iVar4;
      }
    }
  }
  return iVar4;
}


