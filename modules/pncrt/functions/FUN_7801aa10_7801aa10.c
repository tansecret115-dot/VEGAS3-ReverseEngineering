/* Module: pncrt.dll
   Function: FUN_7801aa10
   Address: 7801aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl
FUN_7801aa10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  bool bVar8;
  uint local_4;
  
  local_4 = 0;
  piVar6 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar2 == 0) {
    return (int *)0x0;
  }
  do {
    piVar3 = (int *)*piVar6;
    if (*piVar3 == param_5) {
LAB_7801aa72:
      if ((*(byte *)(piVar3 + 5) & 1) == 0) {
        return piVar3;
      }
    }
    else {
      pbVar7 = (byte *)(param_5 + 8);
      pbVar4 = (byte *)(*piVar3 + 8);
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_7801aa69:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_7801aa6e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_7801aa69;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_7801aa6e:
      if (iVar5 == 0) goto LAB_7801aa72;
    }
    local_4 = local_4 + 1;
    piVar6 = piVar6 + 1;
    if (uVar2 <= local_4) {
      return (int *)0x0;
    }
  } while( true );
}


