/* Module: mcplug.dll
   Function: FUN_0046edf0
   Address: 0046edf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046edf0(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint local_438 [6];
  uint local_420 [264];
  
  FUN_0046eb60(param_3);
  FUN_0046eb80(param_2,local_438);
  FUN_0046eb80(param_1,local_438 + 3);
  puVar5 = local_438 + 6;
  iVar6 = 0x58;
  do {
    FUN_0046eb80((int)(puVar5 + -3),puVar5);
    FUN_0046eb20(puVar5);
    puVar5 = puVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar5 = local_438 + DAT_004add98 * 3 + 3;
  iVar6 = 3;
  puVar3 = param_3;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *(uint *)(((int)local_438 - (int)param_3) + (int)puVar3) & uVar1;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  piVar7 = &DAT_004ae068;
  do {
    FUN_0046eb20(local_438);
    puVar5 = local_438 + piVar7[-0xb3] * 3 + 3;
    iVar6 = 3;
    puVar3 = local_438 + *piVar7 * 3 + 3;
    puVar4 = param_3;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = *puVar4 ^ (uVar1 ^ uVar2) & *(uint *)((int)puVar4 + ((int)local_438 - (int)param_3))
      ;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar6 != 0);
    piVar7 = piVar7 + 1;
  } while ((int)piVar7 < 0x4ae1c8);
  return;
}


