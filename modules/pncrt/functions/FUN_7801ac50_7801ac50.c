/* Module: pncrt.dll
   Function: FUN_7801ac50
   Address: 7801ac50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_7801ac50(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  bool bVar12;
  int *local_c;
  uint local_8;
  
  piVar10 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  local_c = (int *)0x0;
  local_8 = 0;
  piVar6 = (int *)0x0;
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar6 = (int *)*piVar10;
      if (*piVar6 == param_5) {
LAB_7801acc1:
        uVar7 = 0;
        piVar9 = piVar10;
        if (piVar6[1] != 0) {
          do {
            piVar9 = piVar9 + 1;
            iVar4 = *(int *)*piVar9;
            piVar2 = local_c;
            if (iVar4 == param_3) {
LAB_7801ad11:
              iVar4 = FUN_7801ae40(param_1,(int *)*piVar9 + 2);
              if ((iVar4 == param_4) && (piVar2 = piVar6, local_c != (int *)0x0)) {
                iVar4 = FUN_7801ae40(param_1,piVar6 + 2);
                iVar5 = FUN_7801ae40(param_1,local_c + 2);
                if (iVar5 != iVar4) {
                  return (int *)0x0;
                }
              }
            }
            else {
              pbVar11 = (byte *)(param_3 + 8);
              pbVar3 = (byte *)(iVar4 + 8);
              do {
                bVar1 = *pbVar3;
                bVar12 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_7801ad08:
                  iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_7801ad0d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar12 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_7801ad08;
                pbVar3 = pbVar3 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_7801ad0d:
              if (iVar4 == 0) goto LAB_7801ad11;
            }
            local_c = piVar2;
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)piVar6[1]);
        }
      }
      else {
        pbVar11 = (byte *)(param_5 + 8);
        pbVar3 = (byte *)(*piVar6 + 8);
        do {
          bVar1 = *pbVar3;
          bVar12 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_7801acb4:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_7801acb9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar12 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_7801acb4;
          pbVar3 = pbVar3 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_7801acb9:
        if (iVar4 == 0) goto LAB_7801acc1;
      }
      local_8 = local_8 + 1;
      piVar10 = piVar10 + 1;
      piVar6 = local_c;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  if (piVar6 != (int *)0x0) {
    return piVar6;
  }
  uVar8 = 0;
  piVar10 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  uVar7 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar7 == 0) {
    return (int *)0x0;
  }
  do {
    piVar6 = (int *)*piVar10;
    if (*piVar6 == param_5) {
LAB_7801ae04:
      if ((*(byte *)(piVar6 + 5) & 3) == 0) {
        return piVar6;
      }
    }
    else {
      pbVar11 = (byte *)(param_5 + 8);
      pbVar3 = (byte *)(*piVar6 + 8);
      do {
        bVar1 = *pbVar3;
        bVar12 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_7801adfb:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_7801ae00;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar12 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_7801adfb;
        pbVar3 = pbVar3 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_7801ae00:
      if (iVar4 == 0) goto LAB_7801ae04;
    }
    uVar8 = uVar8 + 1;
    piVar10 = piVar10 + 1;
    if (uVar7 <= uVar8) {
      return (int *)0x0;
    }
  } while( true );
}


