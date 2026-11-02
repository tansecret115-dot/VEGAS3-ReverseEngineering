/* Module: vegas30.exe
   Function: FUN_0047e740
   Address: 0047e740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047e740(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_c;
  
  if ((*(int **)(param_1 + 0x18) == (int *)0x0) || (param_4 == 0 && param_5 == 0)) {
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x18);
  local_c = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_1 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((local_c < 0) || (iVar6 + -1 < local_c)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + local_c * 4);
      }
      if ((iVar6 != 0) && ((param_6 < 0 || (param_6 == *(int *)(iVar6 + 0x10))))) {
        iVar9 = **(int **)(iVar6 + 0x30);
        if (0 < iVar9) {
          puVar5 = (uint *)(*(int **)(iVar6 + 0x30))[2];
          if ((param_3 <= (int)puVar5[iVar9 * 4 + -3]) &&
             ((param_3 < (int)puVar5[iVar9 * 4 + -3] || (param_2 <= puVar5[iVar9 * 4 + -4])))) {
            iVar7 = 1;
            puVar4 = puVar5;
            if (1 < iVar9) {
              while( true ) {
                if (param_3 < (int)puVar4[5]) break;
                if (((param_3 <= (int)puVar4[5]) && (param_2 <= puVar4[4])) ||
                   (iVar7 = iVar7 + 1, puVar4 = puVar4 + 4, iVar9 <= iVar7)) break;
              }
            }
            if (((param_5 < 1) && (param_5 < 0)) && (iVar10 = 0, iVar7 < iVar9)) {
              iVar11 = (param_3 - param_5) - (uint)(param_2 < param_4);
              puVar4 = puVar5 + iVar7 * 4;
              iVar8 = iVar7;
              do {
                if ((iVar11 < (int)puVar4[1]) ||
                   ((iVar11 <= (int)puVar4[1] && (param_2 - param_4 < *puVar4)))) break;
                iVar10 = iVar10 + 1;
                iVar8 = iVar8 + 1;
                puVar4 = puVar4 + 4;
              } while (iVar8 < iVar9);
              if ((-1 < iVar10) && (0 < iVar10)) {
                _SfList_DeleteList_16(*(undefined4 *)(iVar6 + 0x30),iVar7,iVar10,1);
                puVar5 = (uint *)(*(int **)(iVar6 + 0x30))[2];
                iVar9 = **(int **)(iVar6 + 0x30);
              }
            }
            if (iVar7 < iVar9) {
              puVar5 = puVar5 + iVar7 * 4;
              iVar9 = iVar9 - iVar7;
              do {
                uVar3 = *puVar5;
                *puVar5 = uVar3 + param_4;
                puVar5[1] = puVar5[1] + param_5 + (uint)CARRY4(uVar3,param_4);
                puVar5 = puVar5 + 4;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar1);
  }
  return 0;
}


