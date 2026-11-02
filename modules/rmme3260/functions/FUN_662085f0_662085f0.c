/* Module: rmme3260.dll
   Function: FUN_662085f0
   Address: 662085f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662085f0(int param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_20 [3];
  byte *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0x40012;
  FUN_66250280(local_20,param_2);
  FUN_662500f0(local_14);
  iVar5 = 0;
  *param_3 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x38) + iVar5 * 4);
      iVar3 = FUN_662506b0(local_14,0x48);
      (**(code **)(*piVar2 + 0x40))(piVar2,iVar3,0x48);
      FUN_66250730(local_14,-1);
      pbVar4 = local_20[0];
      pbVar6 = local_14[0];
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_66208679:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_6620867e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_66208679;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_6620867e:
      if (iVar3 == 0) {
        *param_3 = piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        local_8 = 0;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x3c));
  }
  FUN_66250210((int *)local_14);
  FUN_66250210((int *)local_20);
  return local_8;
}


