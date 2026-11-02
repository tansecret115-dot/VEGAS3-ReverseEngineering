/* Module: vegas30k.dll
   Function: SfPQList_ItemListToTOC
   Address: 01016640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfPQList_ItemListToTOC(struct _toc *,struct tSFLIST *) */

long SfPQList_ItemListToTOC(_toc *param_1,tSFLIST *param_2)

{
  _indexlist *p_Var1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  _track *p_Var6;
  undefined4 uVar7;
  int iVar8;
  tSFLIST *ptVar9;
  uint uVar10;
  _toc *p_Var11;
  uint local_8;
  uint local_4;
  
  p_Var11 = param_1;
                    /* 0x16640  483  ?SfPQList_ItemListToTOC@@YGJPAU_toc@@PAUtSFLIST@@@Z */
  for (iVar8 = 0x764; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)p_Var11 = 0;
    p_Var11 = p_Var11 + 4;
  }
  *(undefined4 *)param_1 = 1;
  uVar4 = SfPQList_GetNumTracks(param_2);
  *(uint *)(param_1 + 4) = uVar4;
  *(uint *)(param_1 + 0xc) = uVar4;
  lVar5 = cdrtoc_AllocTrackList((_tracklist *)(param_1 + 0xc));
  if (lVar5 == 0) {
    uVar4 = cdrtoc_GetTrackCount(param_1);
    uVar10 = 0;
    if (uVar4 != 0) {
      do {
        p_Var6 = cdrtoc_GetTrack(param_1,uVar10);
        uVar10 = uVar10 + 1;
        for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)p_Var6 = 0;
          p_Var6 = p_Var6 + 4;
        }
      } while (uVar10 < uVar4);
    }
    if (param_2 == (tSFLIST *)0x0) {
      local_4 = 0;
    }
    else {
      local_4 = *(uint *)param_2;
    }
    local_8 = 0;
    ptVar9 = param_2;
    if (local_4 != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_2 + 8) + local_8 * 4);
        if (*piVar2 == 3) {
          iVar8 = piVar2[1];
          uVar7 = FUN_01016570(param_2,iVar8);
          p_Var6 = cdrtoc_GetTrack(param_1,iVar8 - 1);
          *(undefined4 *)(p_Var6 + 0x10) = uVar7;
          *(int *)(p_Var6 + 0x14) = piVar2[2];
          *(int *)(p_Var6 + 0x18) = piVar2[3];
          p_Var1 = (_indexlist *)(p_Var6 + 0x40);
          *(int *)p_Var6 = iVar8;
          *(undefined4 *)p_Var1 = 0;
          *(undefined4 *)(p_Var6 + 0x44) = 0;
          *(undefined4 *)(p_Var6 + 8) = 0;
          if ((piVar2[4] & 1U) != 0) {
            *(undefined4 *)(p_Var6 + 8) = 2;
          }
          if ((piVar2[4] & 2U) != 0) {
            *(uint *)(p_Var6 + 8) = *(uint *)(p_Var6 + 8) | 1;
          }
          if ((piVar2[4] & 8U) != 0) {
            *(undefined4 *)(p_Var6 + 0x1c) = 1;
            *(int *)(p_Var6 + 0x20) = piVar2[6];
            *(int *)(p_Var6 + 0x24) = piVar2[7];
            *(int *)(p_Var6 + 0x28) = piVar2[8];
          }
          if (iVar8 == *(int *)(param_1 + 4)) {
            *(int *)(param_1 + 0x1d8c) = *(int *)(p_Var6 + 0x14) + *(int *)(p_Var6 + 0x18);
          }
          iVar8 = FUN_01016600(param_2,local_8);
          *(int *)p_Var1 = iVar8 + 1;
          lVar5 = cdrtoc_AllocIndexList(p_Var1);
          if (lVar5 != 0) {
            return lVar5;
          }
          puVar3 = *(undefined4 **)(p_Var6 + 0x44);
          *puVar3 = *(undefined4 *)(p_Var6 + 0x14);
          ptVar9 = (tSFLIST *)(puVar3 + 1);
        }
        else if (*piVar2 == 4) {
          *(int *)ptVar9 = piVar2[2];
          ptVar9 = ptVar9 + 4;
        }
        local_8 = local_8 + 1;
      } while (local_8 < local_4);
    }
    lVar5 = 0;
  }
  return lVar5;
}


