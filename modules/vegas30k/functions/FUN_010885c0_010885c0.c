/* Module: vegas30k.dll
   Function: FUN_010885c0
   Address: 010885c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010885c0(int param_1,tagPTL_MAITI *param_2)

{
  ushort uVar1;
  tagPTL_MAI_SRP *ptVar2;
  int iVar3;
  int iVar4;
  tagPTL_MAI_SRP *ptVar5;
  tagPTL_MAITI *ptVar6;
  tagPTL_MAI_SRP *ptVar7;
  undefined4 *puVar8;
  uint local_30;
  int local_2c;
  int local_28;
  tagPTL_MAI_SRP local_24;
  tagPTL_MAI_SRP local_23;
  undefined4 local_20 [8];
  
  SfCdiSwap_PTL_MAITI(param_2);
  local_28 = 0;
  ptVar2 = (tagPTL_MAI_SRP *)param_2;
  if (*(short *)param_2 == 0) {
    return 0;
  }
  do {
    ptVar5 = ptVar2 + 8;
    SfCdiSwap_PTL_MAI_SRP(ptVar5);
    uVar1 = *(ushort *)(ptVar2 + 0xc);
    local_2c = 0;
    ptVar7 = &local_24;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)ptVar7 = 0;
      ptVar7 = ptVar7 + 4;
    }
    local_24 = *ptVar5;
    local_23 = ptVar2[9];
    ptVar6 = param_2 + uVar1;
    puVar8 = local_20;
    do {
      iVar3 = _SfList_CreateExZ_32(puVar8,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar4 = 0;
      if ((byte)param_2[3] != 0xffffffff) {
        do {
          SfCdiSwap_PTL_ID_FLD((ushort *)ptVar6);
          local_30 = (uint)*(ushort *)ptVar6;
          iVar3 = _SfList_AllocAndInsertItem_20(*puVar8,&local_30,4,0xffffffff,0);
          if (iVar3 < 0) break;
          iVar4 = iVar4 + 1;
          ptVar6 = ptVar6 + 2;
        } while (iVar4 < (int)((byte)param_2[3] + 1));
      }
      puVar8 = puVar8 + 1;
      local_2c = local_2c + 1;
    } while (local_2c < 8);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = _SfList_AllocAndInsertItem_20
                      (*(undefined4 *)(param_1 + 0x2c),&local_24,0x24,0xffffffff,0);
    if (iVar3 < 0) {
      return iVar3;
    }
    local_28 = local_28 + 1;
    ptVar2 = ptVar5;
    if ((int)(uint)*(ushort *)param_2 <= local_28) {
      return iVar3;
    }
  } while( true );
}


