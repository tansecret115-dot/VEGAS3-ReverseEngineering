/* Module: vegas30.exe
   Function: FUN_0042e650
   Address: 0042e650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e650(int param_1,HMENU param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  HWND pHVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  UINT UVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  code *pcVar18;
  bool bVar19;
  int local_60;
  UINT local_40;
  UINT local_3c;
  UINT local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    pHVar8 = GetFocus();
    iVar7 = DAT_00647630;
    pcVar18 = EnableMenuItem_exref;
    if (pHVar8 == *(HWND *)(*(int *)(param_1 + 0xa8) + 8)) {
      local_24 = (int *)FUN_005b87b0(param_3);
      if (local_24 == (int *)0x0) {
        param_3 = 0;
      }
      else {
        param_3 = *local_24;
      }
      iVar9 = FUN_00469260(DAT_00647630);
      iVar14 = 0;
      local_60 = 0;
      local_3c = 1;
      local_38 = 1;
      bVar2 = 0;
      bVar3 = 0;
      bVar4 = 0;
      bVar5 = 0;
      local_28 = 0;
      bVar6 = 0;
      if (0 < iVar9) {
        local_3c = 0;
        local_38 = 0;
        bVar2 = 1;
        bVar3 = 1;
        bVar4 = 1;
        bVar6 = 1;
        bVar5 = 1;
        piVar10 = (int *)FUN_004a4560(DAT_00647630);
        if ((piVar10 != (int *)0x0) && (0 < iVar9)) {
          do {
            if ((iVar14 < 0) || (*piVar10 + -1 < iVar14)) {
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(piVar10[2] + iVar14 * 4);
            }
            if (iVar16 != 0) {
              iVar11 = FUN_005c68e0(iVar16);
              if (local_60 <= iVar11) {
                local_60 = FUN_005c68e0(iVar16);
              }
              if (0 < *(int *)(iVar16 + 0x38)) {
                local_28 = 1;
              }
              if (*(int *)(iVar16 + 4) == 2) {
                local_38 = 1;
                if ((*(uint *)(iVar16 + 0x10) & 0x200) == 0) {
                  bVar2 = 0;
                }
                if ((*(byte *)(iVar16 + 0xfc) & 1) == 0) {
                  bVar3 = 0;
                }
                bVar4 = 0;
                bVar5 = 0;
                bVar6 = 0;
              }
              else if (*(int *)(iVar16 + 4) == 3) {
                uVar12 = *(uint *)(iVar16 + 0xf8);
                local_3c = 1;
                if ((uVar12 & 1) == 0) {
                  bVar4 = 0;
                }
                if ((uVar12 & 0x80) == 0) {
                  bVar5 = 0;
                }
                if ((uVar12 & 0x100) == 0) {
                  bVar6 = 0;
                }
                bVar2 = 0;
                bVar3 = 0;
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar9);
        }
      }
      local_40 = 1;
      if (param_3 != 0) {
        FUN_004582a0(iVar7,&local_20,&local_18);
        if (*(int **)(iVar7 + 0xcd0) == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = **(int **)(iVar7 + 0xcd0);
        }
        bVar1 = 0 < iVar14;
        bVar19 = DAT_00649e0c == 0;
        local_34 = 0;
        if (0 < param_3) {
          do {
            if (local_24 == (int *)0x0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *local_24;
            }
            if ((local_34 < 0) || (iVar14 + -1 < local_34)) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(local_24[2] + local_34 * 4);
            }
            piVar10 = *(int **)(iVar14 + 0x28);
            if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
              local_10 = local_20;
              local_c = local_1c;
              iVar14 = _SfList_FindSortedInsertIndexRange_20
                                 (piVar10,&local_10,0,0xffffffff,&LAB_005c5a20);
              if (iVar14 < 1) {
                iVar14 = 0;
              }
              else {
                iVar14 = iVar14 + -1;
              }
              puVar17 = (undefined4 *)(piVar10[1] * iVar14 + piVar10[2]);
              iVar14 = FUN_0042eda0(*puVar17,bVar1,bVar19,local_20,local_1c);
              if ((iVar14 != 0) ||
                 (iVar14 = FUN_0042eda0(puVar17[1],bVar1,bVar19,local_20,local_1c), iVar14 != 0)) {
LAB_0042e9a1:
                local_40 = 0;
                break;
              }
              if (local_18 != 0 || local_14 != 0) {
                local_8 = local_20 + local_18;
                local_4 = local_1c + local_14 + (uint)CARRY4(local_20,local_18);
                iVar14 = _SfList_FindSortedInsertIndexRange_20
                                   (piVar10,&local_8,0,0xffffffff,&LAB_005c5a20);
                if (iVar14 < 1) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = iVar14 + -1;
                }
                puVar17 = (undefined4 *)(piVar10[1] * iVar14 + piVar10[2]);
                iVar14 = FUN_0042eda0(*puVar17,bVar1,bVar19,local_20 + local_18,
                                      local_1c + local_14 + (uint)CARRY4(local_20,local_18));
                if ((iVar14 != 0) ||
                   (iVar14 = FUN_0042eda0(puVar17[1],bVar1,bVar19,local_20 + local_18,
                                          local_1c + local_14 + (uint)CARRY4(local_20,local_18)),
                   iVar14 != 0)) goto LAB_0042e9a1;
              }
            }
            local_34 = local_34 + 1;
          } while (local_34 < param_3);
        }
      }
      pcVar18 = EnableMenuItem_exref;
      EnableMenuItem(param_2,0xa09a,local_40);
      EnableMenuItem(param_2,0x9d10,(uint)(param_3 == 0));
      iVar14 = FUN_00469160(iVar7);
      uVar12 = (uint)(iVar14 == 0);
      EnableMenuItem(param_2,0x9d0b,uVar12);
      EnableMenuItem(param_2,0x9d0c,uVar12);
      EnableMenuItem(param_2,0x9d0f,uVar12);
      iVar14 = FUN_004690d0(iVar7);
      uVar12 = (uint)(iVar14 == 0);
      EnableMenuItem(param_2,0x9d0d,uVar12);
      EnableMenuItem(param_2,0x9d15,uVar12);
      EnableMenuItem(param_2,0xa1cd,uVar12);
      iVar14 = FUN_004691f0(iVar7);
      EnableMenuItem(param_2,0x9d0e,(uint)(iVar14 == 0));
      EnableMenuItem(param_2,0x9d2a,0);
      iVar14 = FUN_00459600(iVar7);
      if (iVar14 != 0) {
        iVar14 = FUN_004ca8c0(iVar7);
        EnableMenuItem(param_2,0x9d0f,(uint)(iVar14 < 1));
      }
      UVar13 = 1;
      if ((iVar9 == 1) && (0 < local_60)) {
        UVar13 = 0;
      }
      EnableMenuItem(param_2,0xa0a2,UVar13);
      EnableMenuItem(param_2,0xa0a1,UVar13);
      EnableMenuItem(param_2,0xa0a0,UVar13);
      if ((iVar9 < 1) || (local_60 < 1)) {
        UVar13 = 1;
      }
      else {
        UVar13 = 0;
      }
      EnableMenuItem(param_2,0xa77b,UVar13);
      if ((iVar9 < 1) || (local_60 < 2)) {
        UVar13 = 1;
      }
      else {
        UVar13 = 0;
      }
      EnableMenuItem(param_2,0xa0a3,UVar13);
      EnableMenuItem(param_2,0xa0a6,UVar13);
      uVar12 = (uint)(iVar9 < 1);
      EnableMenuItem(param_2,0xa08f,uVar12);
      EnableMenuItem(param_2,0xa092,uVar12);
      EnableMenuItem(param_2,0xa77c,uVar12);
      EnableMenuItem(param_2,0xc883,local_3c);
      EnableMenuItem(param_2,0xa78a,local_3c);
      EnableMenuItem(param_2,0xa1c5,local_38);
      EnableMenuItem(param_2,0xa1c6,local_38);
      EnableMenuItem(param_2,0xc613,local_38);
      local_2c = 0;
      local_30 = 0;
      iVar14 = FUN_004a58b0(iVar7,&local_2c,&local_30);
      if (iVar14 == 0) {
        EnableMenuItem(param_2,0xa08f,1);
        EnableMenuItem(param_2,0xa092,1);
        EnableMenuItem(param_2,0xa77c,1);
      }
      else {
        uVar12 = local_2c >> 3;
        uVar15 = local_30 >> 1;
        CheckMenuItem(param_2,0xa77c,local_30 >> 5 & 8);
        CheckMenuItem(param_2,0xa08f,-(uint)((uVar15 & 1) != 0) & 8);
        CheckMenuItem(param_2,0xa092,-(uint)((uVar12 & 1) != 0) & 8);
      }
      CheckMenuItem(param_2,0xa78a,-(uint)bVar2 & 8);
      CheckMenuItem(param_2,0xc883,-(uint)bVar3 & 8);
      CheckMenuItem(param_2,0xa1c5,-(uint)bVar4 & 8);
      CheckMenuItem(param_2,0xa1c6,-(uint)bVar5 & 8);
      CheckMenuItem(param_2,0xc613,-(uint)bVar6 & 8);
      EnableMenuItem(param_2,0xa774,(uint)(iVar9 < 2));
      if ((((*(byte *)(iVar7 + 0x1c) & 2) == 0) && (*(int *)(iVar7 + 0xcec) != 0)) &&
         (0 < *(int *)(*(int *)(iVar7 + 0xcec) + 0x38))) {
        UVar13 = 0;
      }
      else {
        UVar13 = (UINT)(local_28 == 0);
      }
      EnableMenuItem(param_2,0xa775,UVar13);
      EnableMenuItem(param_2,0xa776,UVar13);
    }
    else {
      EnableMenuItem(param_2,0x9d0b,1);
      EnableMenuItem(param_2,0x9d0c,1);
      EnableMenuItem(param_2,0x9d0d,1);
      EnableMenuItem(param_2,0x9d15,1);
      EnableMenuItem(param_2,0xa1cd,1);
      EnableMenuItem(param_2,0x9d0e,1);
      EnableMenuItem(param_2,0x9d10,1);
      EnableMenuItem(param_2,0xa09a,1);
      EnableMenuItem(param_2,0xa0a2,1);
      EnableMenuItem(param_2,0xa0a3,1);
      EnableMenuItem(param_2,0xa0a6,1);
      EnableMenuItem(param_2,0xa0a1,1);
      EnableMenuItem(param_2,0xa77b,1);
      EnableMenuItem(param_2,0xa08f,1);
      EnableMenuItem(param_2,0xa092,1);
      EnableMenuItem(param_2,0xa77c,1);
      EnableMenuItem(param_2,0xc883,1);
      EnableMenuItem(param_2,0xa78a,1);
      EnableMenuItem(param_2,0xa78b,1);
      EnableMenuItem(param_2,0xa774,1);
      EnableMenuItem(param_2,0xa775,1);
      EnableMenuItem(param_2,0xa776,1);
      UVar13 = 1;
    }
    (*pcVar18)(param_2,0xc578,UVar13);
    FUN_004e9120(param_2);
  }
  return;
}


