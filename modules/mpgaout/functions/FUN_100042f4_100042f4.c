/* Module: mpgaout.dll
   Function: FUN_100042f4
   Address: 100042f4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100042f4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_5 + 0x10);
  iVar3 = *(int *)(param_5 + 0x18);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = iVar5 + 1;
      if (0 < iVar2) {
        iVar5 = iVar5 * 4;
        iVar8 = iVar2;
        do {
          if (*(int *)(param_2 + iVar5) != 0) {
            FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_3 + iVar5),2);
          }
          iVar5 = iVar5 + 0x80;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar5 = iVar1;
    } while (iVar1 < iVar3);
  }
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = iVar5 + 1;
      if (0 < iVar2) {
        iVar5 = iVar5 * 4;
        iVar8 = 0;
        do {
          iVar6 = iVar8 * 0x80 + iVar5;
          if (*(int *)(param_2 + iVar6) != 0) {
            iVar6 = *(int *)(param_3 + iVar6);
            if (iVar6 == 1) {
LAB_1000440c:
              iVar6 = iVar8 * 0x180 + iVar5;
              FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_4 + iVar6),6);
              FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(iVar6 + 0x100 + param_4),6);
            }
            else if (iVar6 == 0) {
              iVar6 = 2;
              puVar7 = (uint *)(param_4 + iVar8 * 0x180 + iVar5);
              do {
                uVar4 = *puVar7;
                puVar7 = puVar7 + 0x20;
                FUN_1000ad4c(*(int **)(param_1 + 0x44e00),uVar4,6);
                iVar6 = iVar6 + -1;
              } while (-1 < iVar6);
            }
            else if (iVar6 == 2) {
              FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_4 + iVar8 * 0x180 + iVar5),6
                          );
            }
            else if (iVar6 == 3) goto LAB_1000440c;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
      }
      iVar5 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}


