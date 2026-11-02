/* Module: vegas30.exe
   Function: FUN_005c5fc0
   Address: 005c5fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c5fc0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  
  local_c = 0;
  iVar1 = *(int *)param_1[0x77];
  if (0 < iVar1) {
    do {
      iVar7 = 0;
      iVar2 = *(int *)(*(int *)(param_1[0x77] + 8) + local_c * 4);
      iVar3 = **(int **)(iVar2 + 0x24);
      if (0 < iVar3) {
        piVar8 = (int *)(*(int **)(iVar2 + 0x24))[2];
        do {
          piVar4 = *(int **)(*piVar8 + 0x54);
          if (piVar4 == (int *)0x0) {
            iVar5 = *(int *)(*piVar8 + 0x50);
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == param_2)) {
LAB_005c604e:
              *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x200000;
              *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
              break;
            }
          }
          else {
            iVar5 = 0;
            if (0 < *piVar4) {
              piVar6 = (int *)piVar4[2];
              do {
                if (*(int *)(*piVar6 + 0x18) == param_2) goto LAB_005c604e;
                iVar5 = iVar5 + 1;
                piVar6 = piVar6 + 1;
              } while (iVar5 < *piVar4);
            }
          }
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar7 < iVar3);
      }
      local_c = local_c + 1;
    } while (local_c < iVar1);
  }
  return;
}


