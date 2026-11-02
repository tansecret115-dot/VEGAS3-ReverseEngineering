/* Module: vegas30k.dll
   Function: FUN_01089fd0
   Address: 01089fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01089fd0(int param_1,tagVTS_PTT_SRPTI *param_2)

{
  byte bVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  tagVTS_TTU_SRP *ptVar7;
  tagVTS_PTT_SRP *ptVar8;
  byte *pbVar9;
  int iVar10;
  uint local_30;
  short local_2c;
  undefined2 local_28;
  tagVTS_PTT_SRP local_26;
  int local_24;
  byte local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  byte local_8;
  undefined4 local_4;
  
  SfCdiSwap_VTS_PTT_SRPTI(param_2);
  bVar6 = 0;
  ptVar7 = (tagVTS_TTU_SRP *)(param_2 + 8);
  if (*(short *)param_2 != 0) {
    do {
      SfCdiSwap_VTS_TTU_SRP(ptVar7);
      bVar6 = bVar6 + 1;
      ptVar7 = ptVar7 + 4;
    } while ((ushort)bVar6 < *(ushort *)param_2);
  }
  uVar5 = *(ushort *)param_2;
  bVar6 = 0;
  local_30 = 0;
  if (uVar5 == 0) {
    iVar4 = 0;
  }
  else {
    while( true ) {
      pbVar9 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9 = pbVar9 + 4;
      }
      bVar6 = bVar6 + 1;
      if (local_30 == uVar5 - 1) {
        uVar3 = ((short)*(undefined4 *)(param_2 + 4) -
                (short)*(undefined4 *)(param_2 + local_30 * 4 + 8)) + 1;
      }
      else {
        uVar3 = (short)*(undefined4 *)(param_2 + local_30 * 4 + 0xc) -
                (short)*(undefined4 *)(param_2 + local_30 * 4 + 8);
      }
      local_20[0] = bVar6;
      iVar4 = _SfList_CreateExZ_32(&local_4,4,(uint)uVar5,0xffffffff,0x40000002,0,0,0);
      if (iVar4 < 0) break;
      uVar5 = 0;
      ptVar8 = (tagVTS_PTT_SRP *)(param_2 + *(int *)(param_2 + local_30 * 4 + 8));
      if (uVar3 >> 2 != 0) {
        do {
          SfCdiSwap_VTS_PTT_SRP(ptVar8);
          local_28 = *(undefined2 *)ptVar8;
          local_26 = ptVar8[3];
          piVar2 = *(int **)(param_1 + 0x48);
          iVar4 = *(ushort *)ptVar8 - 1;
          if (piVar2 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *piVar2;
          }
          if ((iVar4 < 0) || (iVar10 + -1 < iVar4)) {
            local_24 = 0;
          }
          else {
            local_24 = *(int *)(piVar2[2] + -4 + (uint)*(ushort *)ptVar8 * 4);
          }
          if ((uVar5 != 0) && (local_2c != *(short *)ptVar8)) {
            local_18 = 1;
          }
          local_2c = *(short *)ptVar8;
          bVar1 = *(byte *)(*(int *)(local_24 + 0x10) + 9);
          if (bVar1 == 0) {
            local_14 = 1;
            iVar4 = *(int *)(local_24 + 0x10);
            if (((*(short *)(iVar4 + 0xa8) == 0) && (*(short *)(iVar4 + 0xaa) == 0)) &&
               (*(short *)(iVar4 + 0xac) == 0)) {
              local_1c = 1;
            }
          }
          else {
            if ((bVar1 & 0x80) == 0) {
              local_10 = 1;
            }
            else {
              local_c = 1;
            }
            local_8 = *(byte *)(*(int *)(local_24 + 0x10) + 9) & 0x7f;
          }
          iVar4 = _SfList_AllocAndInsertItem_20(local_4,&local_28,8,0xffffffff,0);
          if (iVar4 < 0) break;
          uVar5 = uVar5 + 1;
          ptVar8 = ptVar8 + 4;
        } while (uVar5 < uVar3 >> 2);
      }
      iVar4 = _SfList_AllocAndInsertItem_20
                        (*(undefined4 *)(param_1 + 0x30),local_20,0x20,0xffffffff,0);
      if (iVar4 < 0) {
        return iVar4;
      }
      local_30 = (uint)bVar6;
      uVar5 = *(ushort *)param_2;
      if (uVar5 <= bVar6) {
        return iVar4;
      }
    }
  }
  return iVar4;
}


