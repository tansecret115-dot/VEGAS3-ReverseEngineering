/* Module: pncrt.dll
   Function: FUN_7801aab0
   Address: 7801aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_7801aab0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_c;
  
  local_c = 0;
  piVar8 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar2 = (int *)*piVar8;
      if (*piVar2 == param_5) {
LAB_7801ab1b:
        uVar5 = 0;
        piVar7 = piVar8;
        if (piVar2[1] != 0) {
          do {
            piVar7 = piVar7 + 1;
            iVar4 = *(int *)*piVar7;
            if (iVar4 == param_3) {
LAB_7801ab67:
              iVar4 = FUN_7801ae40(param_1,(int *)*piVar7 + 2);
              if (iVar4 == param_4) {
                return piVar2;
              }
            }
            else {
              pbVar9 = (byte *)(param_3 + 8);
              pbVar3 = (byte *)(iVar4 + 8);
              do {
                bVar1 = *pbVar3;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_7801ab5e:
                  iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_7801ab63;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_7801ab5e;
                pbVar3 = pbVar3 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_7801ab63:
              if (iVar4 == 0) goto LAB_7801ab67;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)piVar2[1]);
        }
      }
      else {
        pbVar9 = (byte *)(param_5 + 8);
        pbVar3 = (byte *)(*piVar2 + 8);
        do {
          bVar1 = *pbVar3;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_7801ab12:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_7801ab17;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_7801ab12;
          pbVar3 = pbVar3 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_7801ab17:
        if (iVar4 == 0) goto LAB_7801ab1b;
      }
      local_c = local_c + 1;
      piVar8 = piVar8 + 1;
    } while (local_c < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  uVar6 = 0;
  piVar8 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  uVar5 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar5 == 0) {
    return (int *)0x0;
  }
  do {
    piVar2 = (int *)*piVar8;
    if (*piVar2 == param_5) {
LAB_7801ac08:
      if ((*(byte *)(piVar2 + 5) & 3) == 0) {
        return piVar2;
      }
    }
    else {
      pbVar9 = (byte *)(param_5 + 8);
      pbVar3 = (byte *)(*piVar2 + 8);
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_7801abff:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_7801ac04;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_7801abff;
        pbVar3 = pbVar3 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_7801ac04:
      if (iVar4 == 0) goto LAB_7801ac08;
    }
    uVar6 = uVar6 + 1;
    piVar8 = piVar8 + 1;
    if (uVar5 <= uVar6) {
      return (int *)0x0;
    }
  } while( true );
}


