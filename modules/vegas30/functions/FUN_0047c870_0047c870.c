/* Module: vegas30.exe
   Function: FUN_0047c870
   Address: 0047c870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c870(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  int local_8;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x18);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar2;
        }
        if ((local_8 < 0) || (iVar6 + -1 < local_8)) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(piVar2[2] + local_8 * 4);
        }
        if (iVar6 != 0) {
          iVar3 = **(int **)(iVar6 + 0x30);
          if (1 < iVar3) {
            puVar4 = (uint *)(*(int **)(iVar6 + 0x30))[2];
            iVar7 = 0;
            puVar5 = puVar4;
            if (0 < iVar3) {
              do {
                if (((int)param_3 < (int)puVar5[1]) ||
                   (((int)param_3 <= (int)puVar5[1] && (param_2 < *puVar5)))) {
                  puVar4 = puVar4 + iVar7 * 4;
                  fVar9 = (float10)FUN_0047e950(iVar6,param_2,param_3,0xffffffff,0xffffffff);
                  puVar4[2] = (uint)(float)fVar9;
                  *puVar4 = param_2;
                  puVar4[1] = param_3;
                  if ((iVar7 + 1 < iVar3) &&
                     ((_SfList_DeleteList_16
                                 (*(undefined4 *)(iVar6 + 0x30),iVar7 + 1,(iVar3 - iVar7) + -1,0),
                      *(int *)(param_1 + 0x40) == local_8 &&
                      (iVar7 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c))))) {
                    uVar8 = iVar7 - *(int *)(param_1 + 0x48);
                    *(uint *)(param_1 + 0x4c) = ((int)uVar8 < 0) - 1 & uVar8;
                  }
                  break;
                }
                iVar7 = iVar7 + 1;
                puVar5 = puVar5 + 4;
              } while (iVar7 < iVar3);
            }
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar1);
    }
  }
  return;
}


