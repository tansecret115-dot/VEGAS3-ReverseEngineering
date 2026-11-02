/* Module: vegas30k.dll
   Function: FUN_01042970
   Address: 01042970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01042970(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int *param_7,undefined4 param_8,int *param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  uint local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01042770(puVar1);
    _SfList_Destroy_4(*puVar1);
  }
  *(int *)(param_1 + 8) = param_2;
  _SfList_CreateExZ_32(puVar1,4,0xffffffff,0xffffffff,0x80000000,0,0,0);
  local_18 = 0;
  local_8 = (int *)0x0;
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  FUN_0113ea20(&local_18);
  param_2 = 0;
  if (0 < *param_9) {
    do {
      piVar6 = *(int **)(param_9[2] + param_2 * 4);
      piVar9 = local_14;
      piVar3 = local_10;
      piVar10 = local_c;
      piVar4 = local_8;
      if ((piVar6 != (int *)0x0) &&
         (((piVar6[0x9a] = 2, piVar6[0xd0] != 2 ||
           (local_4 = (int *)(uint)((uint)piVar6[0x90] < local_18), local_4 == (int *)0x0)) &&
          ((*(byte *)(piVar6 + 0x8e) & 0x10) != 0)))) {
        piVar11 = piVar6 + 1;
        iVar5 = FUN_010427b0(piVar11,param_4,param_5,param_3 & 1);
        piVar9 = local_14;
        piVar3 = local_10;
        piVar10 = local_c;
        piVar4 = local_8;
        if (((iVar5 != 0) &&
            (iVar5 = FUN_01042c60(0x10,piVar6[0x8f],param_6), piVar9 = local_14, piVar3 = local_10,
            piVar10 = local_c, piVar4 = local_8, iVar5 != 0)) &&
           ((piVar6[0x93] != 0 ||
            (iVar5 = FUN_01042c90(param_9,param_2,piVar11,0x10,0), piVar9 = local_14,
            piVar3 = local_10, piVar10 = local_c, piVar4 = local_8, iVar5 == 0)))) {
          iVar5 = 5;
          bVar12 = true;
          piVar6[0x9a] = 0;
          psVar8 = &DAT_011da200;
          piVar9 = piVar11;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *psVar8 == (short)*piVar9;
            psVar8 = psVar8 + 1;
            piVar9 = (int *)((int)piVar9 + 2);
          } while (bVar12);
          if (bVar12) {
LAB_01042b49:
            uVar13 = 0;
          }
          else {
            iVar5 = 5;
            bVar12 = true;
            psVar8 = &DAT_011da1f0;
            piVar9 = piVar11;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar12 = *psVar8 == (short)*piVar9;
              psVar8 = psVar8 + 1;
              piVar9 = (int *)((int)piVar9 + 2);
            } while (bVar12);
            if (bVar12) goto LAB_01042b49;
            iVar5 = 5;
            bVar12 = true;
            psVar8 = &DAT_011da240;
            piVar9 = piVar11;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar12 = *psVar8 == (short)*piVar9;
              psVar8 = psVar8 + 1;
              piVar9 = (int *)((int)piVar9 + 2);
            } while (bVar12);
            piVar9 = piVar6;
            piVar3 = local_10;
            piVar10 = local_c;
            piVar4 = local_8;
            if (bVar12) goto LAB_01042b62;
            iVar5 = 5;
            bVar12 = true;
            psVar8 = &DAT_011da230;
            piVar9 = piVar11;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar12 = *psVar8 == (short)*piVar9;
              psVar8 = psVar8 + 1;
              piVar9 = (int *)((int)piVar9 + 2);
            } while (bVar12);
            piVar9 = local_14;
            piVar4 = piVar6;
            if (bVar12) goto LAB_01042b62;
            iVar5 = 5;
            bVar12 = true;
            psVar8 = &DAT_011da2e0;
            piVar10 = piVar11;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar12 = *psVar8 == (short)*piVar10;
              psVar8 = psVar8 + 1;
              piVar10 = (int *)((int)piVar10 + 2);
            } while (bVar12);
            piVar10 = piVar6;
            piVar4 = local_8;
            if (bVar12) goto LAB_01042b62;
            iVar5 = 5;
            bVar12 = true;
            psVar8 = &DAT_011da270;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar12 = *psVar8 == (short)*piVar11;
              psVar8 = psVar8 + 1;
              piVar11 = (int *)((int)piVar11 + 2);
            } while (bVar12);
            piVar3 = piVar6;
            piVar10 = local_c;
            if (bVar12) goto LAB_01042b62;
            uVar13 = 0xffffffff;
          }
          local_4 = piVar6;
          _SfList_InsertList_16(*puVar1,uVar13,&local_4,1);
          piVar9 = local_14;
          piVar3 = local_10;
          piVar10 = local_c;
          piVar4 = local_8;
        }
      }
LAB_01042b62:
      local_8 = piVar4;
      local_c = piVar10;
      local_10 = piVar3;
      local_14 = piVar9;
      param_2 = param_2 + 1;
    } while (param_2 < *param_9);
    if (local_14 != (int *)0x0) {
      param_9 = local_14;
      _SfList_InsertList_16(*puVar1,0,&param_9,1);
    }
    if (local_10 != (int *)0x0) {
      param_9 = local_10;
      _SfList_InsertList_16(*puVar1,0xffffffff,&param_9,1);
    }
    if (local_c != (int *)0x0) {
      param_9 = local_c;
      _SfList_InsertList_16(*puVar1,0xffffffff,&param_9,1);
    }
    if (local_8 != (int *)0x0) {
      param_9 = local_8;
      _SfList_InsertList_16(*puVar1,0xffffffff,&param_9,1);
    }
  }
  piVar6 = (int *)*puVar1;
  iVar5 = 0;
  if (0 < *piVar6) {
    do {
      iVar7 = *(int *)(piVar6[2] + iVar5 * 4);
      *(int *)(iVar7 + 0x260) = iVar5;
      puVar2 = *(undefined4 **)(iVar7 + 0x264);
      if ((puVar2 != (undefined4 *)0x0) &&
         (iVar7 = (**(code **)*puVar2)(puVar2,&DAT_011d9ed0,&param_9), -1 < iVar7)) {
        (**(code **)(*param_9 + 0xc))(param_9,iVar5);
        (**(code **)(*param_7 + 8))(param_7);
      }
      piVar6 = (int *)*puVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar6);
  }
  return 0;
}


