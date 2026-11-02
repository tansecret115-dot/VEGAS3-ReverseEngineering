/* Module: vegas30.exe
   Function: FUN_0047c990
   Address: 0047c990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047c990(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  iVar5 = param_1;
  if ((*(int **)(param_1 + 0x18) == (int *)0x0) || (param_2 == 0 && param_3 == 0)) {
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x18);
  param_1 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(iVar5 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar2;
      }
      if ((param_1 < 0) || (iVar8 + -1 < param_1)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(piVar2[2] + param_1 * 4);
      }
      if ((iVar8 != 0) && ((param_4 < 0 || (param_4 == *(int *)(iVar8 + 0x10))))) {
        iVar3 = **(int **)(iVar8 + 0x30);
        if (1 < iVar3) {
          puVar4 = (uint *)(*(int **)(iVar8 + 0x30))[2];
          puVar6 = puVar4;
          iVar10 = iVar3;
          if (0 < iVar3) {
            do {
              uVar7 = *puVar6;
              *puVar6 = *puVar6 - param_2;
              puVar6[1] = (puVar6[1] - param_3) - (uint)(uVar7 < param_2);
              iVar10 = iVar10 + -1;
              puVar6 = puVar6 + 4;
            } while (iVar10 != 0);
          }
          if (param_3 < 1) {
            if (param_3 < 0) {
              local_18 = puVar4[2];
              local_14 = puVar4[3];
              local_20 = 0;
              local_1c = 0;
              _SfList_InsertList_16(*(undefined4 *)(iVar8 + 0x30),0,&local_20,1);
              if (*(int *)(iVar5 + 0x40) == param_1) {
                *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
              }
            }
            else if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) goto LAB_0047caa2;
          }
          else {
LAB_0047caa2:
            iVar10 = 0;
            if (1 < iVar3) {
              iVar11 = 1;
              puVar6 = puVar4;
              do {
                if ((0 < (int)puVar6[5]) || (-1 < (int)puVar6[5])) break;
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + 1;
                puVar6 = puVar6 + 4;
              } while (iVar11 < iVar3);
            }
            iVar11 = iVar10 + 1;
            if (iVar11 < iVar3) {
              uVar7 = (puVar4 + iVar11 * 4)[1];
              if ((-1 < (int)uVar7) && ((0 < (int)uVar7 || (puVar4[iVar11 * 4] != 0)))) {
                puVar4 = puVar4 + iVar10 * 4;
                fVar12 = (float10)FUN_0047e950(iVar8,0,0,0xffffffff,0xffffffff);
                puVar4[2] = (uint)(float)fVar12;
                *puVar4 = 0;
                puVar4[1] = 0;
                iVar11 = iVar10;
              }
              if ((0 < iVar11) &&
                 (_SfList_DeleteList_16(*(undefined4 *)(iVar8 + 0x30),0,iVar11,0),
                 *(int *)(iVar5 + 0x40) == param_1)) {
                uVar7 = *(int *)(iVar5 + 0x48) - iVar11;
                *(uint *)(iVar5 + 0x48) = uVar7;
                if ((int)uVar7 < 0) {
                  uVar9 = *(int *)(iVar5 + 0x4c) + uVar7;
                  *(uint *)(iVar5 + 0x4c) = uVar9 & ((int)uVar9 < 0) - 1;
                }
                uVar7 = uVar7 & ((int)uVar7 < 1) - 1;
                goto LAB_0047cbb4;
              }
            }
            else {
              local_10 = 0;
              local_c = 0;
              local_8 = puVar4[iVar3 * 4 + -2];
              local_4 = puVar4[iVar3 * 4 + -1];
              _SfList_DeleteList_16(*(undefined4 *)(iVar8 + 0x30),0,0xffffffff,1);
              _SfList_InsertList_16(*(undefined4 *)(iVar8 + 0x30),0,&local_10,1);
              if (*(int *)(iVar5 + 0x40) == param_1) {
                uVar7 = 0;
                *(undefined4 *)(iVar5 + 0x4c) = 0;
LAB_0047cbb4:
                *(uint *)(iVar5 + 0x48) = uVar7;
              }
            }
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
  }
  return 0;
}


