/* Module: vegas30.exe
   Function: FUN_0047cbf0
   Address: 0047cbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047cbf0(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return 0;
  }
  local_4 = **(int **)(param_1 + 0x18);
  local_8 = 0;
  if (0 < local_4) {
    do {
      piVar2 = *(int **)(param_1 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if ((local_8 < 0) || (iVar5 + -1 < local_8)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar2[2] + local_8 * 4);
      }
      if ((iVar5 != 0) && ((param_6 < 0 || (param_6 == *(int *)(iVar5 + 0x10))))) {
        iVar3 = **(int **)(iVar5 + 0x30);
        if (1 < iVar3) {
          puVar6 = (uint *)(*(int **)(iVar5 + 0x30))[2];
          puVar4 = puVar6;
          iVar7 = iVar3;
          if (0 < iVar3) {
            do {
              uVar1 = *puVar4;
              *puVar4 = *puVar4 - param_2;
              puVar4[1] = (puVar4[1] - param_3) - (uint)(uVar1 < param_2);
              iVar7 = iVar7 + -1;
              puVar4 = puVar4 + 4;
            } while (iVar7 != 0);
          }
          if ((param_3 < 0) || ((param_3 < 1 && (param_2 == 0)))) {
LAB_0047ccea:
            piVar2 = *(int **)(iVar5 + 0x30);
            iVar7 = 0;
            iVar3 = *piVar2;
            puVar6 = (uint *)piVar2[2];
            if (0 < iVar3) {
              do {
                if ((param_5 < (int)puVar6[1]) ||
                   ((param_5 <= (int)puVar6[1] && (param_4 < *puVar6)))) {
                  if (iVar7 == 0) {
                    FUN_0047c480(iVar5);
                    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x18),local_8,1,0);
                    local_8 = local_8 + -1;
                    local_4 = local_4 + -1;
                  }
                  else if (iVar7 < iVar3) {
                    _SfList_DeleteList_16(piVar2,iVar7,iVar3 - iVar7,0);
                  }
                  break;
                }
                iVar7 = iVar7 + 1;
                puVar6 = puVar6 + 4;
              } while (iVar7 < iVar3);
            }
          }
          else {
            iVar7 = 0;
            if (0 < iVar3) {
              do {
                if ((0 < (int)puVar6[1]) || (-1 < (int)puVar6[1])) {
                  if (iVar7 < iVar3) {
                    if (0 < iVar7) {
                      _SfList_DeleteList_16(*(undefined4 *)(iVar5 + 0x30),0,iVar7,0);
                    }
                    goto LAB_0047ccea;
                  }
                  break;
                }
                iVar7 = iVar7 + 1;
                puVar6 = puVar6 + 4;
              } while (iVar7 < iVar3);
            }
            FUN_0047c480(iVar5);
            _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x18),local_8,1,0);
            local_8 = local_8 + -1;
            local_4 = local_4 + -1;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_4);
  }
  return 0;
}


